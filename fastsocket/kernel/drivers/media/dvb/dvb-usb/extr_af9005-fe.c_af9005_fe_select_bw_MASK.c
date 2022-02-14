
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {int dummy; } ;
typedef int fe_bandwidth_t ;





 int VAR_0 ;
 int FUNC_0 (struct dvb_usb_device*,int ,int ,int ,int) ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_device *VAR_4, fe_bandwidth_t VAR_5)
{
 u8 VAR_6;
 switch (VAR_5) {
 case 130:
  VAR_6 = 0;
  break;
 case 129:
  VAR_6 = 1;
  break;
 case 128:
  VAR_6 = 2;
  break;
 default:
  FUNC_1("Invalid bandwith %d.", VAR_5);
  return -VAR_0;
 }
 return FUNC_0(VAR_4, VAR_3, VAR_2,
       VAR_1, VAR_6);
}
