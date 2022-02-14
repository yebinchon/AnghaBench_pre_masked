
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wm97xx {int* dig; TYPE_1__* mach_ops; int acc_rate; int acc_slot; } ;
struct TYPE_2__ {int (* acc_startup ) (struct wm97xx*) ;int (* acc_shutdown ) (struct wm97xx*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (struct wm97xx*) ;
 int FUNC_4 (struct wm97xx*) ;
 int FUNC_5 (struct wm97xx*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct wm97xx *VAR_13, int VAR_14)
{
 u16 VAR_15, VAR_16;
 int VAR_17 = 0;

 VAR_15 = VAR_13->dig[1];
 VAR_16 = VAR_13->dig[2];

 if (VAR_14) {

  if (VAR_13->mach_ops->acc_startup &&
      (VAR_17 = VAR_13->mach_ops->acc_startup(VAR_13)) < 0)
   return VAR_17;
  VAR_15 &= ~(VAR_5 | VAR_3 |
     VAR_8 | VAR_10);
  VAR_15 |= VAR_7 | VAR_6 | VAR_9 |
   FUNC_0(VAR_11) |
   FUNC_2(VAR_13->acc_slot) |
   FUNC_1(VAR_13->acc_rate);
  if (VAR_12)
   VAR_15 |= VAR_4;
  VAR_16 |= VAR_2;
 } else {
  VAR_15 &= ~(VAR_7 | VAR_6 | VAR_9);
  VAR_16 &= ~VAR_2;
  if (VAR_13->mach_ops->acc_shutdown)
   VAR_13->mach_ops->acc_shutdown(VAR_13);
 }

 FUNC_5(VAR_13, VAR_0, VAR_15);
 FUNC_5(VAR_13, VAR_1, VAR_16);

 return VAR_17;
}
