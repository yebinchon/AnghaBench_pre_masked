
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dvb_usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dvb_usb_device*,int ,int ,int ,int *,int) ;
 int FUNC_1 (char*,...) ;

int FUNC_2(struct dvb_usb_device *VAR_2, u16 VAR_3, u8 VAR_4)
{
 int VAR_5;
 u8 VAR_6 = VAR_4;
 FUNC_1("write register %x value %x ", VAR_3, VAR_4);
 VAR_5 = FUNC_0(VAR_2, VAR_3,
     VAR_0, VAR_1,
     &VAR_6, 1);
 if (VAR_5)
  FUNC_1("failed\n");
 else
  FUNC_1("ok\n");
 return VAR_5;
}
