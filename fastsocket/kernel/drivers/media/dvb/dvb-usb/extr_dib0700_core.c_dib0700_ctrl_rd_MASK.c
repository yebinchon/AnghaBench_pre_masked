
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dvb_usb_device {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int*,int,int (*) (char*)) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int,int,int,int,int*,int,int ) ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(struct dvb_usb_device *VAR_4, u8 *VAR_5, u8 VAR_6, u8 *VAR_7, u8 VAR_8)
{
 u16 VAR_9, VAR_10;
 int VAR_11;

 if (VAR_6 < 2) {
  FUNC_3("tx buffer length is smaller than 2. Makes no sense.");
  return -VAR_0;
 }
 if (VAR_6 > 4) {
  FUNC_3("tx buffer length is larger than 4. Not supported.");
  return -VAR_0;
 }

 FUNC_0(">>> ");
 FUNC_2(VAR_5,VAR_6,FUNC_0);

 VAR_10 = ((VAR_6 - 2) << 8) | VAR_5[1];
 VAR_9 = 0;
 if (VAR_6 > 2)
  VAR_9 |= (VAR_5[2] << 8);
 if (VAR_6 > 3)
  VAR_9 |= VAR_5[3];

 VAR_11 = FUNC_4(VAR_4->udev, FUNC_5(VAR_4->udev,0), VAR_5[0],
   VAR_3 | VAR_2, VAR_10, VAR_9, VAR_7, VAR_8,
   VAR_1);

 if (VAR_11 < 0)
  FUNC_1("ep 0 read error (status = %d)\n",VAR_11);

 FUNC_0("<<< ");
 FUNC_2(VAR_7, VAR_8, FUNC_0);

 return VAR_11;
}
