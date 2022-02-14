
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct dvb_usb_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct dvb_usb_device*,scalar_t__*,int,scalar_t__*,int,int ) ;
 int FUNC_2 (struct dvb_usb_device*,scalar_t__*,int *,int*) ;

int FUNC_3(struct dvb_usb_device *VAR_1, u32 *VAR_2, int *VAR_3)
{
 u8 VAR_4[5],VAR_5 = VAR_0;
 FUNC_1(VAR_1,&VAR_5,1,VAR_4,5,0);
 FUNC_2(VAR_1,VAR_4,VAR_2,VAR_3);
 if (VAR_4[0] != 0)
  FUNC_0("key: %x %x %x %x %x\n",VAR_4[0],VAR_4[1],VAR_4[2],VAR_4[3],VAR_4[4]);
 return 0;
}
