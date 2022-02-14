
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ pData; } ;
typedef TYPE_1__ tSkipListNode ;
typedef size_t int32_t ;
struct TYPE_8__ {size_t size; int * val; int * pTabObjs; int qualSize; int * qualMeterObj; int type; int colIndex; } ;
struct TYPE_7__ {int bytes; int member_0; } ;
typedef int STabObj ;
typedef TYPE_2__ SSchema ;
typedef TYPE_3__ SJoinSupporter ;


 size_t FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int ,int ,size_t) ;
 char* FUNC_2 (int *,int ,TYPE_2__*) ;

__attribute__((used)) static bool FUNC_3(tSkipListNode* VAR_0, void* VAR_1) {
  SJoinSupporter* VAR_2 = (SJoinSupporter*)VAR_1;

  SSchema VAR_3 = {0};
  char* VAR_4 = FUNC_2((STabObj*)VAR_0->pData, VAR_2->colIndex, &VAR_3);

  for (int32_t VAR_5 = 0; VAR_5 < VAR_2->size; ++VAR_5) {
    int32_t VAR_6 = FUNC_0(VAR_4, VAR_2->val[VAR_5], VAR_2->type, VAR_3.bytes);
    if (VAR_6 == 0) {
      VAR_2->qualMeterObj[VAR_2->qualSize++] = VAR_2->pTabObjs[VAR_5];







      if (VAR_5 < VAR_2->size - 1) {
        FUNC_1(VAR_2->val[VAR_5], VAR_2->val[VAR_5 + 1], VAR_2->size - (VAR_5 + 1));
      }

      VAR_2->size -= 1;

      return 1;
    }
  }

  return 0;
}
