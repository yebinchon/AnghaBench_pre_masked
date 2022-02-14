
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mem_size_t ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (void*,int ) ;
 int FUNC_3 (void*,void*,int ) ;

void *
FUNC_4(void *VAR_0, mem_size_t VAR_1)
{
  void *VAR_2;
  VAR_2 = FUNC_1(VAR_1);
  if (VAR_2 == ((void*)0)) {
    return FUNC_2(VAR_0, VAR_1);
  }
  FUNC_3(VAR_2, VAR_0, VAR_1);
  FUNC_0(VAR_0);
  return VAR_2;
}
