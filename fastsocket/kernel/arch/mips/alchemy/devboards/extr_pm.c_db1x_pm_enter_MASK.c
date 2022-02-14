
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int suspend_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_5(suspend_state_t VAR_8)
{

 FUNC_0();


 FUNC_4(0, VAR_4);
 FUNC_3();
 FUNC_4(0, VAR_5);
 FUNC_3();

 FUNC_4(VAR_7, VAR_4);
 FUNC_3();


 while (FUNC_1(VAR_1) & VAR_0)
  asm volatile ("nop");

 FUNC_4(FUNC_1(VAR_3) + VAR_6, VAR_2);
 FUNC_3();


 while (FUNC_1(VAR_1) & VAR_0)
  asm volatile ("nop");


 FUNC_2();

 return 0;
}
