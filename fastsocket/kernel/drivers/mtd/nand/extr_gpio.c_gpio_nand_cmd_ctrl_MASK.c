
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtd_info {int dummy; } ;
struct TYPE_3__ {int IO_ADDR_W; } ;
struct TYPE_4__ {int gpio_ale; int gpio_cle; int gpio_nce; } ;
struct gpiomtd {TYPE_1__ nand_chip; TYPE_2__ plat; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct gpiomtd*) ;
 struct gpiomtd* FUNC_1 (struct mtd_info*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct mtd_info *VAR_5, int VAR_6, unsigned int VAR_7)
{
 struct gpiomtd *VAR_8 = FUNC_1(VAR_5);

 FUNC_0(VAR_8);

 if (VAR_7 & VAR_3) {
  FUNC_2(VAR_8->plat.gpio_nce, !(VAR_7 & VAR_4));
  FUNC_2(VAR_8->plat.gpio_cle, !!(VAR_7 & VAR_1));
  FUNC_2(VAR_8->plat.gpio_ale, !!(VAR_7 & VAR_0));
  FUNC_0(VAR_8);
 }
 if (VAR_6 == VAR_2)
  return;

 FUNC_3(VAR_6, VAR_8->nand_chip.IO_ADDR_W);
 FUNC_0(VAR_8);
}
