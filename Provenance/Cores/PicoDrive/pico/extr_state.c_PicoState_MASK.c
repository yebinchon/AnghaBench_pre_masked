
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*) ;
 void* FUNC_1 (char const*,int) ;
 int FUNC_2 (void*,int) ;

int FUNC_3(const char *VAR_0, int VAR_1)
{
  void *VAR_2 = ((void*)0);
  int VAR_3;

  VAR_2 = FUNC_1(VAR_0, VAR_1);
  if (VAR_2 == ((void*)0))
    return -1;

  VAR_3 = FUNC_2(VAR_2, VAR_1);
  FUNC_0(VAR_2);
  return VAR_3;
}
