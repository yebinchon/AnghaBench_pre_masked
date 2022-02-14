
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct usb_endpoint_descriptor {int bEndpointAddress; } ;
struct i2400mu {TYPE_1__* usb_iface; int usb_dev; } ;
struct device {int dummy; } ;
typedef int __le32 ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (size_t,int ) ;
 int FUNC_3 (void*,int const*,size_t) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int,void*,size_t,int*,int ) ;
 struct usb_endpoint_descriptor* FUNC_7 (TYPE_1__*,unsigned int) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static
int FUNC_9(struct i2400mu *VAR_5,
     const __le32 *VAR_6,
     size_t VAR_7,
     unsigned VAR_8)
{
 struct usb_endpoint_descriptor *VAR_9 = ((void*)0);
 int VAR_10, VAR_11, VAR_12;
 struct device *VAR_13 = &VAR_5->usb_iface->dev;
 void *VAR_14;
 int VAR_15 = 1;

 VAR_12 = FUNC_4(VAR_5->usb_iface);
 if (VAR_12 < 0) {
  FUNC_0(VAR_13, "RESET: can't get autopm: %d\n", VAR_12);
  VAR_15 = 0;
 }
 VAR_12 = -VAR_2;
 VAR_14 = FUNC_2(VAR_7, VAR_3);
 if (VAR_14 == ((void*)0))
  goto error_kzalloc;
 VAR_9 = FUNC_7(VAR_5->usb_iface, VAR_8);
 VAR_10 = FUNC_8(VAR_5->usb_dev, VAR_9->bEndpointAddress);
 FUNC_3(VAR_14, VAR_6, VAR_7);
 VAR_12 = FUNC_6(VAR_5->usb_dev, VAR_10, VAR_14, VAR_7,
      &VAR_11, VAR_4);
 if (VAR_12 < 0) {
  if (VAR_12 != -VAR_0)
   FUNC_0(VAR_13, "E: barker error: %d\n", VAR_12);
 } else if (VAR_11 != VAR_7) {
  FUNC_0(VAR_13, "E: only %d bytes transmitted\n", VAR_11);
  VAR_12 = -VAR_1;
 }
 FUNC_1(VAR_14);
error_kzalloc:
 if (VAR_15)
  FUNC_5(VAR_5->usb_iface);
 return VAR_12;
}
