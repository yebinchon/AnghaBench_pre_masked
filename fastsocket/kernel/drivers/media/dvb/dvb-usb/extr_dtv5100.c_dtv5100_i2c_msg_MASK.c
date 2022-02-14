
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int,int,int,int,int*,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_device *VAR_10, u8 VAR_11,
      u8 *VAR_12, u16 VAR_13, u8 *VAR_14, u16 VAR_15)
{
 u8 VAR_16;
 u8 VAR_17;
 u16 VAR_18;
 u16 VAR_19;

 switch (VAR_13) {
 case 1:

  VAR_16 = (VAR_11 == VAR_0 ? VAR_1 :
       VAR_3);
  VAR_17 = VAR_9 | VAR_7;
  VAR_18 = 0;
  break;
 case 2:

  VAR_16 = (VAR_11 == VAR_0 ? VAR_2 :
       VAR_4);
  VAR_17 = VAR_9 | VAR_8;
  VAR_18 = VAR_12[1];
  break;
 default:
  FUNC_3("wlen = %x, aborting.", VAR_13);
  return -VAR_6;
 }
 VAR_19 = (VAR_11 << 8) + VAR_12[0];

 FUNC_0(1);
 return FUNC_1(VAR_10->udev, FUNC_2(VAR_10->udev, 0), VAR_16,
          VAR_17, VAR_18, VAR_19, VAR_14, VAR_15,
          VAR_5);
}
