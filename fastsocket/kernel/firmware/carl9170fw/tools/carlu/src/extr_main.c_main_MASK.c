
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;

int FUNC_4(int VAR_0, char *VAR_1[])
{
 FUNC_0();

 if (VAR_0 != 2 || FUNC_3(VAR_1[1]) != 2 || VAR_1[1][0] != '-')
  return FUNC_2();

 return FUNC_1(VAR_1[1][1]);
}
