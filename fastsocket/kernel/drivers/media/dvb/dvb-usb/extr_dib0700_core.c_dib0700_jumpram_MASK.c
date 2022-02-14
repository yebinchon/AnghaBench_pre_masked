
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct usb_device*,int ,int*,int,int*,int) ;
 int FUNC_2 (struct usb_device*,int) ;

__attribute__((used)) static int FUNC_3(struct usb_device *VAR_2, u32 VAR_3)
{
 int VAR_4, VAR_5;
 u8 VAR_6[8] = { VAR_1, 0, 0, 0,
  (VAR_3 >> 24) & 0xff,
  (VAR_3 >> 16) & 0xff,
  (VAR_3 >> 8) & 0xff,
   VAR_3 & 0xff };

 if ((VAR_4 = FUNC_1(VAR_2, FUNC_2(VAR_2, 0x01),VAR_6,8,&VAR_5,1000)) < 0) {
  FUNC_0("jumpram to 0x%x failed\n",VAR_3);
  return VAR_4;
 }
 if (VAR_5 != 8) {
  FUNC_0("jumpram to 0x%x failed\n",VAR_3);
  return -VAR_0;
 }
 return 0;
}
