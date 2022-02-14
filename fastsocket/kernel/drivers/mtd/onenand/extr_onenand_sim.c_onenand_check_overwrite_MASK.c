
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(void *VAR_0, void *VAR_1, size_t VAR_2)
{
 unsigned int *VAR_3 = (unsigned int *) VAR_1;
 unsigned int *VAR_4 = (unsigned int *) VAR_0;
 int VAR_5;

 VAR_2 >>= 2;
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  if ((*VAR_3++ ^ *VAR_4++) != 0)
   return 1;

 return 0;
}
