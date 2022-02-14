
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom_features {int dummy; } ;
struct wacom {int lock; int irq; scalar_t__ open; TYPE_1__* wacom_wac; } ;
struct usb_interface {int dummy; } ;
struct TYPE_2__ {struct wacom_features* features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct wacom* FUNC_2 (struct usb_interface*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct wacom*) ;
 int FUNC_5 (struct usb_interface*,struct wacom_features*) ;
 int FUNC_6 (struct usb_interface*,struct wacom_features*) ;

__attribute__((used)) static int FUNC_7(struct usb_interface *VAR_2)
{
 struct wacom *VAR_3 = FUNC_2(VAR_2);
 struct wacom_features *VAR_4 = VAR_3->wacom_wac->features;
 int VAR_5 = 0;

 FUNC_0(&VAR_3->lock);


 if (!FUNC_6(VAR_2, VAR_4))
  FUNC_5(VAR_2, VAR_4);
 FUNC_4(VAR_3);

 if (VAR_3->open && FUNC_3(VAR_3->irq, VAR_1) < 0)
  VAR_5 = -VAR_0;

 FUNC_1(&VAR_3->lock);

 return VAR_5;
}
