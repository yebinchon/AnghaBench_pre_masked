
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nLen; int pz; } ;
typedef TYPE_1__ tSkipListKey ;
typedef int int32_t ;


 int FUNC_0 (int ,int ) ;

int32_t FUNC_1(const void *VAR_0, const void *VAR_1) {
  tSkipListKey *VAR_2 = (tSkipListKey *)VAR_0;
  tSkipListKey *VAR_3 = (tSkipListKey *)VAR_1;

  if (VAR_2->nLen == 0 && VAR_3->nLen == 0) {
    return 0;
  }


  if (VAR_2->nLen == -1) {
    return 1;
  } else if (VAR_3->nLen == -1) {
    return -1;
  }

  int32_t VAR_4 = FUNC_0(((tSkipListKey *)VAR_0)->pz, ((tSkipListKey *)VAR_1)->pz);

  if (VAR_4 == 0) {
    return 0;
  } else {
    return VAR_4 > 0 ? 1 : -1;
  }
}
