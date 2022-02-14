
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* pz; int dKey; int i64Key; } ;
struct TYPE_8__ {struct TYPE_8__** pForward; TYPE_2__ key; } ;
typedef TYPE_3__ tSkipListNode ;
struct TYPE_6__ {TYPE_3__** pForward; } ;
struct TYPE_9__ {int nLevel; int keyType; TYPE_1__ pHead; } ;
typedef TYPE_4__ tSkipList ;
typedef int int32_t ;
typedef int int16_t ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;

void FUNC_1(tSkipList *VAR_1, int16_t VAR_2) {
  if (VAR_1 == ((void*)0) || VAR_1->nLevel < VAR_2 || VAR_2 <= 0) {
    return;
  }

  tSkipListNode *VAR_3 = VAR_1->pHead.pForward[VAR_2 - 1];
  int32_t VAR_4 = 1;
  while (VAR_3) {
    switch (VAR_1->keyType) {
      case 130:
      case 129:
      case 128:
      case 133:
        FUNC_0(VAR_0, "%d: %d \n", VAR_4++, VAR_3->key.i64Key);
        break;
      case 132:
        FUNC_0(VAR_0, "%d: %s \n", VAR_4++, VAR_3->key.pz);
        break;
      case 131:
        FUNC_0(VAR_0, "%d: %d \n", VAR_4++, VAR_3->key.dKey);
        break;
      default:
        FUNC_0(VAR_0, "\n");
    }
    VAR_3 = VAR_3->pForward[VAR_2 - 1];
  }
}
