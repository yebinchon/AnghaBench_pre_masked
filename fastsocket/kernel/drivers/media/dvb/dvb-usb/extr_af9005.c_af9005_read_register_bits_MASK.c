
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dvb_usb_device {int dummy; } ;


 int FUNC_0 (struct dvb_usb_device*,int ,int*) ;
 int FUNC_1 (char*,...) ;
 int* VAR_0 ;

int FUNC_2(struct dvb_usb_device *VAR_1, u16 VAR_2, u8 VAR_3,
         u8 VAR_4, u8 * VAR_5)
{
 u8 VAR_6;
 int VAR_7;
 FUNC_1("read bits %x %x %x", VAR_2, VAR_3, VAR_4);
 VAR_7 = FUNC_0(VAR_1, VAR_2, &VAR_6);
 if (VAR_7) {
  FUNC_1(" failed\n");
  return VAR_7;
 }
 *VAR_5 = (VAR_6 >> VAR_3) & VAR_0[VAR_4 - 1];
 FUNC_1(" value %x\n", *VAR_5);
 return 0;

}
