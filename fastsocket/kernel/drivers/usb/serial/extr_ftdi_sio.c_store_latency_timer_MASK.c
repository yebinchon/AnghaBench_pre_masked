
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct ftdi_private {int latency; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (char const*,int *,int) ;
 struct usb_serial_port* FUNC_1 (struct device*) ;
 struct ftdi_private* FUNC_2 (struct usb_serial_port*) ;
 int FUNC_3 (struct usb_serial_port*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
   struct device_attribute *VAR_2, const char *VAR_3,
   size_t VAR_4)
{
 struct usb_serial_port *VAR_5 = FUNC_1(VAR_1);
 struct ftdi_private *VAR_6 = FUNC_2(VAR_5);
 int VAR_7 = FUNC_0(VAR_3, ((void*)0), 10);
 int VAR_8 = 0;

 VAR_6->latency = VAR_7;
 VAR_8 = FUNC_3(VAR_5);
 if (VAR_8 < 0)
  return -VAR_0;
 return VAR_4;
}
