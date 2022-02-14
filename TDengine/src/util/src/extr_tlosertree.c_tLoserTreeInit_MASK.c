
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_5__ {int totalEntries; int numOfEntries; TYPE_1__* pNode; } ;
struct TYPE_4__ {int index; } ;
typedef TYPE_2__ SLoserTreeInfo ;


 int FUNC_0 (int) ;

void FUNC_1(SLoserTreeInfo* VAR_0) {
  FUNC_0((VAR_0->totalEntries & 0x01) == 0 && (VAR_0->numOfEntries << 1 == VAR_0->totalEntries));

  for (int32_t VAR_1 = 0; VAR_1 < VAR_0->totalEntries; ++VAR_1) {
    if (VAR_1 < VAR_0->numOfEntries) {
      VAR_0->pNode[VAR_1].index = -1;
    } else {
      VAR_0->pNode[VAR_1].index = VAR_1 - VAR_0->numOfEntries;
    }
  }
}
