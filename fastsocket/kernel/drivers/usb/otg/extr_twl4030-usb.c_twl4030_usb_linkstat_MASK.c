
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int default_a; int state; } ;
struct twl4030_usb {int linkstat; int lock; TYPE_1__ otg; int dev; } ;
typedef enum linkstat { ____Placeholder_linkstat } linkstat ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,int,int,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct twl4030_usb*,int ,int ) ;

__attribute__((used)) static enum linkstat FUNC_6(struct twl4030_usb *VAR_8)
{
 int VAR_9;
 int VAR_10 = VAR_6;
 VAR_9 = FUNC_5(VAR_8, VAR_3,
   VAR_2);
 if (VAR_9 < 0)
  FUNC_2(VAR_8->dev, "USB link status err %d\n", VAR_9);
 else if (VAR_9 & (FUNC_0(7) | FUNC_0(2))) {
  if (VAR_9 & FUNC_0(2))
   VAR_10 = VAR_4;
  else
   VAR_10 = VAR_7;
 } else
  VAR_10 = VAR_5;

 FUNC_1(VAR_8->dev, "HW_CONDITIONS 0x%02x/%d; link %d\n",
   VAR_9, VAR_9, VAR_10);





 FUNC_3(&VAR_8->lock);
 VAR_8->linkstat = VAR_10;
 if (VAR_10 == VAR_4) {
  VAR_8->otg.default_a = 1;
  VAR_8->otg.state = VAR_0;
 } else {
  VAR_8->otg.default_a = 0;
  VAR_8->otg.state = VAR_1;
 }
 FUNC_4(&VAR_8->lock);

 return VAR_10;
}
