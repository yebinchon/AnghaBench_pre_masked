
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
struct ipath_devdata {unsigned long ipath_gpio_out; unsigned long ipath_gpio_scl; unsigned long ipath_gpio_scl_num; unsigned long ipath_gpio_sda; unsigned long ipath_gpio_sda_num; unsigned long ipath_extctrl; int ipath_gpio_lock; TYPE_1__* ipath_kregs; } ;
typedef enum i2c_type { ____Placeholder_i2c_type } i2c_type ;
typedef enum i2c_state { ____Placeholder_i2c_state } i2c_state ;
struct TYPE_2__ {int kr_gpio_out; int kr_extctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipath_devdata*,int ,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct ipath_devdata *VAR_2,
   enum i2c_type VAR_3,
   enum i2c_state VAR_4)
{
 u64 VAR_5, VAR_6, *VAR_7;
 unsigned long VAR_8 = 0;

 VAR_7 = &VAR_2->ipath_gpio_out;

 if (VAR_3 == VAR_1) {
  VAR_6 = VAR_2->ipath_gpio_scl;
  VAR_5 = (1UL << VAR_2->ipath_gpio_scl_num);
 } else {
  VAR_6 = VAR_2->ipath_gpio_sda;
  VAR_5 = (1UL << VAR_2->ipath_gpio_sda_num);
 }

 FUNC_1(&VAR_2->ipath_gpio_lock, VAR_8);
 if (VAR_4 == VAR_0) {

  VAR_2->ipath_extctrl &= ~VAR_6;
 } else {

  VAR_2->ipath_extctrl |= VAR_6;
 }
 FUNC_0(VAR_2, VAR_2->ipath_kregs->kr_extctrl, VAR_2->ipath_extctrl);


 if (VAR_4 == VAR_0)
  *VAR_7 |= VAR_5;
 else
  *VAR_7 &= ~VAR_5;

 FUNC_0(VAR_2, VAR_2->ipath_kregs->kr_gpio_out, *VAR_7);
 FUNC_2(&VAR_2->ipath_gpio_lock, VAR_8);

 return 0;
}
