
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct dvb_usb_device {int udev; } ;
struct TYPE_2__ {int demod_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;
 TYPE_1__ VAR_6 ;
 int FUNC_1 (struct dvb_usb_device*,int,int*,int,int*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,unsigned int,int,int,int,int,int*,int,int) ;
 unsigned int FUNC_4 (int ,int ) ;
 unsigned int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct dvb_usb_device *VAR_7, u8 VAR_8,
    u8 *VAR_9, u16 VAR_10, u8 *VAR_11, u16 VAR_12)
{
 u16 VAR_13;
 u16 VAR_14 = VAR_8 << (8 + 1);
 int VAR_15 = (VAR_11 == ((void*)0) || VAR_12 == 0);
 u8 VAR_16, VAR_17;
 unsigned int VAR_18;


 if (VAR_8 == VAR_6.demod_address &&
     VAR_9[0] == VAR_5)
  return FUNC_1(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);

 if (VAR_15) {
  VAR_16 = VAR_3;
  VAR_17 = VAR_4;
  VAR_18 = FUNC_5(VAR_7->udev, 0);
 } else {
  VAR_16 = VAR_2;
  VAR_17 = VAR_1;
  VAR_18 = FUNC_4(VAR_7->udev, 0);
 }

 switch (VAR_10) {
 case 1:
  VAR_13 = VAR_9[0];
  break;
 case 2:
  VAR_13 = VAR_9[0];
  VAR_14 = VAR_14 + VAR_9[1];
  break;
 case 3:

  VAR_13 = (VAR_9[2] << 8) | VAR_9[0];
  VAR_14 = VAR_14 + VAR_9[1];
  break;
 default:
  FUNC_0("wlen = %x, aborting.", VAR_10);
  return -VAR_0;
 }
 FUNC_2(1);
 return FUNC_3(VAR_7->udev, VAR_18, VAR_16, VAR_17,
          VAR_14, VAR_13, VAR_11, VAR_12, 2000);
}
