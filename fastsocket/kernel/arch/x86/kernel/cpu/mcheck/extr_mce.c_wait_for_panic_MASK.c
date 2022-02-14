
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 long VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(void)
{
 long VAR_4 = VAR_0*VAR_1;

 FUNC_2();
 FUNC_0();
 while (VAR_4-- > 0)
  FUNC_3(1);
 if (VAR_3 == 0)
  VAR_3 = VAR_2;
 FUNC_1("Panicing machine check CPU died");
}
