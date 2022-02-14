
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom {struct wacom* wacom_wac; int data_dma; int data; int irq; int dev; } ;
struct usb_interface {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (struct wacom*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 struct wacom* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct usb_interface*,int *) ;
 int FUNC_8 (struct wacom*) ;
 int FUNC_9 (struct wacom*) ;

__attribute__((used)) static void FUNC_10(struct usb_interface *VAR_1)
{
 struct wacom *VAR_2 = FUNC_5(VAR_1);

 FUNC_7(VAR_1, ((void*)0));

 FUNC_6(VAR_2->irq);
 FUNC_0(VAR_2->dev);
 FUNC_8(VAR_2);
 FUNC_4(VAR_2->irq);
 FUNC_3(FUNC_1(VAR_1), VAR_0,
   VAR_2->wacom_wac->data, VAR_2->data_dma);
 FUNC_9(VAR_2->wacom_wac);
 FUNC_2(VAR_2->wacom_wac);
 FUNC_2(VAR_2);
}
