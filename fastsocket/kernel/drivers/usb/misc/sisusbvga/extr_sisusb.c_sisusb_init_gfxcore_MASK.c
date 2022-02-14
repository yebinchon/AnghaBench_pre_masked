
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sisusb_usb_data {TYPE_1__* sisusb_dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,int,int*) ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (int ,int,char const) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (struct sisusb_usb_data*,int*,int,int) ;
 int FUNC_8 (struct sisusb_usb_data*,int*,int*) ;
 int FUNC_9 (struct sisusb_usb_data*,int,int*) ;
 int FUNC_10 (struct sisusb_usb_data*,int ) ;
 int FUNC_11 (struct sisusb_usb_data*,int) ;
 int FUNC_12 (struct sisusb_usb_data*) ;

__attribute__((used)) static int
FUNC_13(struct sisusb_usb_data *VAR_7)
{
 int VAR_8 = 0, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14 = 3;
 u8 VAR_15, VAR_16;
 u32 VAR_17;
 static const char VAR_18[] = {
  0x3b, 0x22, 0x01, 143,
  0x3b, 0x22, 0x01, 143,
  0x3b, 0x22, 0x01, 143,
  0x3b, 0x22, 0x01, 143
 };
 static const char VAR_19[] = {
  0x3b, 0x22, 0x01, 143,
  0x3b, 0x22, 0x01, 143,
  0x3b, 0x22, 0x01, 143,
  0x3b, 0x22, 0x01, 143
 };
 static const char VAR_20[] = {
  0x00, 0x04, 0x60, 0x60,
  0x0f, 0x0f, 0x1f, 0x1f,
  0xba, 0xba, 0xba, 0xba,
  0xa9, 0xa9, 0xac, 0xac,
  0xa0, 0xa0, 0xa0, 0xa8,
  0x00, 0x00, 0x02, 0x02,
  0x30, 0x30, 0x40, 0x40
 };
 static const char VAR_21[] = {
  0x77, 0x77, 0x44, 0x44,
  0x77, 0x77, 0x44, 0x44,
  0x00, 0x00, 0x00, 0x00,
  0x5b, 0x5b, 0xab, 0xab,
  0x00, 0x00, 0xf0, 0xf8
 };

 while (VAR_14--) {


  VAR_8 = FUNC_1(VAR_6, &VAR_15);
  VAR_8 |= FUNC_5(VAR_6, (VAR_15 | 0x01));


  VAR_8 |= FUNC_1(VAR_2, &VAR_15);
  VAR_8 |= FUNC_5(VAR_3, (VAR_15 | 0x01));

  if (VAR_8) continue;


  VAR_8 |= FUNC_3(VAR_1, 0x5b, 0xdf);
  VAR_8 |= FUNC_2(VAR_5, 0x05, 0x86);
  VAR_8 |= FUNC_4(VAR_5, 0x20, 0x01);

  VAR_8 |= FUNC_5(VAR_3, 0x67);

  for (VAR_9 = 0x06; VAR_9 <= 0x1f; VAR_9++) {
   VAR_8 |= FUNC_2(VAR_5, VAR_9, 0x00);
  }
  for (VAR_9 = 0x21; VAR_9 <= 0x27; VAR_9++) {
   VAR_8 |= FUNC_2(VAR_5, VAR_9, 0x00);
  }
  for (VAR_9 = 0x31; VAR_9 <= 0x3d; VAR_9++) {
   VAR_8 |= FUNC_2(VAR_5, VAR_9, 0x00);
  }
  for (VAR_9 = 0x12; VAR_9 <= 0x1b; VAR_9++) {
   VAR_8 |= FUNC_2(VAR_5, VAR_9, 0x00);
  }
  for (VAR_9 = 0x79; VAR_9 <= 0x7c; VAR_9++) {
   VAR_8 |= FUNC_2(VAR_1, VAR_9, 0x00);
  }

  if (VAR_8) continue;

  VAR_8 |= FUNC_2(VAR_1, 0x63, 0x80);

  VAR_8 |= FUNC_0(VAR_5, 0x3a, &VAR_16);
  VAR_16 &= 0x03;

  VAR_8 |= FUNC_2(VAR_5, 0x28, VAR_18[VAR_16 * 4]);
  VAR_8 |= FUNC_2(VAR_5, 0x29, VAR_18[(VAR_16 * 4) + 1]);
  VAR_8 |= FUNC_2(VAR_5, 0x2a, VAR_18[(VAR_16 * 4) + 2]);

  VAR_8 |= FUNC_2(VAR_5, 0x2e, VAR_19[VAR_16 * 4]);
  VAR_8 |= FUNC_2(VAR_5, 0x2f, VAR_19[(VAR_16 * 4) + 1]);
  VAR_8 |= FUNC_2(VAR_5, 0x30, VAR_19[(VAR_16 * 4) + 2]);

  VAR_8 |= FUNC_2(VAR_5, 0x07, 0x18);
  VAR_8 |= FUNC_2(VAR_5, 0x11, 0x0f);

  if (VAR_8) continue;

  for (VAR_9 = 0x15, VAR_10 = 0; VAR_9 <= 0x1b; VAR_9++, VAR_10++) {
   VAR_8 |= FUNC_2(VAR_5, VAR_9, VAR_20[(VAR_10*4) + VAR_16]);
  }
  for (VAR_9 = 0x40, VAR_10 = 0; VAR_9 <= 0x44; VAR_9++, VAR_10++) {
   VAR_8 |= FUNC_2(VAR_1, VAR_9, VAR_21[(VAR_10*4) + VAR_16]);
  }

  VAR_8 |= FUNC_2(VAR_1, 0x49, 0xaa);

  VAR_8 |= FUNC_2(VAR_5, 0x1f, 0x00);
  VAR_8 |= FUNC_2(VAR_5, 0x20, 0xa0);
  VAR_8 |= FUNC_2(VAR_5, 0x23, 0xf6);
  VAR_8 |= FUNC_2(VAR_5, 0x24, 0x0d);
  VAR_8 |= FUNC_2(VAR_5, 0x25, 0x33);

  VAR_8 |= FUNC_2(VAR_5, 0x11, 0x0f);

  VAR_8 |= FUNC_4(VAR_4, 0x2f, 0x01);

  VAR_8 |= FUNC_3(VAR_0, 0x3f, 0xef);

  if (VAR_8) continue;

  VAR_8 |= FUNC_2(VAR_4, 0x00, 0x00);

  VAR_8 |= FUNC_0(VAR_5, 0x13, &VAR_15);
  VAR_15 >>= 4;

  VAR_8 |= FUNC_2(VAR_4, 0x02, 0x00);
  VAR_8 |= FUNC_2(VAR_4, 0x2e, 0x08);

  VAR_8 |= FUNC_9(VAR_7, 0x50, &VAR_17);
  VAR_17 &= 0x00f00000;
  VAR_15 = (VAR_17 == 0x100000) ? 0x33 : 0x03;
  VAR_8 |= FUNC_2(VAR_5, 0x25, VAR_15);
  VAR_15 = (VAR_17 == 0x100000) ? 0xaa : 0x88;
  VAR_8 |= FUNC_2(VAR_1, 0x49, VAR_15);

  VAR_8 |= FUNC_2(VAR_5, 0x27, 0x1f);
  VAR_8 |= FUNC_2(VAR_5, 0x31, 0x00);
  VAR_8 |= FUNC_2(VAR_5, 0x32, 0x11);
  VAR_8 |= FUNC_2(VAR_5, 0x33, 0x00);

  if (VAR_8) continue;

  VAR_8 |= FUNC_2(VAR_1, 0x83, 0x00);

  VAR_8 |= FUNC_10(VAR_7, 0);

  VAR_8 |= FUNC_3(VAR_5, 0x21, 0xdf);
  VAR_8 |= FUNC_4(VAR_5, 0x01, 0x20);
  VAR_8 |= FUNC_4(VAR_5, 0x16, 0x0f);

  VAR_8 |= FUNC_11(VAR_7, VAR_16);


  VAR_8 |= FUNC_3(VAR_5, 0x17, 0xf8);
  VAR_8 |= FUNC_4(VAR_5, 0x19, 0x03);

  VAR_8 |= FUNC_8(VAR_7, &VAR_11, &VAR_12);
  VAR_8 |= FUNC_12(VAR_7);

  if (VAR_16 <= 1) {
   VAR_8 |= FUNC_7(VAR_7, &VAR_13, VAR_11, VAR_12);
   if (VAR_13) {
    FUNC_6(&VAR_7->sisusb_dev->dev,"RAM size detection failed, assuming 8MB video RAM\n");
    VAR_8 |= FUNC_2(VAR_5,0x14,0x31);

   }
  } else {
   FUNC_6(&VAR_7->sisusb_dev->dev, "DDR RAM device found, assuming 8MB video RAM\n");
   VAR_8 |= FUNC_2(VAR_5,0x14,0x31);

  }


  VAR_8 |= FUNC_2(VAR_5, 0x16, VAR_20[4 + VAR_16]);
  VAR_8 |= FUNC_2(VAR_5, 0x17, VAR_20[8 + VAR_16]);
  VAR_8 |= FUNC_2(VAR_5, 0x19, VAR_20[16 + VAR_16]);

  VAR_8 |= FUNC_4(VAR_5, 0x21, 0x20);

  VAR_8 |= FUNC_2(VAR_5, 0x22, 0xfb);
  VAR_8 |= FUNC_2(VAR_5, 0x21, 0xa5);

  if (VAR_8 == 0)
   break;
 }

 return VAR_8;
}
