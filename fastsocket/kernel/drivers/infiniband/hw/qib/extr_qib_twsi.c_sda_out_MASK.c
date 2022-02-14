
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef unsigned long u32 ;
struct qib_devdata {unsigned long gpio_sda_num; int (* f_gpio_mod ) (struct qib_devdata*,int ,unsigned long,unsigned long) ;} ;


 int FUNC_0 (struct qib_devdata*) ;
 int FUNC_1 (struct qib_devdata*,int ,unsigned long,unsigned long) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct qib_devdata *VAR_0, u8 VAR_1)
{
 u32 VAR_2;

 VAR_2 = 1UL << VAR_0->gpio_sda_num;


 VAR_0->f_gpio_mod(VAR_0, 0, VAR_1 ? 0 : VAR_2, VAR_2);

 FUNC_0(VAR_0);
 FUNC_2(2);
}
