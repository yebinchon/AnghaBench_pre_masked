
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {int dummy; } ;
struct u132 {int going; int sw_lock; TYPE_1__* platform_dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,struct u132*,...) ;
 struct u132* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct u132*,int ) ;

__attribute__((used)) static void FUNC_6(struct usb_hcd *VAR_0)
{
 struct u132 *VAR_1 = FUNC_1(VAR_0);
 if (VAR_1->going > 1) {
  FUNC_0(&VAR_1->platform_dev->dev, "u132 device %p(hcd=%p) has b"
   "een removed %d\n", VAR_1, VAR_0, VAR_1->going);
 } else if (VAR_1->going > 0) {
  FUNC_0(&VAR_1->platform_dev->dev, "device hcd=%p is being remov"
   "ed\n", VAR_0);
 } else {
  FUNC_3(&VAR_1->sw_lock);
  FUNC_2(100);
  FUNC_5(VAR_1, 0);
  FUNC_4(&VAR_1->sw_lock);
 }
}
