
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int minor; int dev; } ;
struct usb_dt9812 {int kref; TYPE_1__* slot; } ;
struct TYPE_2__ {int mutex; int * usb; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 struct usb_dt9812* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_6(struct usb_interface *VAR_2)
{
 struct usb_dt9812 *VAR_3;
 int VAR_4 = VAR_2->minor;

 FUNC_1(&VAR_1);
 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3->slot) {
  FUNC_1(&VAR_3->slot->mutex);
  VAR_3->slot->usb = ((void*)0);
  FUNC_3(&VAR_3->slot->mutex);
  VAR_3->slot = ((void*)0);
 }
 FUNC_5(VAR_2, ((void*)0));
 FUNC_3(&VAR_1);


 FUNC_2(&VAR_3->kref, VAR_0);

 FUNC_0(&VAR_2->dev, "USB Dt9812 #%d now disconnected\n", VAR_4);
}
