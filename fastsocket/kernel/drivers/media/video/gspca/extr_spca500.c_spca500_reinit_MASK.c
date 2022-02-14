
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int* usb_buf; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (struct gspca_dev*,int,int) ;
 scalar_t__ FUNC_3 (struct gspca_dev*,int ,int,int) ;
 int FUNC_4 (struct gspca_dev*,int,int,int) ;
 int FUNC_5 (struct gspca_dev*,int,int,int,int ) ;

__attribute__((used)) static void FUNC_6(struct gspca_dev *VAR_3)
{
 int VAR_4;
 __u8 VAR_5;



 FUNC_4(VAR_3, 0x00, 0x0d01, 0x01);
 FUNC_4(VAR_3, 0x00, 0x0d03, 0x00);
 FUNC_4(VAR_3, 0x00, 0x0d02, 0x01);


 FUNC_4(VAR_3, 0x00, 0x850a, 0x0001);

 VAR_4 = FUNC_5(VAR_3, 0x00, 0x8800, 0x8840,
     VAR_2);
 if (VAR_4 < 0)
  FUNC_0(VAR_0|VAR_1, "spca50x_setup_qtable failed on init");


 FUNC_4(VAR_3, 0x00, 0x8880, 2);

 FUNC_4(VAR_3, 0x00, 0x800a, 0x00);

 FUNC_4(VAR_3, 0x00, 0x820f, 0x01);

 FUNC_4(VAR_3, 0x00, 0x870a, 0x04);

 FUNC_4(VAR_3, 0, 0x8003, 0x00);

 FUNC_4(VAR_3, 0x00, 0x8000, 0x0004);
 FUNC_1(2000);
 if (FUNC_3(VAR_3, 0, 0x8000, 0x44) != 0) {
  FUNC_2(VAR_3, 0x816b, 1);
  VAR_5 = VAR_3->usb_buf[0];
  FUNC_4(VAR_3, 0x00, 0x816b, VAR_5);
 }
}
