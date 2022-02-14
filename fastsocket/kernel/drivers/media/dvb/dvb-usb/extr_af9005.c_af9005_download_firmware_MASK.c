
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;
struct firmware {int size; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usb_device*,int ,int*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int*,int,int (*) (char*)) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (int*,scalar_t__,int) ;
 int FUNC_5 (struct usb_device*,int ,int*,int,int*,int) ;
 int FUNC_6 (struct usb_device*,int) ;

__attribute__((used)) static int FUNC_7(struct usb_device *VAR_5, const struct firmware *VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10;

 u8 VAR_11[VAR_2 + 2];
 u8 VAR_12;

 VAR_9 = FUNC_0(VAR_5, VAR_3, &VAR_12);
 if (VAR_9)
  return VAR_9;
 if (VAR_12 != 0x01) {
  FUNC_3("before downloading firmware, FW_CONFIG expected 0x01, received 0x%x", VAR_12);
  return -VAR_0;
 }
 VAR_8 = VAR_6->size / VAR_2;
 VAR_11[0] = (u8) (VAR_2 & 0xff);
 VAR_11[1] = (u8) ((VAR_2 >> 8) & 0xff);
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  FUNC_4(&VAR_11[2], VAR_6->data + VAR_7 * VAR_2,
         VAR_2);
  FUNC_1(">>> ");
  FUNC_2(VAR_11, VAR_2 + 2, FUNC_1);
  VAR_9 = FUNC_5(VAR_5,
       FUNC_6(VAR_5, 0x02),
       VAR_11, VAR_2 + 2, &VAR_10, 1000);
  if (VAR_9) {
   FUNC_3("firmware download failed at packet %d with code %d", VAR_7, VAR_9);
   return VAR_9;
  }
 }
 VAR_9 = FUNC_0(VAR_5, VAR_4, &VAR_12);
 if (VAR_9)
  return VAR_9;
 if (VAR_12 != (u8) (VAR_8 & 0xff)) {
  FUNC_3("after downloading firmware, FW_CONFIRM expected 0x%x, received 0x%x", VAR_8 & 0xff, VAR_12);
  return -VAR_0;
 }
 VAR_9 = FUNC_0(VAR_5, VAR_1, &VAR_12);
 if (VAR_9)
  return VAR_9;
 VAR_9 = FUNC_0(VAR_5, VAR_3, &VAR_12);
 if (VAR_9)
  return VAR_9;
 if (VAR_12 != 0x02) {
  FUNC_3("after downloading firmware, FW_CONFIG expected 0x02, received 0x%x", VAR_12);
  return -VAR_0;
 }

 return 0;

}
