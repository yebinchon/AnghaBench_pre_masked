
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct gtco {int buf_dma; int buffer; int usbdev; int urbinfo; int inputdevice; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct gtco*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 struct gtco* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct usb_interface *VAR_1)
{

 struct gtco *VAR_2 = FUNC_5(VAR_1);


 if (VAR_2) {
  FUNC_1(VAR_2->inputdevice);
  FUNC_6(VAR_2->urbinfo);
  FUNC_4(VAR_2->urbinfo);
  FUNC_3(VAR_2->usbdev, VAR_0,
    VAR_2->buffer, VAR_2->buf_dma);
  FUNC_2(VAR_2);
 }

 FUNC_0(&VAR_1->dev, "gtco driver disconnected\n");
}
