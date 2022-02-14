
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ipath_devdata {int ipath_led_override; int ipath_boardrev; scalar_t__ ipath_extctrl; int ipath_gpio_lock; TYPE_1__* ipath_kregs; } ;
struct TYPE_2__ {int kr_extctrl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct ipath_devdata*,int ,scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct ipath_devdata *VAR_11,
         u64 VAR_12, u64 VAR_13)
{
 u64 VAR_14;
 unsigned long VAR_15 = 0;



 if (VAR_10)
  return;


 if (VAR_11->ipath_led_override) {
  VAR_13 = (VAR_11->ipath_led_override & VAR_9)
   ? VAR_5
   : VAR_4;
  VAR_12 = (VAR_11->ipath_led_override & VAR_8)
   ? VAR_6
   : VAR_7;
 }

 FUNC_1(&VAR_11->ipath_gpio_lock, VAR_15);




 if (VAR_11->ipath_boardrev == 8) {





  VAR_14 = (VAR_11->ipath_extctrl & ~VAR_3)
   | VAR_2;
  if (VAR_13 == VAR_5)
   VAR_14 &= ~VAR_2;
  if (VAR_12 == VAR_6)
   VAR_14 |= VAR_3;
 }
 else {
  VAR_14 = VAR_11->ipath_extctrl &
   ~(VAR_0 |
     VAR_1);
  if (VAR_13 == VAR_5)
   VAR_14 |= VAR_0;
  if (VAR_12 == VAR_6)
   VAR_14 |= VAR_1;
 }
 VAR_11->ipath_extctrl = VAR_14;
 FUNC_0(VAR_11, VAR_11->ipath_kregs->kr_extctrl, VAR_14);
 FUNC_2(&VAR_11->ipath_gpio_lock, VAR_15);
}
