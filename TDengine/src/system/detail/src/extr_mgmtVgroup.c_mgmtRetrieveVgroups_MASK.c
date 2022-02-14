
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int32_t ;
typedef int int16_t ;
struct TYPE_13__ {scalar_t__ ip; scalar_t__ publicIp; int vnode; } ;
struct TYPE_12__ {TYPE_1__* pDb; } ;
struct TYPE_11__ {int* offset; int* bytes; int numOfReads; void* pNode; } ;
struct TYPE_10__ {int numOfVnodes; TYPE_8__* vnodeGid; scalar_t__ lbState; int numOfMeters; int vgId; struct TYPE_10__* next; } ;
struct TYPE_9__ {TYPE_2__* pHead; } ;
typedef TYPE_2__ SVgObj ;
typedef TYPE_3__ SShowObj ;
typedef TYPE_4__ SConnObj ;


 int FUNC_0 (int *,TYPE_2__*,TYPE_8__*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,scalar_t__) ;

int FUNC_3(SShowObj *VAR_0, char *VAR_1, int VAR_2, SConnObj *VAR_3) {
  int VAR_4 = 0;
  SVgObj *VAR_5 = ((void*)0);
  char * VAR_6;
  int VAR_7 = 0;
  char VAR_8[20];

  int VAR_9 = 0;
  VAR_5 = VAR_3->pDb->pHead;
  while (VAR_5 != ((void*)0)) {
    VAR_9 = VAR_5->numOfVnodes > VAR_9 ? VAR_5->numOfVnodes : VAR_9;
    VAR_5 = VAR_5->next;
  }

  while (VAR_4 < VAR_2) {

    VAR_5 = (SVgObj *)VAR_0->pNode;
    if (VAR_5 == ((void*)0)) break;
    VAR_0->pNode = (void *)VAR_5->next;

    VAR_7 = 0;

    VAR_6 = VAR_1 + VAR_0->offset[VAR_7] * VAR_2 + VAR_0->bytes[VAR_7] * VAR_4;
    *(int32_t *)VAR_6 = VAR_5->vgId;
    VAR_7++;

    VAR_6 = VAR_1 + VAR_0->offset[VAR_7] * VAR_2 + VAR_0->bytes[VAR_7] * VAR_4;
    *(int32_t *)VAR_6 = VAR_5->numOfMeters;
    VAR_7++;

    VAR_6 = VAR_1 + VAR_0->offset[VAR_7] * VAR_2 + VAR_0->bytes[VAR_7] * VAR_4;
    FUNC_1(VAR_6, VAR_5->lbState ? "updating" : "ready");
    VAR_7++;

    for (int VAR_10 = 0; VAR_10 < VAR_9; ++VAR_10) {
      FUNC_2(VAR_8, VAR_5->vnodeGid[VAR_10].ip);
      VAR_6 = VAR_1 + VAR_0->offset[VAR_7] * VAR_2 + VAR_0->bytes[VAR_7] * VAR_4;
      FUNC_1(VAR_6, VAR_8);
      VAR_7++;

      VAR_6 = VAR_1 + VAR_0->offset[VAR_7] * VAR_2 + VAR_0->bytes[VAR_7] * VAR_4;
      *(int16_t *)VAR_6 = VAR_5->vnodeGid[VAR_10].vnode;
      VAR_7++;

      VAR_6 = VAR_1 + VAR_0->offset[VAR_7] * VAR_2 + VAR_0->bytes[VAR_7] * VAR_4;
      if (VAR_5->vnodeGid[VAR_10].ip != 0) {
        bool VAR_11 = FUNC_0(((void*)0), VAR_5, VAR_5->vnodeGid + VAR_10);
        FUNC_1(VAR_6, VAR_11 ? "ready" : "unsynced");
      } else {
        FUNC_1(VAR_6, "null");
      }
      VAR_7++;

      FUNC_2(VAR_8, VAR_5->vnodeGid[VAR_10].publicIp);
      VAR_6 = VAR_1 + VAR_0->offset[VAR_7] * VAR_2 + VAR_0->bytes[VAR_7] * VAR_4;
      FUNC_1(VAR_6, VAR_8);
      VAR_7++;
    }

    VAR_4++;
  }

  VAR_0->numOfReads += VAR_4;
  return VAR_4;
}
