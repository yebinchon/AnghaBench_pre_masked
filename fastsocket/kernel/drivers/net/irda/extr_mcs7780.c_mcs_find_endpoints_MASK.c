
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bEndpointAddress; } ;
struct usb_host_endpoint {TYPE_1__ desc; } ;
struct mcs_cb {int ep_in; int ep_out; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct mcs_cb *VAR_1,
         struct usb_host_endpoint *VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;


 if (!VAR_2)
  return VAR_5;


 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (VAR_2[VAR_4].desc.bEndpointAddress & VAR_0)
   VAR_1->ep_in = VAR_2[VAR_4].desc.bEndpointAddress;
  else
   VAR_1->ep_out = VAR_2[VAR_4].desc.bEndpointAddress;




  if ((VAR_1->ep_in != 0) && (VAR_1->ep_out != 0)) {
   VAR_5 = 1;
   break;
  }
 }

 return VAR_5;
}
