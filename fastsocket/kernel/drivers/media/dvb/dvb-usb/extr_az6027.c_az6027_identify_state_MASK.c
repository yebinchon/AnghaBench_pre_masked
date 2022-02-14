
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
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (struct usb_device*,int ,int,int,int,int ,int *,int,int ) ;
 int FUNC_4 (struct usb_device*,int ) ;

int FUNC_5(struct usb_device *VAR_5,
     struct dvb_usb_device_properties *VAR_6,
     struct dvb_usb_device_description **VAR_7,
     int *VAR_8)
{
 u8 *VAR_9;
 s16 VAR_10;

 VAR_9 = FUNC_2(16, VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_3(VAR_5,
      FUNC_4(VAR_5, 0),
      0xb7,
      VAR_4 | VAR_3,
      6,
      0,
      VAR_9,
      6,
      VAR_2);

 *VAR_8 = VAR_10 <= 0;
 FUNC_1(VAR_9);
 FUNC_0("cold: %d\n", *VAR_8);
 return 0;
}
