
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int usb_buf; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int ,unsigned int,int,int,int,int,int ,int,int) ;
 unsigned int FUNC_3 (int ,int ) ;
 unsigned int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_8, u8 *VAR_9)
{
 u8 VAR_10;
 unsigned int VAR_11;
 int VAR_12, VAR_13 = VAR_9[6] | (VAR_9[7] << 8);

 int VAR_14 = 3;

 if (VAR_9[0] == VAR_0) {
  VAR_11 = FUNC_3(VAR_8->dev, 0);
  VAR_10 = VAR_5 | VAR_7 | VAR_6;
 } else if (VAR_9[0] == VAR_1) {
  VAR_11 = FUNC_4(VAR_8->dev, 0);
  VAR_10 = VAR_7 | VAR_6;
 } else {
  FUNC_0(VAR_2, "Unexpected first byte of command: %x",
         VAR_9[0]);
  return -VAR_3;
 }

retry:
 VAR_12 = FUNC_2(VAR_8->dev, VAR_11,
         VAR_9[1],
         VAR_10,
         VAR_9[2] | (VAR_9[3] << 8),
         VAR_9[4] | (VAR_9[5] << 8),
         VAR_8->usb_buf, VAR_13, 1000);

 if (VAR_12 < 0)
  FUNC_1("usb_control_msg %02x, error %d", VAR_9[1],
         VAR_12);

 if (VAR_12 == -VAR_4 && VAR_14 > 0) {
  VAR_14--;
  goto retry;
 }

 return (VAR_12 < 0) ? VAR_12 : 0;
}
