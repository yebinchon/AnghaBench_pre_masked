
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,size_t,int ,size_t,int (*) (void const*,void const*)) ;

void FUNC_1(void* VAR_0,size_t VAR_1,size_t VAR_2,int (*VAR_3)(const void*,const void*)) {

  if (VAR_1 >= (((size_t)-1)>>1) ||
      VAR_2 >= (((size_t)-1)>>1)) return;







  if (VAR_1>1)
    FUNC_0(VAR_0,VAR_2,0,VAR_1-1,VAR_3);
}
