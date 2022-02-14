
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int subtype; int quality; int jpeg_hdr; } ;
struct gspca_dev {int* usb_buf; int curr_mode; int width; int height; } ;
typedef int __u8 ;





 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;


 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct gspca_dev*,int,int) ;
 int FUNC_5 (struct gspca_dev*,int ,int,int) ;
 int FUNC_6 (struct gspca_dev*,int,int,int) ;
 int FUNC_7 (struct gspca_dev*) ;
 int FUNC_8 (struct gspca_dev*) ;
 int FUNC_9 (struct gspca_dev*,int,int) ;
 int FUNC_10 (struct gspca_dev*) ;
 int VAR_6 ;
 int FUNC_11 (struct gspca_dev*,int,int,int,int ) ;
 int FUNC_12 (struct gspca_dev*,int ) ;

__attribute__((used)) static int FUNC_13(struct gspca_dev *VAR_7)
{
 struct sd *VAR_8 = (struct sd *) VAR_7;
 int VAR_9;
 __u8 VAR_10;
 __u8 VAR_11, VAR_12;


 FUNC_1(VAR_8->jpeg_hdr, VAR_7->height, VAR_7->width,
   0x22);
 FUNC_2(VAR_8->jpeg_hdr, VAR_8->quality);

 if (VAR_8->subtype == 134) {
  VAR_11 = 0x16;
  VAR_12 = 0x12;
 } else {
  VAR_11 = 0x28;
  VAR_12 = 0x1e;
 }


 FUNC_4(VAR_7, 0x8a04, 1);
 FUNC_0(VAR_2, "Spca500 Sensor Address 0x%02x",
  VAR_7->usb_buf[0]);
 FUNC_0(VAR_2, "Spca500 curr_mode: %d Xmult: 0x%02x, Ymult: 0x%02x",
  VAR_7->curr_mode, VAR_11, VAR_12);


 switch (VAR_8->subtype) {
 case 134:
   FUNC_9(VAR_7, VAR_11, VAR_12);


  FUNC_6(VAR_7, 0x00, 0x850a, 0x0001);
  FUNC_6(VAR_7, 0x00, 0x8880, 3);
  VAR_9 = FUNC_11(VAR_7,
        0x00, 0x8800, 0x8840,
        VAR_3);
  if (VAR_9 < 0)
   FUNC_0(VAR_1, "spca50x_setup_qtable failed");

  FUNC_6(VAR_7, 0x00, 0x870a, 0x04);


  FUNC_6(VAR_7, 0x00, 0x8000, 0x0004);
  FUNC_3(500);
  if (FUNC_5(VAR_7, 0, 0x8000, 0x44) != 0)
   FUNC_0(VAR_1, "reg_r_wait() failed");

  FUNC_4(VAR_7, 0x816b, 1);
  VAR_10 = VAR_7->usb_buf[0];
  FUNC_6(VAR_7, 0x00, 0x816b, VAR_10);

  FUNC_10(VAR_7);

  FUNC_12(VAR_7, VAR_6);
  FUNC_9(VAR_7, VAR_11, VAR_12);

  VAR_9 = FUNC_6(VAR_7, 0x00, 0x850a, 0x0001);
  if (VAR_9 < 0)
   FUNC_0(VAR_1, "failed to enable drop packet");
  FUNC_6(VAR_7, 0x00, 0x8880, 3);
  VAR_9 = FUNC_11(VAR_7,
        0x00, 0x8800, 0x8840,
        VAR_3);
  if (VAR_9 < 0)
   FUNC_0(VAR_1, "spca50x_setup_qtable failed");


  FUNC_6(VAR_7, 0x00, 0x870a, 0x04);


  FUNC_6(VAR_7, 0x00, 0x8000, 0x0004);

  if (FUNC_5(VAR_7, 0, 0x8000, 0x44) != 0)
   FUNC_0(VAR_1, "reg_r_wait() failed");

  FUNC_4(VAR_7, 0x816b, 1);
  VAR_10 = VAR_7->usb_buf[0];
  FUNC_6(VAR_7, 0x00, 0x816b, VAR_10);
  break;
 case 139:
 case 136:




  VAR_9 = FUNC_7(VAR_7);
  if (VAR_9 < 0)
   FUNC_0(VAR_1, "spca500_full_reset failed");


  VAR_9 = FUNC_6(VAR_7, 0x00, 0x850a, 0x0001);
  if (VAR_9 < 0)
   FUNC_0(VAR_1, "failed to enable drop packet");
  FUNC_6(VAR_7, 0x00, 0x8880, 3);
  VAR_9 = FUNC_11(VAR_7,
        0x00, 0x8800, 0x8840,
        VAR_3);
  if (VAR_9 < 0)
   FUNC_0(VAR_1, "spca50x_setup_qtable failed");

  FUNC_9(VAR_7, VAR_11, VAR_12);
  FUNC_6(VAR_7, 0x20, 0x0001, 0x0004);


  FUNC_6(VAR_7, 0x00, 0x8000, 0x0004);

  if (FUNC_5(VAR_7, 0, 0x8000, 0x44) != 0)
   FUNC_0(VAR_1, "reg_r_wait() failed");

  FUNC_4(VAR_7, 0x816b, 1);
  VAR_10 = VAR_7->usb_buf[0];
  FUNC_6(VAR_7, 0x00, 0x816b, VAR_10);


  break;
 case 135:


  VAR_9 = FUNC_7(VAR_7);
  if (VAR_9 < 0)
   FUNC_0(VAR_1, "spca500_full_reset failed");

  FUNC_6(VAR_7, 0x00, 0x850a, 0x0001);
  FUNC_6(VAR_7, 0x00, 0x8880, 0);
  VAR_9 = FUNC_11(VAR_7,
        0x00, 0x8800, 0x8840,
        VAR_4);
  if (VAR_9 < 0)
   FUNC_0(VAR_1, "spca50x_setup_qtable failed");
  FUNC_9(VAR_7, VAR_11, VAR_12);

  FUNC_6(VAR_7, 0x20, 0x0001, 0x0004);


  FUNC_6(VAR_7, 0x00, 0x8000, 0x0004);

  if (FUNC_5(VAR_7, 0, 0x8000, 0x44) != 0)
   FUNC_0(VAR_1, "reg_r_wait() failed");

  FUNC_4(VAR_7, 0x816b, 1);
  VAR_10 = VAR_7->usb_buf[0];
  FUNC_6(VAR_7, 0x00, 0x816b, VAR_10);


  break;

 case 140:
 case 138:
 case 141:
 case 137:
 case 131:
 case 129:
 case 130:
 case 128:
 case 142:
  FUNC_8(VAR_7);
  FUNC_6(VAR_7, 0x00, 0x0d01, 0x01);

  FUNC_6(VAR_7, 0x00, 0x850a, 0x0001);

  VAR_9 = FUNC_11(VAR_7,
       0x00, 0x8800, 0x8840, VAR_5);
  if (VAR_9 < 0)
   FUNC_0(VAR_1, "spca50x_setup_qtable failed");
  FUNC_6(VAR_7, 0x00, 0x8880, 2);


  FUNC_6(VAR_7, 0x00, 0x800a, 0x00);

  FUNC_6(VAR_7, 0x00, 0x820f, 0x01);

  FUNC_6(VAR_7, 0x00, 0x870a, 0x04);

  FUNC_9(VAR_7, VAR_11, VAR_12);

  FUNC_6(VAR_7, 0x00, 0x8000, 0x0004);

  FUNC_5(VAR_7, 0, 0x8000, 0x44);

  FUNC_4(VAR_7, 0x816b, 1);
  VAR_10 = VAR_7->usb_buf[0];
  FUNC_6(VAR_7, 0x00, 0x816b, VAR_10);
  break;
 case 132:
 case 133:
  FUNC_6(VAR_7, 0x02, 0x00, 0x00);

  FUNC_6(VAR_7, 0x00, 0x850a, 0x0001);

  VAR_9 = FUNC_11(VAR_7,
     0x00, 0x8800,
     0x8840, VAR_3);
  if (VAR_9 < 0)
   FUNC_0(VAR_1, "spca50x_setup_qtable failed");
  FUNC_6(VAR_7, 0x00, 0x8880, 3);
  FUNC_6(VAR_7, 0x00, 0x800a, 0x00);

  FUNC_6(VAR_7, 0x00, 0x870a, 0x04);

  FUNC_9(VAR_7, VAR_11, VAR_12);


  FUNC_6(VAR_7, 0x00, 0x8000, 0x0004);
  FUNC_5(VAR_7, 0, 0x8000, 0x44);

  FUNC_4(VAR_7, 0x816b, 1);
  VAR_10 = VAR_7->usb_buf[0];
  FUNC_6(VAR_7, 0x00, 0x816b, VAR_10);
  FUNC_12(VAR_7, VAR_0);
  break;
 }
 return 0;
}
