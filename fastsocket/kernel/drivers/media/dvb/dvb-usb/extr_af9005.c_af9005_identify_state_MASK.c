
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;
struct dvb_usb_device_properties {int dummy; } ;
struct dvb_usb_device_description {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_device*,int ,int*) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(struct usb_device *VAR_2,
     struct dvb_usb_device_properties *VAR_3,
     struct dvb_usb_device_description **VAR_4,
     int *VAR_5)
{
 int VAR_6;
 u8 VAR_7;
 VAR_6 = FUNC_0(VAR_2, VAR_1, &VAR_7);
 if (VAR_6)
  return VAR_6;
 FUNC_1("result of FW_CONFIG in identify state %d\n", VAR_7);
 if (VAR_7 == 0x01)
  *VAR_5 = 1;
 else if (VAR_7 == 0x02)
  *VAR_5 = 0;
 else
  return -VAR_0;
 FUNC_1("Identify state cold = %d\n", *VAR_5);
 return 0;
}
