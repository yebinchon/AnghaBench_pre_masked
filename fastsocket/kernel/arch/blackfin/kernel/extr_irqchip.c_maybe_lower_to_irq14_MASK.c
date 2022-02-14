
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(void)
{
 unsigned short VAR_0, VAR_1;
 FUNC_0();
 VAR_0 = FUNC_1() & ~0x8000;
 VAR_1 = VAR_0 & (VAR_0 - 1);
 if (VAR_1 == 0)
  FUNC_2();
}
