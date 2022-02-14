
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static void FUNC_1(int VAR_0, unsigned long VAR_1,
        unsigned long VAR_2)
{
 int VAR_3;

 VAR_1 &= ~VAR_2;

 for (VAR_3 = 0; VAR_3 <= 31; VAR_3++) {
  if (VAR_1 & (1L<<VAR_3)) {
   FUNC_0("IRQ %d asserted at resume\n", VAR_0+VAR_3);
  }
 }
}
