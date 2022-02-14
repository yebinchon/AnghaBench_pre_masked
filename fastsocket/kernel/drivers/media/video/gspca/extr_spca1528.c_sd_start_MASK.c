
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ pkt_seq; int jpeg_hdr; } ;
struct gspca_dev {int usb_err; int width; int height; } ;


 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct gspca_dev*,int,int,int) ;
 int FUNC_4 (struct gspca_dev*,int,int,int) ;
 int FUNC_5 (struct gspca_dev*) ;
 int FUNC_6 (struct gspca_dev*) ;
 int FUNC_7 (struct gspca_dev*) ;
 int FUNC_8 (struct gspca_dev*) ;
 int FUNC_9 (struct gspca_dev*) ;
 int FUNC_10 (struct gspca_dev*) ;
 int FUNC_11 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_12(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;


 FUNC_0(VAR_1->jpeg_hdr, VAR_0->height, VAR_0->width,
   0x22);


 FUNC_1(VAR_1->jpeg_hdr, 82);


 FUNC_5(VAR_0);
 FUNC_7(VAR_0);
 FUNC_8(VAR_0);
 FUNC_6(VAR_0);
 FUNC_9(VAR_0);

 FUNC_2(5);
 FUNC_3(VAR_0, 0x00, 0x2520, 1);
 FUNC_2(8);


 FUNC_10(VAR_0);
 FUNC_4(VAR_0, 0x31, 0x0000, 0x0004);
 FUNC_11(VAR_0);
 FUNC_10(VAR_0);
 FUNC_2(200);

 VAR_1->pkt_seq = 0;
 return VAR_0->usb_err;
}
