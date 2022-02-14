
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct dfu_status {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usb_device*,int ,int ,int,int ,int ,struct dfu_status*,int,int ) ;
 int FUNC_1 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_device *VAR_5,
          struct dfu_status *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_5, FUNC_1(VAR_5, 0), VAR_0,
         VAR_4 | VAR_2 | VAR_3,
         0, 0, VAR_6, sizeof(struct dfu_status),
         VAR_1);
 return VAR_7;
}
