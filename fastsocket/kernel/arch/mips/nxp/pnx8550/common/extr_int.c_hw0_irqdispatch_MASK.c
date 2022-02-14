
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(int VAR_2)
{

 VAR_2 = VAR_0 >> 3;

 if (VAR_2 == 0) {
  FUNC_1("hw0_irqdispatch: irq 0, spurious interrupt?\n");
  return;
 }
 FUNC_0(VAR_1 + VAR_2);
}
