
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int pll_errata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

void FUNC_1(struct radeon_device *VAR_3)
{
 if (VAR_3->pll_errata & VAR_0) {
  (void)FUNC_0(VAR_1);
  (void)FUNC_0(VAR_2);
 }
}
