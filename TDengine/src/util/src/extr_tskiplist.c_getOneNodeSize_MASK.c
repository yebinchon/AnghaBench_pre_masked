
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tSkipListNode ;
struct TYPE_3__ {scalar_t__ nType; int nLen; } ;
typedef TYPE_1__ tSkipListKey ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static size_t FUNC_0(const tSkipListKey *VAR_3, int32_t VAR_4) {
  size_t VAR_5 = sizeof(tSkipListNode) + sizeof(intptr_t) * (VAR_4 << 1);
  if (VAR_3->nType == VAR_0) {
    VAR_5 += VAR_3->nLen + 1;
  } else if (VAR_3->nType == VAR_1) {
    VAR_5 += (VAR_3->nLen + 1) * VAR_2;
  }

  return VAR_5;
}
