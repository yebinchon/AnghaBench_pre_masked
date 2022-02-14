
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_20__ {int numOfTables; } ;
struct TYPE_17__ {size_t sid; int vgId; } ;
struct TYPE_19__ {char* pTagData; int meterId; TYPE_1__ gid; scalar_t__ schema; } ;
struct TYPE_18__ {scalar_t__ numOfMeters; int idPool; int ** meterList; int dbName; int vgId; } ;
typedef TYPE_2__ SVgObj ;
typedef TYPE_3__ STabObj ;
typedef TYPE_4__ SDbObj ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ) ;
 TYPE_4__* FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (char*) ;
 TYPE_2__* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_9 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_10 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_11 (int ,size_t) ;

void *FUNC_12(void *VAR_0, char *VAR_1, int VAR_2, int *VAR_3) {
  STabObj *VAR_4 = ((void*)0);
  SVgObj * VAR_5 = ((void*)0);
  SDbObj * VAR_6 = ((void*)0);
  STabObj *VAR_7 = ((void*)0);

  VAR_4 = (STabObj *)VAR_0;

  if (FUNC_6(VAR_4)) {
    VAR_5 = FUNC_5(VAR_4->gid.vgId);
    if (VAR_5 == ((void*)0)) {
      FUNC_1("id:%s not in vgroup:%d", VAR_4->meterId, VAR_4->gid.vgId);
      return ((void*)0);
    }

    VAR_6 = FUNC_2(VAR_5->dbName);
    if (VAR_6 == ((void*)0)) {
      FUNC_1("vgroup:%d not in DB:%s", VAR_5->vgId, VAR_5->dbName);
      return ((void*)0);
    }
  }

  if (FUNC_7(VAR_4)) {
    VAR_4->pTagData = (char *)VAR_4->schema;
    VAR_7 = FUNC_4(VAR_4->pTagData);
    FUNC_0(VAR_7 != ((void*)0));
  }

  if (FUNC_6(VAR_4)) {
    if (VAR_7) FUNC_9(VAR_7, VAR_4);

    VAR_5->meterList[VAR_4->gid.sid] = ((void*)0);
    VAR_5->numOfMeters--;
    VAR_6->numOfTables--;
    FUNC_11(VAR_5->idPool, VAR_4->gid.sid);

    if (VAR_5->numOfMeters > 0) FUNC_8(VAR_6, VAR_5);
  } else {



    VAR_6 = FUNC_3(VAR_4->meterId);
    if (VAR_6) FUNC_10(VAR_6, VAR_4);
  }

  return ((void*)0);
}
