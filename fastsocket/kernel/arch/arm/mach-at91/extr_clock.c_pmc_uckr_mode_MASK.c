
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {unsigned int pmc_mask; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct clk *VAR_4, int VAR_5)
{
 unsigned int VAR_6 = FUNC_0(VAR_0);

 if (FUNC_2()) {
  if (VAR_5)
   VAR_6 |= VAR_1;
  else
   VAR_6 &= ~VAR_1;
 }

 if (VAR_5) {
  VAR_5 = VAR_2;
  FUNC_1(VAR_0, VAR_6 | VAR_4->pmc_mask);
 } else
  FUNC_1(VAR_0, VAR_6 & ~(VAR_4->pmc_mask));

 do {
  FUNC_3();
 } while ((FUNC_0(VAR_3) & VAR_2) != VAR_5);
}
