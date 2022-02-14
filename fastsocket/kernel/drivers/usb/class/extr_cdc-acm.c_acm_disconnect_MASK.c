
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct usb_device {int dummy; } ;
struct tty_struct {int dummy; } ;
struct TYPE_2__ {scalar_t__ count; } ;
struct acm {TYPE_1__ port; struct usb_interface* control; struct usb_interface* data; int combined_interfaces; int ctrl_dma; int ctrl_buffer; int ctrlsize; int * dev; scalar_t__ country_codes; } ;


 int VAR_0 ;
 int FUNC_0 (struct acm*) ;
 int FUNC_1 (struct acm*) ;
 int FUNC_2 (struct acm*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int *) ;
 struct usb_device* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int FUNC_7 (struct acm*) ;
 int FUNC_8 (struct tty_struct*) ;
 int FUNC_9 (struct tty_struct*) ;
 struct tty_struct* FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct usb_device*,int ,int ,int ) ;
 int FUNC_12 (int *,struct usb_interface*) ;
 struct acm* FUNC_13 (struct usb_interface*) ;
 int FUNC_14 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_15(struct usb_interface *VAR_5)
{
 struct acm *VAR_6 = FUNC_13(VAR_5);
 struct usb_device *VAR_7 = FUNC_4(VAR_5);
 struct tty_struct *VAR_8;


 if (!VAR_6)
  return;

 FUNC_5(&VAR_4);
 if (VAR_6->country_codes) {
  FUNC_3(&VAR_6->control->dev,
    &VAR_3);
  FUNC_3(&VAR_6->control->dev,
    &VAR_2);
 }
 FUNC_3(&VAR_6->control->dev, &VAR_1);
 VAR_6->dev = ((void*)0);
 FUNC_14(VAR_6->control, ((void*)0));
 FUNC_14(VAR_6->data, ((void*)0));

 FUNC_7(VAR_6);

 FUNC_2(VAR_6);
 FUNC_11(VAR_7, VAR_6->ctrlsize, VAR_6->ctrl_buffer,
        VAR_6->ctrl_dma);
 FUNC_0(VAR_6);

 if (!VAR_6->combined_interfaces)
  FUNC_12(&VAR_0, VAR_5 == VAR_6->control ?
     VAR_6->data : VAR_6->control);

 if (VAR_6->port.count == 0) {
  FUNC_1(VAR_6);
  FUNC_6(&VAR_4);
  return;
 }

 FUNC_6(&VAR_4);
 VAR_8 = FUNC_10(&VAR_6->port);
 if (VAR_8) {
  FUNC_8(VAR_8);
  FUNC_9(VAR_8);
 }
}
