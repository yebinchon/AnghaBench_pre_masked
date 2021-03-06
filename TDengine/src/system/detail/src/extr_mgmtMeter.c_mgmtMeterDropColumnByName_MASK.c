
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_13__ {scalar_t__ numOfTimeSeries; } ;
struct TYPE_16__ {TYPE_2__ acctInfo; } ;
struct TYPE_12__ {int acct; } ;
struct TYPE_15__ {int name; TYPE_1__ cfg; } ;
struct TYPE_14__ {scalar_t__ meterType; int numOfColumns; int numOfTags; int schemaSize; scalar_t__ sversion; struct TYPE_14__* next; struct TYPE_14__* pHead; scalar_t__ schema; scalar_t__ numOfMeters; int meterId; } ;
typedef TYPE_3__ STabObj ;
typedef int SSchema ;
typedef TYPE_4__ SDbObj ;
typedef TYPE_5__ SAcctObj ;


 int TSDB_CODE_APP_ERROR ;
 int TSDB_CODE_SUCCESS ;
 scalar_t__ TSDB_METER_METRIC ;
 scalar_t__ TSDB_METER_MTABLE ;
 scalar_t__ TSDB_METER_OTABLE ;
 scalar_t__ TSDB_METER_STABLE ;
 int mError (char*,int ) ;
 int memmove (scalar_t__,scalar_t__,int) ;
 int meterSdb ;
 int mgmtFindColumnIndex (TYPE_3__*,char const*) ;
 TYPE_5__* mgmtGetAcct (int ) ;
 TYPE_4__* mgmtGetDbByMeterId (int ) ;
 scalar_t__ mgmtIsNormalMeter (TYPE_3__*) ;
 scalar_t__ realloc (scalar_t__,int) ;
 int sdbUpdateRow (int ,TYPE_3__*,int ,int) ;

int32_t mgmtMeterDropColumnByName(STabObj *pMeter, const char *name) {
  SAcctObj *pAcct = ((void*)0);
  SDbObj * pDb = ((void*)0);

  if (pMeter == ((void*)0) || pMeter->meterType == TSDB_METER_MTABLE || pMeter->meterType == TSDB_METER_STABLE)
    return TSDB_CODE_APP_ERROR;

  int32_t index = mgmtFindColumnIndex(pMeter, name);
  if (index < 0) return TSDB_CODE_APP_ERROR;

  pDb = mgmtGetDbByMeterId(pMeter->meterId);
  if (pDb == ((void*)0)) {
    mError("meter: %s not belongs to any database", pMeter->meterId);
    return TSDB_CODE_APP_ERROR;
  }

  pAcct = mgmtGetAcct(pDb->cfg.acct);
  if (pAcct == ((void*)0)) {
    mError("DB: %s not belongs to any account", pDb->name);
    return TSDB_CODE_APP_ERROR;
  }

  if (pMeter->meterType == TSDB_METER_OTABLE) {
    memmove(pMeter->schema + sizeof(SSchema) * index, pMeter->schema + sizeof(SSchema) * (index + 1),
            sizeof(SSchema) * (pMeter->numOfColumns - index - 1));
  } else if (pMeter->meterType == TSDB_METER_METRIC) {
    memmove(pMeter->schema + sizeof(SSchema) * index, pMeter->schema + sizeof(SSchema) * (index + 1),
            sizeof(SSchema) * (pMeter->numOfColumns + pMeter->numOfTags - index - 1));
  }
  pMeter->schemaSize -= sizeof(SSchema);
  pMeter->numOfColumns--;
  if (mgmtIsNormalMeter(pMeter))
    pAcct->acctInfo.numOfTimeSeries--;
  else
    pAcct->acctInfo.numOfTimeSeries -= (pMeter->numOfMeters);

  pMeter->schema = realloc(pMeter->schema, pMeter->schemaSize);
  pMeter->sversion++;
  sdbUpdateRow(meterSdb, pMeter, 0, 1);

  if (pMeter->meterType == TSDB_METER_METRIC) {
    for (STabObj *pObj = pMeter->pHead; pObj != ((void*)0); pObj = pObj->next) {
      pObj->numOfColumns--;
      pObj->sversion = pMeter->sversion;
      sdbUpdateRow(meterSdb, pObj, 0, 1);
    }
  }

  return TSDB_CODE_SUCCESS;
}
