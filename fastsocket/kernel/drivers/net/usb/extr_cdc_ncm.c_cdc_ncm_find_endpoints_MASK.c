
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct usb_interface {TYPE_2__* cur_altsetting; } ;
struct TYPE_6__ {int bmAttributes; } ;
struct usb_host_endpoint {TYPE_3__ desc; } ;
struct cdc_ncm_ctx {struct usb_host_endpoint* out_ep; struct usb_host_endpoint* in_ep; struct usb_host_endpoint* status_ep; } ;
struct TYPE_4__ {scalar_t__ bNumEndpoints; } ;
struct TYPE_5__ {struct usb_host_endpoint* endpoint; TYPE_1__ desc; } ;


 int VAR_0 ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_1(struct cdc_ncm_ctx *VAR_1, struct usb_interface *VAR_2)
{
 struct usb_host_endpoint *VAR_3;
 u8 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->cur_altsetting->desc.bNumEndpoints; VAR_4++) {

  VAR_3 = VAR_2->cur_altsetting->endpoint + VAR_4;
  switch (VAR_3->desc.bmAttributes & VAR_0) {
  case 128:
   if (FUNC_0(&VAR_3->desc)) {
    if (VAR_1->status_ep == ((void*)0))
     VAR_1->status_ep = VAR_3;
   }
   break;

  case 129:
   if (FUNC_0(&VAR_3->desc)) {
    if (VAR_1->in_ep == ((void*)0))
     VAR_1->in_ep = VAR_3;
   } else {
    if (VAR_1->out_ep == ((void*)0))
     VAR_1->out_ep = VAR_3;
   }
   break;

  default:
   break;
  }
 }
}
