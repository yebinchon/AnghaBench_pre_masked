
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_device {int pll_errata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_5)
{



 if (VAR_5->pll_errata & VAR_0) {
  FUNC_2(5);
 }






 if (VAR_5->pll_errata & VAR_1) {
  uint32_t VAR_6, VAR_7;

  VAR_6 = FUNC_0(VAR_3);
  VAR_7 = VAR_6 & ~(0x3f | VAR_4);
  FUNC_1(VAR_3, VAR_7);
  VAR_7 = FUNC_0(VAR_2);
  FUNC_1(VAR_3, VAR_6);
 }
}
