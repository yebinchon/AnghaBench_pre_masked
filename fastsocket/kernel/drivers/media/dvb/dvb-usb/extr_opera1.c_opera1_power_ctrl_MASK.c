
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {int udev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,int,int,int*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_device *VAR_2, int VAR_3)
{
 u8 VAR_4 = VAR_3 ? 0x01 : 0x00;

 if (VAR_1)
  FUNC_0("power %s", VAR_3 ? "on" : "off");
 return FUNC_1(VAR_2->udev, 0xb7, VAR_4,
    &VAR_4, 1, VAR_0);
}
