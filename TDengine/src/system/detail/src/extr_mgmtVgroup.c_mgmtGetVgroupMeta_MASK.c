
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_17__ {TYPE_1__* pDb; } ;
struct TYPE_16__ {void* numOfColumns; } ;
struct TYPE_15__ {void* bytes; int name; void* type; } ;
struct TYPE_14__ {int* bytes; int numOfColumns; int* offset; int rowSize; TYPE_2__* pNode; int numOfRows; } ;
struct TYPE_13__ {int numOfVnodes; struct TYPE_13__* next; } ;
struct TYPE_12__ {TYPE_2__* pHead; int numOfVgroups; } ;
typedef TYPE_2__ SVgObj ;
typedef TYPE_3__ SShowObj ;
typedef TYPE_4__ SSchema ;
typedef TYPE_5__ SMeterMeta ;
typedef TYPE_6__ SConnObj ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 TYPE_4__* FUNC_2 (TYPE_5__*) ;

int FUNC_3(SMeterMeta *VAR_4, SShowObj *VAR_5, SConnObj *VAR_6) {
  int VAR_7 = 0;

  if (VAR_6->pDb == ((void*)0)) return VAR_0;

  SSchema *VAR_8 = FUNC_2(VAR_4);

  VAR_5->bytes[VAR_7] = 4;
  VAR_8[VAR_7].type = VAR_2;
  FUNC_1(VAR_8[VAR_7].name, "vgId");
  VAR_8[VAR_7].bytes = FUNC_0(VAR_5->bytes[VAR_7]);
  VAR_7++;

  VAR_5->bytes[VAR_7] = 4;
  VAR_8[VAR_7].type = VAR_2;
  FUNC_1(VAR_8[VAR_7].name, "meters");
  VAR_8[VAR_7].bytes = FUNC_0(VAR_5->bytes[VAR_7]);
  VAR_7++;

  VAR_5->bytes[VAR_7] = 9;
  VAR_8[VAR_7].type = VAR_1;
  FUNC_1(VAR_8[VAR_7].name, "vgroup status");
  VAR_8[VAR_7].bytes = FUNC_0(VAR_5->bytes[VAR_7]);
  VAR_7++;

  int VAR_9 = 0;
  SVgObj *VAR_10 = VAR_6->pDb->pHead;
  while (VAR_10 != ((void*)0)) {
    VAR_9 = VAR_10->numOfVnodes > VAR_9 ? VAR_10->numOfVnodes : VAR_9;
    VAR_10 = VAR_10->next;
  }

  for (int VAR_11 = 0; VAR_11 < VAR_9; ++VAR_11) {
    VAR_5->bytes[VAR_7] = 16;
    VAR_8[VAR_7].type = VAR_1;
    FUNC_1(VAR_8[VAR_7].name, "ip");
    VAR_8[VAR_7].bytes = FUNC_0(VAR_5->bytes[VAR_7]);
    VAR_7++;

    VAR_5->bytes[VAR_7] = 2;
    VAR_8[VAR_7].type = VAR_3;
    FUNC_1(VAR_8[VAR_7].name, "vnode");
    VAR_8[VAR_7].bytes = FUNC_0(VAR_5->bytes[VAR_7]);
    VAR_7++;

    VAR_5->bytes[VAR_7] = 9;
    VAR_8[VAR_7].type = VAR_1;
    FUNC_1(VAR_8[VAR_7].name, "vnode status");
    VAR_8[VAR_7].bytes = FUNC_0(VAR_5->bytes[VAR_7]);
    VAR_7++;

    VAR_5->bytes[VAR_7] = 16;
    VAR_8[VAR_7].type = VAR_1;
    FUNC_1(VAR_8[VAR_7].name, "public ip");
    VAR_8[VAR_7].bytes = FUNC_0(VAR_5->bytes[VAR_7]);
    VAR_7++;
  }

  VAR_4->numOfColumns = FUNC_0(VAR_7);
  VAR_5->numOfColumns = VAR_7;

  VAR_5->offset[0] = 0;
  for (int VAR_12 = 1; VAR_12 < VAR_7; ++VAR_12) VAR_5->offset[VAR_12] = VAR_5->offset[VAR_12 - 1] + VAR_5->bytes[VAR_12 - 1];

  VAR_5->numOfRows = VAR_6->pDb->numOfVgroups;
  VAR_5->pNode = VAR_6->pDb->pHead;
  VAR_5->rowSize = VAR_5->offset[VAR_7 - 1] + VAR_5->bytes[VAR_7 - 1];

  return 0;
}
