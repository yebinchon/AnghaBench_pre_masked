
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void *VAR_0)
{
 FUNC_3();
 if (FUNC_4()) {

  FUNC_2(FUNC_0(FUNC_1()), 0);

  asm volatile ("sync\nbreak");
 }
}
