
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_complete_t ;
struct TYPE_2__ {int bmAttributes; int bInterval; } ;
struct usb_host_endpoint {TYPE_1__ desc; } ;
struct usb_device {struct usb_host_endpoint** ep_out; struct usb_host_endpoint** ep_in; } ;
struct urb {scalar_t__ actual_length; struct completion* context; } ;
struct completion {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct completion*) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct urb*,struct usb_device*,unsigned int,void*,unsigned int,int ,int *) ;
 int FUNC_2 (struct urb*,struct usb_device*,unsigned int,void*,unsigned int,int ,int *,int ) ;
 unsigned int FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 int FUNC_5 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_6(struct urb *VAR_6,
        struct usb_device *VAR_7,
        unsigned int VAR_8, void *VAR_9,
        unsigned int VAR_10, struct completion *VAR_11)
{
 struct usb_host_endpoint *VAR_12;
 struct usb_host_endpoint **VAR_13;
 unsigned int VAR_14;

 int VAR_15;

 VAR_13 = FUNC_4(VAR_8) ? VAR_7->ep_in : VAR_7->ep_out;
 VAR_14 = FUNC_3(VAR_8);
 VAR_12 = VAR_13[VAR_14];

 if (!VAR_12 || (VAR_10 == 0))
  return -VAR_0;

 if ((VAR_12->desc.bmAttributes & VAR_3)
     == VAR_4) {
  VAR_8 = (VAR_8 & ~(3 << 30)) | (VAR_2 << 30);
  FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
     (usb_complete_t)VAR_5,
     ((void*)0), VAR_12->desc.bInterval);
 } else
  FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
      (usb_complete_t)VAR_5,
      ((void*)0));

 FUNC_0(VAR_11);
 VAR_6->context = VAR_11;
 VAR_6->actual_length = 0;
 VAR_15 = FUNC_5(VAR_6, VAR_1);

 return VAR_15;
}
