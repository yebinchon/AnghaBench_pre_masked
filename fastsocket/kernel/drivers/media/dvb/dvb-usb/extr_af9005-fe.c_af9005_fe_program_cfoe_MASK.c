
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct dvb_usb_device {int dummy; } ;
typedef int fe_bandwidth_t ;





 int VAR_0 ;
 int FUNC_0 (struct dvb_usb_device*,int,scalar_t__) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_device *VAR_1, fe_bandwidth_t VAR_2)
{
 u8 VAR_3, VAR_4, VAR_5, VAR_6, VAR_7[4];
 int VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;

 switch (VAR_2) {
 case 130:
  VAR_9 = 0x2ADB6DC;
  VAR_10 = 0xAB7313;
  VAR_11 = 0xAB6DB7;
  VAR_12 = 0xAB685C;
  VAR_13 = 0x156DB6E;
  VAR_14 = 0x55B6DC;
  break;

 case 129:
  VAR_9 = 0x3200001;
  VAR_10 = 0xC80640;
  VAR_11 = 0xC80000;
  VAR_12 = 0xC7F9C0;
  VAR_13 = 0x1900000;
  VAR_14 = 0x640000;
  break;

 case 128:
  VAR_9 = 0x3924926;
  VAR_10 = 0xE4996E;
  VAR_11 = 0xE49249;
  VAR_12 = 0xE48B25;
  VAR_13 = 0x1C92493;
  VAR_14 = 0x724925;
  break;
 default:
  FUNC_1("Invalid bandwith %d.", VAR_2);
  return -VAR_0;
 }





 VAR_3 = (u8) (VAR_9 & 0x000000FF);
 VAR_4 = (u8) ((VAR_9 & 0x0000FF00) >> 8);
 VAR_5 = (u8) ((VAR_9 & 0x00FF0000) >> 16);
 VAR_6 = (u8) ((VAR_9 & 0x03000000) >> 24);


 VAR_7[0] = VAR_6;
 VAR_7[1] = VAR_5;
 VAR_7[2] = VAR_4;
 VAR_7[3] = VAR_3;


 VAR_8 = FUNC_0(VAR_1, 0xAE00, VAR_7[0]);
 if (VAR_8)
  return VAR_8;


 VAR_8 = FUNC_0(VAR_1, 0xAE01, VAR_7[1]);
 if (VAR_8)
  return VAR_8;


 VAR_8 = FUNC_0(VAR_1, 0xAE02, VAR_7[2]);
 if (VAR_8)
  return VAR_8;


 VAR_8 = FUNC_0(VAR_1, 0xAE03, VAR_7[3]);
 if (VAR_8)
  return VAR_8;





 VAR_3 = (u8) ((VAR_13 & 0x0000003F));
 VAR_4 = (u8) ((VAR_13 & 0x00003FC0) >> 6);
 VAR_5 = (u8) ((VAR_13 & 0x003FC000) >> 14);
 VAR_6 = (u8) ((VAR_13 & 0x01C00000) >> 22);


 VAR_7[0] = VAR_6;
 VAR_7[1] = VAR_5;
 VAR_7[2] = VAR_4;
 VAR_7[3] = VAR_3;

 VAR_8 = FUNC_0(VAR_1, 0xAE04, VAR_7[0]);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_1, 0xAE05, VAR_7[1]);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_1, 0xAE06, VAR_7[2]);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_1, 0xAE07, VAR_7[3]);
 if (VAR_8)
  return VAR_8;





 VAR_3 = (u8) ((VAR_10 & 0x000000FF));
 VAR_4 = (u8) ((VAR_10 & 0x0000FF00) >> 8);
 VAR_5 = (u8) ((VAR_10 & 0x00FFC000) >> 16);
 VAR_6 = (u8) ((VAR_10 & 0x03000000) >> 24);


 VAR_7[0] = VAR_6;
 VAR_7[1] = VAR_5;
 VAR_7[2] = VAR_4;
 VAR_7[3] = VAR_3;

 VAR_8 = FUNC_0(VAR_1, 0xAE08, VAR_7[0]);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_1, 0xAE09, VAR_7[1]);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_1, 0xAE0A, VAR_7[2]);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_1, 0xAE0B, VAR_7[3]);
 if (VAR_8)
  return VAR_8;





 VAR_3 = (u8) (VAR_11 & 0x000000FF);
 VAR_4 = (u8) ((VAR_11 & 0x0000FF00) >> 8);
 VAR_5 = (u8) ((VAR_11 & 0x00FFC000) >> 16);
 VAR_6 = (u8) ((VAR_11 & 0x03000000) >> 24);


 VAR_7[0] = VAR_6;
 VAR_7[1] = VAR_5;
 VAR_7[2] = VAR_4;
 VAR_7[3] = VAR_3;

 VAR_8 = FUNC_0(VAR_1, 0xAE0C, VAR_7[0]);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_1, 0xAE0D, VAR_7[1]);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_1, 0xAE0E, VAR_7[2]);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_1, 0xAE0F, VAR_7[3]);
 if (VAR_8)
  return VAR_8;





 VAR_3 = (u8) ((VAR_12 & 0x000000FF));
 VAR_4 = (u8) ((VAR_12 & 0x0000FF00) >> 8);
 VAR_5 = (u8) ((VAR_12 & 0x00FFC000) >> 16);
 VAR_6 = (u8) ((VAR_12 & 0x03000000) >> 24);


 VAR_7[0] = VAR_6;
 VAR_7[1] = VAR_5;
 VAR_7[2] = VAR_4;
 VAR_7[3] = VAR_3;

 VAR_8 = FUNC_0(VAR_1, 0xAE10, VAR_7[0]);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_1, 0xAE11, VAR_7[1]);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_1, 0xAE12, VAR_7[2]);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_1, 0xAE13, VAR_7[3]);
 if (VAR_8)
  return VAR_8;





 VAR_3 = (u8) ((VAR_14 & 0x0000003F));
 VAR_4 = (u8) ((VAR_14 & 0x00003FC0) >> 6);
 VAR_5 = (u8) ((VAR_14 & 0x003FC000) >> 14);
 VAR_6 = (u8) ((VAR_14 & 0x01C00000) >> 22);


 VAR_7[0] = VAR_6;
 VAR_7[1] = VAR_5;
 VAR_7[2] = VAR_4;
 VAR_7[3] = VAR_3;

 VAR_8 = FUNC_0(VAR_1, 0xAE14, VAR_7[0]);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_1, 0xAE15, VAR_7[1]);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_1, 0xAE16, VAR_7[2]);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_1, 0xAE17, VAR_7[3]);
 return VAR_8;

}
