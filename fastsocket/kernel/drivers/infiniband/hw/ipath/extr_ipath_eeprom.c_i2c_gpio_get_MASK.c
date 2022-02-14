
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ipath_devdata {int ipath_gpio_scl; int ipath_gpio_sda; int ipath_extctrl; int ipath_gpio_lock; TYPE_1__* ipath_kregs; } ;
typedef enum i2c_type { ____Placeholder_i2c_type } i2c_type ;
typedef enum i2c_state { ____Placeholder_i2c_state } i2c_state ;
struct TYPE_2__ {int kr_extstatus; int kr_extctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ipath_devdata*,int ) ;
 int FUNC_1 (struct ipath_devdata*,int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct ipath_devdata *VAR_3,
   enum i2c_type VAR_4,
   enum i2c_state *VAR_5)
{
 u64 VAR_6, VAR_7;
 int VAR_8;
 unsigned long VAR_9 = 0;


 if (VAR_5 == ((void*)0)) {
  VAR_8 = 1;
  goto bail;
 }


 if (VAR_4 == VAR_2)
  VAR_7 = VAR_3->ipath_gpio_scl;
 else
  VAR_7 = VAR_3->ipath_gpio_sda;

 FUNC_2(&VAR_3->ipath_gpio_lock, VAR_9);
 VAR_3->ipath_extctrl &= ~VAR_7;
 FUNC_1(VAR_3, VAR_3->ipath_kregs->kr_extctrl, VAR_3->ipath_extctrl);




 VAR_6 = FUNC_0(VAR_3, VAR_3->ipath_kregs->kr_extstatus);
 FUNC_3(&VAR_3->ipath_gpio_lock, VAR_9);

 if (VAR_6 & VAR_7)
  *VAR_5 = VAR_0;
 else
  *VAR_5 = VAR_1;

 VAR_8 = 0;

bail:
 return VAR_8;
}
