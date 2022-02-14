
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;
struct dvb_usb_device_properties {int dummy; } ;
struct dvb_usb_device_description {int dummy; } ;
typedef scalar_t__ s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (struct usb_device*,int ,int ,int,int ,int ,int *,int,int ) ;
 int FUNC_2 (struct usb_device*,int ) ;

int FUNC_3(struct usb_device *VAR_4, struct dvb_usb_device_properties *VAR_5,
   struct dvb_usb_device_description **VAR_6, int *VAR_7)
{
 u8 VAR_8[16];
 s16 VAR_9 = FUNC_1(VAR_4, FUNC_2(VAR_4,0),
  VAR_0, VAR_3 | VAR_2, 0, 0, VAR_8, 16, VAR_1);

 FUNC_0("FW GET_VERSION length: %d\n",VAR_9);

 *VAR_7 = VAR_9 <= 0;

 FUNC_0("cold: %d\n", *VAR_7);
 return 0;
}
