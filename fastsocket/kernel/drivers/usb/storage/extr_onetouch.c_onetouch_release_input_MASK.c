
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_onetouch {int data_dma; int data; int udev; int irq; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_1)
{
 struct usb_onetouch *VAR_2 = (struct usb_onetouch *) VAR_1;

 if (VAR_2) {
  FUNC_3(VAR_2->irq);
  FUNC_0(VAR_2->dev);
  FUNC_2(VAR_2->irq);
  FUNC_1(VAR_2->udev, VAR_0,
    VAR_2->data, VAR_2->data_dma);
 }
}
