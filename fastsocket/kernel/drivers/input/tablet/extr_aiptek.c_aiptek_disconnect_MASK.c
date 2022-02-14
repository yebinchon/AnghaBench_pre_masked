
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct usb_interface {TYPE_1__ dev; } ;
struct aiptek {int data_dma; int data; int urb; int inputdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (struct aiptek*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 struct aiptek* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_9(struct usb_interface *VAR_2)
{
 struct aiptek *VAR_3 = FUNC_6(VAR_2);



 FUNC_8(VAR_2, ((void*)0));
 if (VAR_3 != ((void*)0)) {


  FUNC_7(VAR_3->urb);
  FUNC_0(VAR_3->inputdev);
  FUNC_3(&VAR_2->dev.kobj, &VAR_1);
  FUNC_5(VAR_3->urb);
  FUNC_4(FUNC_1(VAR_2),
    VAR_0,
    VAR_3->data, VAR_3->data_dma);
  FUNC_2(VAR_3);
 }
}
