
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct driver_data {int dummy; } ;
struct chip_data {int flag; scalar_t__ cs_chg_udelay; int cs_gpio; int chip_select_num; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct driver_data*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct driver_data*,int) ;

__attribute__((used)) static void FUNC_5(struct driver_data *VAR_0, struct chip_data *VAR_1)
{
 if (FUNC_1(VAR_1->chip_select_num)) {
  u16 VAR_2 = FUNC_2(VAR_0);

  VAR_2 &= ~VAR_1->flag;
  VAR_2 |= (VAR_1->flag << 8);

  FUNC_4(VAR_0, VAR_2);
 } else {
  FUNC_0(VAR_1->cs_gpio, 1);
 }


 if (VAR_1->cs_chg_udelay)
  FUNC_3(VAR_1->cs_chg_udelay);
}
