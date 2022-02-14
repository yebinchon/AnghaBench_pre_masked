
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_usb_device*,int ,int*,int,int*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_device *VAR_1, u8 VAR_2,
     u8 VAR_3)
{
 u8 VAR_4[2], VAR_5;
 int VAR_6;

 VAR_4[0] = 0xff & ~VAR_2;
 VAR_4[1] = VAR_3 & VAR_2;

 VAR_6 = FUNC_0(VAR_1, VAR_0, VAR_4, 2, &VAR_5, 1);
 if (VAR_6 < 0 || (VAR_5 & VAR_2) != (VAR_3 & VAR_2))
  FUNC_1("bluebird_gpio_write failed.\n");

 return VAR_6 < 0 ? VAR_6 : VAR_5;
}
