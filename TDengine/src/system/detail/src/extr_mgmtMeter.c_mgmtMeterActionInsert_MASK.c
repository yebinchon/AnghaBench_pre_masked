
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {int numOfTimeSeries; } ;
struct TYPE_27__ {TYPE_1__ acctInfo; } ;
struct TYPE_23__ {int maxSessions; int acct; } ;
struct TYPE_26__ {int numOfVgroups; TYPE_3__ cfg; int numOfTables; } ;
struct TYPE_22__ {int vgId; int sid; } ;
struct TYPE_25__ {int meterId; char* pTagData; scalar_t__ meterType; char* pSql; int numOfColumns; int * pSkipList; int * pHead; TYPE_2__ gid; scalar_t__ schema; } ;
struct TYPE_24__ {int dbName; int vgId; int numOfMeters; TYPE_5__** meterList; int idPool; } ;
typedef TYPE_4__ SVgObj ;
typedef TYPE_5__ STabObj ;
typedef int SSchema ;
typedef TYPE_6__ SDbObj ;
typedef TYPE_7__ SAcctObj ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_3 (TYPE_6__*,TYPE_5__*) ;
 TYPE_7__* FUNC_4 (int ) ;
 TYPE_6__* FUNC_5 (int) ;
 TYPE_6__* FUNC_6 (int) ;
 TYPE_5__* FUNC_7 (char*) ;
 TYPE_4__* FUNC_8 (int) ;
 scalar_t__ FUNC_9 (TYPE_5__*) ;
 scalar_t__ FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_6__*,TYPE_4__*) ;
 int VAR_1 ;
 int FUNC_12 (int ) ;

void *FUNC_13(void *VAR_2, char *VAR_3, int VAR_4, int *VAR_5) {
  STabObj * VAR_6 = ((void*)0);
  SVgObj * VAR_7 = ((void*)0);
  SDbObj * VAR_8 = ((void*)0);
  STabObj * VAR_9 = ((void*)0);
  SAcctObj *VAR_10 = ((void*)0);

  VAR_6 = (STabObj *)VAR_2;

  if (FUNC_9(VAR_6)) {
    VAR_7 = FUNC_8(VAR_6->gid.vgId);
    if (VAR_7 == ((void*)0)) {
      FUNC_1("id:%s not in vgroup:%d", VAR_6->meterId, VAR_6->gid.vgId);
      return ((void*)0);
    }

    VAR_8 = FUNC_5(VAR_7->dbName);
    if (VAR_8 == ((void*)0)) {
      FUNC_1("vgroup:%d not in DB:%s", VAR_7->vgId, VAR_7->dbName);
      return ((void*)0);
    }

    VAR_10 = FUNC_4(VAR_8->cfg.acct);

    if (VAR_10 == ((void*)0)) {
      FUNC_1("account not exists");
      return ((void*)0);
    }
  }

  if (FUNC_10(VAR_6)) {
    VAR_6->pTagData = (char *)VAR_6->schema;
    VAR_9 = FUNC_7(VAR_6->pTagData);
    FUNC_0(VAR_9 != ((void*)0));
  }

  if (VAR_6->meterType == VAR_0) {
    VAR_6->pSql = (char *)VAR_6->schema + sizeof(SSchema) * VAR_6->numOfColumns;
  }

  if (FUNC_9(VAR_6)) {
    if (VAR_9) FUNC_2(VAR_9, VAR_6);

    if (!VAR_1) {
      int VAR_11 = FUNC_12(VAR_7->idPool);
      if (VAR_11 != VAR_6->gid.sid) {
        FUNC_1("sid:%d is not matched from the master:%d", VAR_11, VAR_6->gid.sid);
        return ((void*)0);
      }
    }

    VAR_10->acctInfo.numOfTimeSeries += (VAR_6->numOfColumns - 1);
    VAR_7->numOfMeters++;
    VAR_8->numOfTables++;
    VAR_7->meterList[VAR_6->gid.sid] = VAR_6;

    if (VAR_7->numOfMeters >= VAR_8->cfg.maxSessions - 1 && VAR_8->numOfVgroups > 1) FUNC_11(VAR_8, VAR_7);
  } else {

    VAR_6->pHead = ((void*)0);
    VAR_6->pSkipList = ((void*)0);
    VAR_8 = FUNC_6(VAR_6->meterId);
    if (VAR_8) {
      FUNC_3(VAR_8, VAR_6);
    }
  }

  return ((void*)0);
}
