
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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 int VAR_12 ;
 int FUNC_2 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_3 (struct wm97xx*) ;
 int FUNC_4 (struct wm97xx*) ;
 int FUNC_5 (struct wm97xx*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct wm97xx *VAR_16, int VAR_17)
{
 u16 VAR_18, VAR_19, VAR_20;
 int VAR_21 = 0;

 VAR_18 = VAR_16->dig[0];
 VAR_19 = VAR_16->dig[1];
 VAR_20 = VAR_16->dig[2];

 if (VAR_17) {

  if (VAR_16->mach_ops->acc_startup &&
   (VAR_21 = VAR_16->mach_ops->acc_startup(VAR_16)) < 0)
   return VAR_21;

  VAR_18 &= ~VAR_3;
  VAR_18 |= VAR_8 | VAR_7 | VAR_5 |
   VAR_6;
  if (VAR_15)
   VAR_18 |= VAR_4;
  VAR_19 &= ~(VAR_11 | VAR_13 |
   VAR_10);
  VAR_19 |= VAR_12 | FUNC_0(VAR_14) |
  FUNC_2(VAR_16->acc_slot) | FUNC_1(VAR_16->acc_rate);
  VAR_20 |= VAR_9;
 } else {
  VAR_18 &= ~(VAR_8 | VAR_7);
  VAR_19 &= ~VAR_12;
  VAR_20 &= ~VAR_9;
  if (VAR_16->mach_ops->acc_shutdown)
   VAR_16->mach_ops->acc_shutdown(VAR_16);
 }

 FUNC_5(VAR_16, VAR_0, VAR_18);
 FUNC_5(VAR_16, VAR_1, VAR_19);
 FUNC_5(VAR_16, VAR_2, VAR_20);

 return VAR_21;
}
