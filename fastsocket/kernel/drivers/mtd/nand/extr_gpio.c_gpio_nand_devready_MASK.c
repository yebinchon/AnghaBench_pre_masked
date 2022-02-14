
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_info {int dummy; } ;
struct TYPE_2__ {int gpio_rdy; } ;
struct gpiomtd {TYPE_1__ plat; } ;


 int FUNC_0 (int ) ;
 struct gpiomtd* FUNC_1 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_0)
{
 struct gpiomtd *VAR_1 = FUNC_1(VAR_0);
 return FUNC_0(VAR_1->plat.gpio_rdy);
}
