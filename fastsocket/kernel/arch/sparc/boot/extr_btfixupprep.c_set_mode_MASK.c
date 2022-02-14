
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 size_t VAR_0 ;

__attribute__((used)) static void FUNC_1 (char *VAR_1)
{
   for (VAR_0 = 0;; VAR_0++)
  if (VAR_1[VAR_0] < '0' || VAR_1[VAR_0] > '9')
   break;
 if (VAR_0 != 8 && VAR_0 != 16)
  FUNC_0();
}
