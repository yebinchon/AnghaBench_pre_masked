
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_device {int dev; } ;
struct asus_oled_packet {int bitmap; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,char*,size_t) ;
 int FUNC_2 (struct asus_oled_packet*,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_3 (struct usb_device*,int ,struct asus_oled_packet*,int,int*,int) ;
 int FUNC_4 (struct usb_device*,int) ;

__attribute__((used)) static void FUNC_5(struct usb_device *VAR_0,
   struct asus_oled_packet *VAR_1,
   size_t VAR_2, size_t VAR_3, char *VAR_4, uint8_t VAR_5,
   uint8_t VAR_6, uint8_t VAR_7, uint8_t VAR_8, uint8_t VAR_9,
   uint8_t VAR_10) {
 int VAR_11;
 int VAR_12;

 FUNC_2(VAR_1, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, 0x00);
 FUNC_1(VAR_1->bitmap, VAR_4 + VAR_2, VAR_3);

 VAR_11 = FUNC_3(VAR_0,
         FUNC_4(VAR_0, 2),
         VAR_1,
         sizeof(struct asus_oled_packet),
         &VAR_12,
         -1);

 if (VAR_11)
  FUNC_0(&VAR_0->dev, "retval = %d\n", VAR_11);
}
