
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 () ;

void FUNC_3(void)
{
 unsigned long VAR_6;

 if (!FUNC_2() || !VAR_3 || !VAR_5)
  return;

 VAR_6 = FUNC_0(VAR_0);
 if (VAR_4) {
  VAR_6 &= ~VAR_2;
  VAR_4 = 0;
 }
 VAR_6 &= ~VAR_1;
 FUNC_1(VAR_6, VAR_0);
}
