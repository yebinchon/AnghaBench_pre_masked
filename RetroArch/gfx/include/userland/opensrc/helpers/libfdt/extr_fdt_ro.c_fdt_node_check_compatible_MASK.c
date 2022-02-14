
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (void const*,int,char*,int*) ;
 scalar_t__ FUNC_1 (void const*,int,char const*) ;

int FUNC_2(const void *VAR_0, int VAR_1,
         const char *VAR_2)
{
 const void *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_0, VAR_1, "compatible", &VAR_4);
 if (!VAR_3)
  return VAR_4;
 if (FUNC_1(VAR_3, VAR_4, VAR_2))
  return 0;
 else
  return 1;
}
