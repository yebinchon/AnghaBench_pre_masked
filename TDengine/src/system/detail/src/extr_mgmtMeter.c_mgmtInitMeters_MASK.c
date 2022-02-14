
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {int acct; } ;
struct TYPE_21__ {TYPE_2__ cfg; } ;
struct TYPE_17__ {size_t sid; int vgId; } ;
struct TYPE_20__ {scalar_t__ meterType; char* pSql; int numOfColumns; char* pTagData; scalar_t__ schema; TYPE_1__ gid; int meterId; scalar_t__ numOfMeters; } ;
struct TYPE_19__ {int idPool; TYPE_4__** meterList; } ;
typedef TYPE_3__ SVgObj ;
typedef TYPE_4__ STabObj ;
typedef int SSchema ;
typedef TYPE_5__ SDbObj ;
typedef int SAcctObj ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int * VAR_4 ;
 int FUNC_2 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int *) ;
 int FUNC_4 (TYPE_5__*,TYPE_4__*) ;
 int VAR_5 ;
 int * FUNC_5 (int ) ;
 TYPE_5__* FUNC_6 (int ) ;
 TYPE_4__* FUNC_7 (char*) ;
 TYPE_3__* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (TYPE_4__*) ;
 scalar_t__ FUNC_10 (TYPE_4__*) ;
 int VAR_6 ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (TYPE_4__*) ;
 int FUNC_13 () ;
 void* FUNC_14 (int *,void*,void**) ;
 int * FUNC_15 (int ,scalar_t__,char*,int ,int ,int ) ;
 int FUNC_16 (int ,size_t,int) ;
 int VAR_7 ;

int FUNC_17() {
  void * VAR_8 = ((void*)0);
  SVgObj * VAR_9 = ((void*)0);
  STabObj * VAR_10 = ((void*)0);
  STabObj * VAR_11 = ((void*)0);
  SDbObj * VAR_12 = ((void*)0);
  SAcctObj *VAR_13 = ((void*)0);


  FUNC_11();

  VAR_4 = FUNC_15(VAR_7, sizeof(STabObj) + sizeof(SSchema) * VAR_1 + VAR_2,
                          "meters", VAR_0, VAR_5, VAR_6);
  if (VAR_4 == ((void*)0)) {
    FUNC_0("failed to init meter data");
    return -1;
  }

  VAR_8 = ((void*)0);
  while (1) {
    VAR_8 = FUNC_14(VAR_4, VAR_8, (void **)&VAR_10);
    if (VAR_10 == ((void*)0)) break;
    if (FUNC_9(VAR_10)) VAR_10->numOfMeters = 0;
  }

  VAR_8 = ((void*)0);
  while (1) {
    VAR_8 = FUNC_14(VAR_4, VAR_8, (void **)&VAR_10);
    if (VAR_10 == ((void*)0)) break;

    VAR_12 = FUNC_6(VAR_10->meterId);
    if (VAR_12 == ((void*)0)) {
      FUNC_0("failed to get db: %s", VAR_10->meterId);
      continue;
    }

    if (FUNC_10(VAR_10)) {
      VAR_9 = FUNC_8(VAR_10->gid.vgId);
      if (VAR_9 == ((void*)0) || VAR_9->meterList == ((void*)0)) {
        FUNC_0("failed to get vgroup:%i", VAR_10->gid.vgId);
        continue;
      }
      VAR_9->meterList[VAR_10->gid.sid] = VAR_10;
      FUNC_16(VAR_9->idPool, VAR_10->gid.sid, 1);

      if (VAR_10->meterType == VAR_3) {
        VAR_10->pSql = (char *)VAR_10->schema + sizeof(SSchema) * VAR_10->numOfColumns;
      }

      if (FUNC_12(VAR_10)) {
        VAR_10->pTagData = (char *)VAR_10->schema;
        VAR_11 = FUNC_7(VAR_10->pTagData);
        if (VAR_11) FUNC_2(VAR_11, VAR_10);
      }

      VAR_13 = FUNC_5(VAR_12->cfg.acct);
      if (VAR_13) FUNC_3(VAR_10, VAR_13);
    } else {
      if (VAR_12) FUNC_4(VAR_12, VAR_10);
    }
  }

  FUNC_13();

  FUNC_1("meter is initialized");
  return 0;
}
