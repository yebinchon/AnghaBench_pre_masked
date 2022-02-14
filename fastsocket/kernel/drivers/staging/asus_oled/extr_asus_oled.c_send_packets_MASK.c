
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_device {int dev; } ;
struct asus_oled_packet {int bitmap; } ;



 size_t VAR_0 ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,char*,size_t) ;
 int FUNC_2 (struct asus_oled_packet*,int,int,int,int,int,int,int) ;
 int FUNC_3 (struct usb_device*,int ,struct asus_oled_packet*,int,int*,int) ;
 int FUNC_4 (struct usb_device*,int) ;

__attribute__((used)) static void FUNC_5(struct usb_device *VAR_1,
    struct asus_oled_packet *VAR_2,
    char *VAR_3, uint8_t VAR_4, size_t VAR_5)
{
 size_t VAR_6;
 int VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  int VAR_8;

  switch (VAR_4) {
  case 129:
   FUNC_2(VAR_2, 0x40, 0x80, VAR_5,
         VAR_6 + 1, 0x00, 0x01, 0xff);
   break;
  case 128:
   FUNC_2(VAR_2, 0x10 + VAR_6, 0x80, 0x01,
         0x01, 0x00, 0x01, 0x00);
   break;
  case 130:
   FUNC_2(VAR_2, 0x10 + VAR_6, 0x80, 0x01,
         0x01, 0x00, 0x00, 0xff);
   break;
  }

  FUNC_1(VAR_2->bitmap, VAR_3 + (VAR_0*VAR_6),
         VAR_0);

  VAR_8 = FUNC_3(VAR_1, FUNC_4(VAR_1, 2),
          VAR_2, sizeof(struct asus_oled_packet),
          &VAR_7, -1);

  if (VAR_8)
   FUNC_0(&VAR_1->dev, "retval = %d\n", VAR_8);
 }
}
