
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_gadget {int ep0; } ;
struct snd_card {int dummy; } ;
struct gmidi_device {TYPE_1__* req; struct snd_card* card; } ;
struct TYPE_2__ {int length; } ;


 int FUNC_0 (struct gmidi_device*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 struct gmidi_device* FUNC_2 (struct usb_gadget*) ;
 int FUNC_3 (struct gmidi_device*) ;
 int FUNC_4 (struct usb_gadget*,int *) ;
 int FUNC_5 (struct snd_card*) ;

__attribute__((used)) static void FUNC_6(struct usb_gadget *VAR_1)
{
 struct gmidi_device *VAR_2 = FUNC_2(VAR_1);
 struct snd_card *VAR_3;

 FUNC_0(VAR_2, "unbind\n");

 VAR_3 = VAR_2->card;
 VAR_2->card = ((void*)0);
 if (VAR_3) {
  FUNC_5(VAR_3);
 }


 if (VAR_2->req) {
  VAR_2->req->length = VAR_0;
  FUNC_1(VAR_1->ep0, VAR_2->req);
 }
 FUNC_3(VAR_2);
 FUNC_4(VAR_1, ((void*)0));
}
