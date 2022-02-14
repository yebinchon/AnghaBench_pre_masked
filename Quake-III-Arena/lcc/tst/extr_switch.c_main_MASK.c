
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char,int) ;

FUNC_7()
{
 int VAR_0; char *VAR_1;

 for (VAR_1 = "bfnrtvx"; *VAR_1; VAR_1++)
  FUNC_6("%c = 0x%x\n", *VAR_1, FUNC_0(*VAR_1));
 FUNC_2();
 FUNC_3();
 FUNC_4();
 for (VAR_0 = 0x1000000; VAR_0&0x7000000; VAR_0 += 0x1000000)
  FUNC_1(VAR_0);
 FUNC_5();
 return 0;
}
