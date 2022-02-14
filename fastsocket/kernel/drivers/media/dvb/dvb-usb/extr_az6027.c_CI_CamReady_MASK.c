
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct dvb_usb_device {int dummy; } ;
struct dvb_ca_en50221 {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dvb_usb_device*,int,scalar_t__,scalar_t__,int*,int) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_ca_en50221 *VAR_3, int VAR_4)
{
 struct dvb_usb_device *VAR_5 = (struct dvb_usb_device *)VAR_3->data;

 int VAR_6;
 u8 VAR_7;
 u16 VAR_8;
 u16 VAR_9;
 int VAR_10;
 u8 *VAR_11;

 VAR_11 = FUNC_2(12, VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_7 = 0xC8;
 VAR_8 = 0;
 VAR_9 = 0;
 VAR_10 = 1;

 VAR_6 = FUNC_0(VAR_5, VAR_7, VAR_8, VAR_9, VAR_11, VAR_10);
 if (VAR_6 < 0) {
  FUNC_3("usb in operation failed. (%d)", VAR_6);
  VAR_6 = -VAR_0;
 } else{
  VAR_6 = VAR_11[0];
 }
 FUNC_1(VAR_11);
 return VAR_6;
}
