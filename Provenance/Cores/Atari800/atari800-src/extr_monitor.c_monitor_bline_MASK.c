
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(void)
{
 FUNC_0(&VAR_0);
 if (VAR_0 >= 1008 && VAR_0 <= 1247)
  FUNC_1("Blinking scanline %d\n", VAR_0 - 1000);




 else
  FUNC_1("BLINE disabled\n");
}
