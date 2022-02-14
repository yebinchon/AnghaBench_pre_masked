
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*) ;
 int * VAR_2 ;
 int * FUNC_1 () ;

int FUNC_2(const int VAR_3, const char *VAR_4)
{
 int VAR_5;
 if ((VAR_5=FUNC_0(VAR_4)) != 0)
 {
  return VAR_5;
 }

 VAR_2 = FUNC_1();
 if (VAR_2 == ((void*)0))
 {
  return VAR_1 != 0 ? VAR_1 : VAR_0;
 }

 return 0;
}
