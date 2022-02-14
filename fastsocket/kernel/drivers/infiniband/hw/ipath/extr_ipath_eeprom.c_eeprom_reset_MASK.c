
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct ipath_devdata {int ipath_gpio_lock; TYPE_1__* ipath_kregs; void* ipath_extctrl; void* ipath_gpio_out; } ;
struct TYPE_2__ {int kr_gpio_out; int kr_extctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,unsigned long long) ;
 void* FUNC_1 (struct ipath_devdata*,int ) ;
 int FUNC_2 (struct ipath_devdata*,int ) ;
 scalar_t__ FUNC_3 (struct ipath_devdata*,int ) ;
 int FUNC_4 (struct ipath_devdata*,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct ipath_devdata *VAR_3)
{
 int VAR_4 = 9;
 u64 *VAR_5 = &VAR_3->ipath_gpio_out;
 int VAR_6;
 unsigned long VAR_7;

 FUNC_5(&VAR_3->ipath_gpio_lock, VAR_7);

 VAR_3->ipath_extctrl = FUNC_1(VAR_3, VAR_3->ipath_kregs->kr_extctrl);
 *VAR_5 = FUNC_1(VAR_3, VAR_3->ipath_kregs->kr_gpio_out);
 FUNC_6(&VAR_3->ipath_gpio_lock, VAR_7);

 FUNC_0(VAR_0, "Resetting i2c eeprom; initial gpioout reg "
     "is %llx\n", (unsigned long long) *VAR_5);






 FUNC_2(VAR_3, VAR_2);
 FUNC_4(VAR_3, VAR_1);


 while (VAR_4--) {
  FUNC_2(VAR_3, VAR_1);


  if (FUNC_3(VAR_3, 0)) {
   FUNC_4(VAR_3, VAR_2);
   FUNC_2(VAR_3, VAR_2);

   FUNC_2(VAR_3, VAR_1);
   FUNC_4(VAR_3, VAR_1);
   VAR_6 = 0;
   goto bail;
  }

  FUNC_2(VAR_3, VAR_2);
 }

 VAR_6 = 1;

bail:
 return VAR_6;
}
