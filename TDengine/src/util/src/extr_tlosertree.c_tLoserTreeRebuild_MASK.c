
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_5__ {int totalEntries; scalar_t__ numOfEntries; } ;
typedef TYPE_1__ SLoserTreeInfo ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(SLoserTreeInfo* VAR_0) {
  FUNC_0((VAR_0->totalEntries & 0x1) == 0);

  FUNC_2(VAR_0);
  for (int32_t VAR_1 = VAR_0->totalEntries - 1; VAR_1 >= VAR_0->numOfEntries; VAR_1--) {
    FUNC_1(VAR_0, VAR_1);
  }
}
