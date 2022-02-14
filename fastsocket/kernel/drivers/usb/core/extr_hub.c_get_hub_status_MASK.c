
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hub_status {int dummy; } ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct usb_device*,int ,int ,int,int ,int ,struct usb_hub_status*,int,int ) ;
 int FUNC_1 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_device *VAR_6,
  struct usb_hub_status *VAR_7)
{
 int VAR_8, VAR_9 = -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_4 && VAR_9 == -VAR_0; VAR_8++) {
  VAR_9 = FUNC_0(VAR_6, FUNC_1(VAR_6, 0),
   VAR_2, VAR_1 | VAR_3, 0, 0,
   VAR_7, sizeof(*VAR_7), VAR_5);
 }
 return VAR_9;
}
