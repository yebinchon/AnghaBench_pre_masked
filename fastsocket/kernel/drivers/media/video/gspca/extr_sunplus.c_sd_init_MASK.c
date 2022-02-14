
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int bridge; int subtype; } ;
struct gspca_dev {int usb_err; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct gspca_dev*,int,int,int) ;
 int FUNC_3 (struct gspca_dev*,int,int ,int ,int ) ;
 int FUNC_4 (struct gspca_dev*,int,int,int) ;
 int FUNC_5 (struct gspca_dev*,int ) ;
 int FUNC_6 (struct gspca_dev*,int,int,int,int,int) ;
 int VAR_5 ;
 int FUNC_7 (struct gspca_dev*) ;
 int FUNC_8 (struct gspca_dev*) ;
 int VAR_6 ;
 int FUNC_9 (struct gspca_dev*) ;
 int FUNC_10 (struct gspca_dev*) ;
 int FUNC_11 (struct gspca_dev*) ;
 int FUNC_12 (struct gspca_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_13(struct gspca_dev *VAR_7)
{
 struct sd *VAR_8 = (struct sd *) VAR_7;

 switch (VAR_8->bridge) {
 case 131:
  FUNC_4(VAR_7, 0x1d, 0x00, 0);
  FUNC_4(VAR_7, 0x00, 0x2306, 0x01);
  FUNC_4(VAR_7, 0x00, 0x0d04, 0x00);
  FUNC_4(VAR_7, 0x00, 0x2000, 0x00);
  FUNC_4(VAR_7, 0x00, 0x2301, 0x13);
  FUNC_4(VAR_7, 0x00, 0x2306, 0x00);

 case 129:
  FUNC_7(VAR_7);
  FUNC_11(VAR_7);
  break;
 case 128:
  FUNC_11(VAR_7);
  FUNC_2(VAR_7, 0x00, 0x5002, 1);
  FUNC_3(VAR_7, 0x24, 0, 0, 0);
  FUNC_2(VAR_7, 0x24, 0, 1);
  FUNC_7(VAR_7);
  FUNC_4(VAR_7, 0x34, 0, 0);
  FUNC_8(VAR_7);
  break;
 case 130:
  FUNC_1(VAR_1, "Opening SPCA504 (PC-CAM 600)");
  FUNC_4(VAR_7, 0xe0, 0x0000, 0x0000);
  FUNC_4(VAR_7, 0xe0, 0x0000, 0x0001);
  FUNC_10(VAR_7);
  if (VAR_8->subtype == VAR_2)
   FUNC_12(VAR_7,
    VAR_5,
    FUNC_0(VAR_5));
  else
   FUNC_12(VAR_7, VAR_6,
    FUNC_0(VAR_6));
  FUNC_5(VAR_7, VAR_3);
  break;
 default:

  FUNC_1(VAR_1, "Opening SPCA504");
  if (VAR_8->subtype == VAR_0) {
   FUNC_9(VAR_7);


   FUNC_6(VAR_7, 0x24,
       8, 3, 0x9e, 1);

   FUNC_6(VAR_7, 0x24,
       8, 3, 0x9e, 0);

   FUNC_6(VAR_7, 0x24,
       0, 0, 0x9d, 1);


   FUNC_6(VAR_7, 0x08,
       6, 0, 0x86, 1);






   FUNC_4(VAR_7, 0x00, 0x270c, 0x05);

   FUNC_4(VAR_7, 0x00, 0x2310, 0x05);
   FUNC_6(VAR_7, 0x01,
       0x0f, 0, 0xff, 0);
  }

  FUNC_4(VAR_7, 0, 0x2000, 0);
  FUNC_4(VAR_7, 0, 0x2883, 1);
  FUNC_5(VAR_7, VAR_4);
  break;
 }
 return VAR_7->usb_err;
}
