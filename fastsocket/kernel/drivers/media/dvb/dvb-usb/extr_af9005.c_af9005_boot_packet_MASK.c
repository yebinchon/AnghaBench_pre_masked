
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usb_device {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int*,int,int (*) (char*)) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (struct usb_device*,int ,int*,int,int*,int) ;
 int FUNC_5 (struct usb_device*,int) ;
 int FUNC_6 (struct usb_device*,int) ;

__attribute__((used)) static int FUNC_7(struct usb_device *VAR_3, int VAR_4, u8 * VAR_5)
{
 u8 VAR_6[VAR_2 + 2];
 u16 VAR_7;
 int VAR_8, VAR_9, VAR_10;
 FUNC_3(VAR_6, 0, sizeof(VAR_6));
 VAR_6[0] = (u8) (VAR_2 & 0xff);
 VAR_6[1] = (u8) ((VAR_2 >> 8) & 0xff);
 switch (VAR_4) {
 case 129:
  VAR_6[2] = 0x11;
  VAR_6[3] = 0x04;
  VAR_6[4] = 0x00;
  VAR_6[5] = 0x03;
  VAR_7 = VAR_6[4] + VAR_6[5];
  VAR_6[6] = (u8) ((VAR_7 >> 8) & 0xff);
  VAR_6[7] = (u8) (VAR_7 & 0xff);
  break;
 case 128:
  VAR_6[2] = 0x11;
  VAR_6[3] = 0x04;
  VAR_6[4] = 0x00;
  VAR_6[5] = 0x01;
  VAR_7 = VAR_6[4] + VAR_6[5];
  VAR_6[6] = (u8) ((VAR_7 >> 8) & 0xff);
  VAR_6[7] = (u8) (VAR_7 & 0xff);
  break;
 case 130:
  VAR_6[2] = 0x10;
  VAR_6[3] = 0x08;
  VAR_6[4] = 0x00;
  VAR_6[5] = 0x97;
  VAR_6[6] = 0xaa;
  VAR_6[7] = 0x55;
  VAR_6[8] = 0xa5;
  VAR_6[9] = 0x5a;
  VAR_7 = 0;
  for (VAR_9 = 4; VAR_9 <= 9; VAR_9++)
   VAR_7 += VAR_6[VAR_9];
  VAR_6[10] = (u8) ((VAR_7 >> 8) & 0xff);
  VAR_6[11] = (u8) (VAR_7 & 0xff);
  break;
 default:
  FUNC_2("boot packet invalid boot packet type");
  return -VAR_0;
 }
 FUNC_0(">>> ");
 FUNC_1(VAR_6, VAR_2 + 2, FUNC_0);

 VAR_10 = FUNC_4(VAR_3,
      FUNC_6(VAR_3, 0x02),
      VAR_6, VAR_2 + 2, &VAR_8, 2000);
 if (VAR_10)
  FUNC_2("boot packet bulk message failed: %d (%d/%d)", VAR_10,
      VAR_2 + 2, VAR_8);
 else
  VAR_10 = VAR_8 != VAR_2 + 2 ? -1 : 0;
 if (VAR_10)
  return VAR_10;
 FUNC_3(VAR_6, 0, 9);
 VAR_10 = FUNC_4(VAR_3,
      FUNC_5(VAR_3, 0x01), VAR_6, 9, &VAR_8, 2000);
 if (VAR_10) {
  FUNC_2("boot packet recv bulk message failed: %d", VAR_10);
  return VAR_10;
 }
 FUNC_0("<<< ");
 FUNC_1(VAR_6, VAR_8, FUNC_0);
 VAR_7 = 0;
 switch (VAR_4) {
 case 129:
  if (VAR_6[2] != 0x11) {
   FUNC_2("boot bad config header.");
   return -VAR_1;
  }
  if (VAR_6[3] != 0x05) {
   FUNC_2("boot bad config size.");
   return -VAR_1;
  }
  if (VAR_6[4] != 0x00) {
   FUNC_2("boot bad config sequence.");
   return -VAR_1;
  }
  if (VAR_6[5] != 0x04) {
   FUNC_2("boot bad config subtype.");
   return -VAR_1;
  }
  for (VAR_9 = 4; VAR_9 <= 6; VAR_9++)
   VAR_7 += VAR_6[VAR_9];
  if (VAR_6[7] * 256 + VAR_6[8] != VAR_7) {
   FUNC_2("boot bad config checksum.");
   return -VAR_1;
  }
  *VAR_5 = VAR_6[6];
  break;
 case 128:
  if (VAR_6[2] != 0x11) {
   FUNC_2("boot bad confirm header.");
   return -VAR_1;
  }
  if (VAR_6[3] != 0x05) {
   FUNC_2("boot bad confirm size.");
   return -VAR_1;
  }
  if (VAR_6[4] != 0x00) {
   FUNC_2("boot bad confirm sequence.");
   return -VAR_1;
  }
  if (VAR_6[5] != 0x02) {
   FUNC_2("boot bad confirm subtype.");
   return -VAR_1;
  }
  for (VAR_9 = 4; VAR_9 <= 6; VAR_9++)
   VAR_7 += VAR_6[VAR_9];
  if (VAR_6[7] * 256 + VAR_6[8] != VAR_7) {
   FUNC_2("boot bad confirm checksum.");
   return -VAR_1;
  }
  *VAR_5 = VAR_6[6];
  break;
 case 130:
  if (VAR_6[2] != 0x10) {
   FUNC_2("boot bad boot header.");
   return -VAR_1;
  }
  if (VAR_6[3] != 0x05) {
   FUNC_2("boot bad boot size.");
   return -VAR_1;
  }
  if (VAR_6[4] != 0x00) {
   FUNC_2("boot bad boot sequence.");
   return -VAR_1;
  }
  if (VAR_6[5] != 0x01) {
   FUNC_2("boot bad boot pattern 01.");
   return -VAR_1;
  }
  if (VAR_6[6] != 0x10) {
   FUNC_2("boot bad boot pattern 10.");
   return -VAR_1;
  }
  for (VAR_9 = 4; VAR_9 <= 6; VAR_9++)
   VAR_7 += VAR_6[VAR_9];
  if (VAR_6[7] * 256 + VAR_6[8] != VAR_7) {
   FUNC_2("boot bad boot checksum.");
   return -VAR_1;
  }
  break;

 }

 return 0;
}
