
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int obj; } ;
typedef TYPE_1__ rc_scratch_t ;



void* FUNC_0(void* VAR_0, int* VAR_1, int VAR_2, int VAR_3, rc_scratch_t* VAR_4) {
  void* VAR_5;

  *VAR_1 = (*VAR_1 + VAR_3 - 1) & ~(VAR_3 - 1);

  if (VAR_0 != 0) {
    VAR_5 = (void*)((char*)VAR_0 + *VAR_1);
  }
  else if (VAR_4 != 0) {
    VAR_5 = &VAR_4->obj;
  }
  else {
    VAR_5 = 0;
  }

  *VAR_1 += VAR_2;
  return VAR_5;
}
