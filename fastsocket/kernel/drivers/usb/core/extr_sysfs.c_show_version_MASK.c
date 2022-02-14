
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int bcdUSB; } ;
struct usb_device {TYPE_1__ descriptor; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int,int) ;
 struct usb_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct usb_device *VAR_3;
 u16 VAR_4;

 VAR_3 = FUNC_2(VAR_0);
 VAR_4 = FUNC_0(VAR_3->descriptor.bcdUSB);
 return FUNC_1(VAR_2, "%2x.%02x\n", VAR_4 >> 8, VAR_4 & 0xff);
}
