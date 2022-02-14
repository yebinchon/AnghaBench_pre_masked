
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct qib_devdata {int gpio_sda_num; int (* f_gpio_mod ) (struct qib_devdata*,int ,int ,int) ;} ;


 int FUNC_0 (struct qib_devdata*) ;
 int FUNC_1 (struct qib_devdata*,int ,int ,int) ;
 int FUNC_2 (struct qib_devdata*,int ,int ,int) ;

__attribute__((used)) static u8 FUNC_3(struct qib_devdata *VAR_0, int VAR_1)
{
 int VAR_2;
 u32 VAR_3, VAR_4;

 VAR_2 = VAR_0->gpio_sda_num;
 VAR_4 = (1UL << VAR_2);

 VAR_0->f_gpio_mod(VAR_0, 0, 0, VAR_4);
 VAR_3 = VAR_0->f_gpio_mod(VAR_0, 0, 0, 0);
 if (VAR_1)
  FUNC_0(VAR_0);
 return (VAR_3 & VAR_4) >> VAR_2;
}
