
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {void* sqlLen; TYPE_2__* schema; void* numOfColumns; void* sversion; int timeStamp; int meterId; int uid; void* sid; void* vnode; } ;
struct TYPE_12__ {int bytes; int colId; int type; } ;
struct TYPE_9__ {int sid; } ;
struct TYPE_11__ {int numOfColumns; scalar_t__ pSql; int sversion; int createdTime; int meterId; int uid; TYPE_1__ gid; } ;
struct TYPE_10__ {void* colId; void* bytes; int type; } ;
typedef TYPE_3__ STabObj ;
typedef TYPE_4__ SSchema ;
typedef int SMColumn ;
typedef TYPE_5__ SCreateMsg ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ) ;
 TYPE_4__* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (char*,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

char *FUNC_7(STabObj *VAR_1, char *VAR_2, int VAR_3) {
  SCreateMsg *VAR_4;

  VAR_4 = (SCreateMsg *)VAR_2;
  VAR_4->vnode = FUNC_2(VAR_3);
  VAR_4->sid = FUNC_1(VAR_1->gid.sid);
  VAR_4->uid = VAR_1->uid;
  FUNC_3(VAR_4->meterId, VAR_1->meterId, VAR_0);


  VAR_4->timeStamp = FUNC_0(VAR_1->createdTime);






  VAR_4->sversion = FUNC_1(VAR_1->sversion);
  VAR_4->numOfColumns = FUNC_2(VAR_1->numOfColumns);
  SSchema *VAR_5 = FUNC_4(VAR_1);

  for (int VAR_6 = 0; VAR_6 < VAR_1->numOfColumns; ++VAR_6) {
    VAR_4->schema[VAR_6].type = VAR_5[VAR_6].type;

    VAR_4->schema[VAR_6].bytes = FUNC_2(VAR_5[VAR_6].bytes);
    VAR_4->schema[VAR_6].colId = FUNC_2(VAR_5[VAR_6].colId);
  }

  VAR_2 = ((char *)(VAR_4->schema)) + VAR_1->numOfColumns * sizeof(SMColumn);
  VAR_4->sqlLen = 0;

  if (VAR_1->pSql) {
    int VAR_7 = FUNC_6(VAR_1->pSql) + 1;
    VAR_4->sqlLen = FUNC_2(VAR_7);
    FUNC_5(VAR_2, VAR_1->pSql);
    VAR_2 += VAR_7;
  }

  return VAR_2;
}
