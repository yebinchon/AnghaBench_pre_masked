
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int* usb_buf; } ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct gspca_dev*,int,int ) ;
 int FUNC_2 (struct gspca_dev*,int) ;
 int FUNC_3 (struct gspca_dev*,int) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_1)
{
 __u8 *VAR_2 = VAR_1->usb_buf;
 int VAR_3;
 u8 VAR_4 = 0;
 int VAR_5 = 0;

 VAR_3 = FUNC_1(VAR_1, 0x21, 0);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_2[0] = 0x19;
 VAR_2[1] = 0x51;
 VAR_3 = FUNC_3(VAR_1, 2);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_1, 0x21, 0);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_2[0] = 0x19;
 VAR_2[1] = 0xba;
 VAR_3 = FUNC_3(VAR_1, 2);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_1, 0x21, 0);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_2[0] = 0x19;
 VAR_2[1] = 0x00;
 VAR_3 = FUNC_3(VAR_1, 2);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_1, 0x21, 0);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_2[0] = 0x19;
 VAR_2[1] = 0x00;
 VAR_3 = FUNC_3(VAR_1, 2);
 if (VAR_3 < 0)
  return VAR_3;

 while (VAR_4 != 0x0a && VAR_5 < 256) {
  VAR_3 = FUNC_1(VAR_1, 0x21, 0);
  VAR_4 = VAR_2[0];
  VAR_5++;
  if (VAR_3 < 0)
   return VAR_3;
 }
 if (VAR_4 != 0x0a)
  FUNC_0(VAR_0, "status is %02x", VAR_4);

 VAR_5 = 0;
 while (VAR_5 < 4) {
  VAR_2[0] = 0x19;
  VAR_2[1] = 0x00;
  VAR_3 = FUNC_3(VAR_1, 2);
  if (VAR_3 < 0)
   return VAR_3;

  VAR_3 = FUNC_1(VAR_1, 0x21, 0);
  VAR_4 = VAR_2[0];
  VAR_5++;
  if (VAR_3 < 0)
   return VAR_3;
 }

 VAR_2[0] = 0x19;
 VAR_3 = FUNC_3(VAR_1, 1);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_1, 16);
 if (VAR_3 < 0)
  return VAR_3;

 return 0;
}
