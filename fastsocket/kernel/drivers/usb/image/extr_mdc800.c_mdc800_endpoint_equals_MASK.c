
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_endpoint_descriptor {scalar_t__ bEndpointAddress; scalar_t__ bmAttributes; scalar_t__ wMaxPacketSize; } ;



__attribute__((used)) static int FUNC_0 (struct usb_endpoint_descriptor *VAR_0,struct usb_endpoint_descriptor *VAR_1)
{
 return (
     ( VAR_0->bEndpointAddress == VAR_1->bEndpointAddress )
  && ( VAR_0->bmAttributes == VAR_1->bmAttributes )
  && ( VAR_0->wMaxPacketSize == VAR_1->wMaxPacketSize )
 );
}
