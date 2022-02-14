
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usb_device {int dummy; } ;
struct urb {int dummy; } ;
struct rt2x00_dev {int dev; } ;
struct TYPE_2__ {void* wLength; void* wIndex; scalar_t__ wValue; int bRequest; int bRequestType; } ;
struct rt2x00_async_read_data {int (* callback ) (struct rt2x00_dev*,int,u32) ;int reg; TYPE_1__ cr; struct rt2x00_dev* rt2x00dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (unsigned int const) ;
 int FUNC_1 (struct rt2x00_async_read_data*) ;
 struct rt2x00_async_read_data* FUNC_2 (int,int ) ;
 int VAR_3 ;
 struct usb_device* FUNC_3 (int ) ;
 struct urb* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct urb*,struct usb_device*,int ,unsigned char*,int *,int,int ,struct rt2x00_async_read_data*) ;
 int FUNC_6 (struct urb*) ;
 int FUNC_7 (struct usb_device*,int ) ;
 scalar_t__ FUNC_8 (struct urb*,int ) ;

void FUNC_9(struct rt2x00_dev *VAR_4,
       const unsigned int VAR_5,
       bool (*VAR_6)(struct rt2x00_dev*, int, u32))
{
 struct usb_device *VAR_7 = FUNC_3(VAR_4->dev);
 struct urb *VAR_8;
 struct rt2x00_async_read_data *VAR_9;

 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_0);
 if (!VAR_9)
  return;

 VAR_8 = FUNC_4(0, VAR_0);
 if (!VAR_8) {
  FUNC_1(VAR_9);
  return;
 }

 VAR_9->rt2x00dev = VAR_4;
 VAR_9->callback = VAR_6;
 VAR_9->cr.bRequestType = VAR_2;
 VAR_9->cr.bRequest = VAR_1;
 VAR_9->cr.wValue = 0;
 VAR_9->cr.wIndex = FUNC_0(VAR_5);
 VAR_9->cr.wLength = FUNC_0(sizeof(u32));

 FUNC_5(VAR_8, VAR_7, FUNC_7(VAR_7, 0),
        (unsigned char *)(&VAR_9->cr), &VAR_9->reg, sizeof(VAR_9->reg),
        VAR_3, VAR_9);
 if (FUNC_8(VAR_8, VAR_0) < 0)
  FUNC_1(VAR_9);
 FUNC_6(VAR_8);
}
