
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int curr_mode; int usb_err; } ;


 int FUNC_0 (int ) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct gspca_dev*,int,int) ;
 int FUNC_2 (struct gspca_dev*,int ,int ) ;
 int FUNC_3 (struct gspca_dev*,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (struct gspca_dev*,int) ;
 int FUNC_5 (struct gspca_dev*) ;
 int FUNC_6 (struct gspca_dev*) ;
 int FUNC_7 (struct gspca_dev*) ;
 int FUNC_8 (struct gspca_dev*) ;
 int FUNC_9 (struct gspca_dev*) ;
 int FUNC_10 (struct gspca_dev*) ;
 int FUNC_11 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_12(struct gspca_dev *VAR_13)
{
 switch (VAR_13->curr_mode) {
 case 131:
  FUNC_3(VAR_13, VAR_7,
    FUNC_0(VAR_7));
  FUNC_2(VAR_13, VAR_0,
    FUNC_0(VAR_0));
  FUNC_3(VAR_13, VAR_9,
    FUNC_0(VAR_9));
  break;
 case 129:
  FUNC_3(VAR_13, VAR_7,
    FUNC_0(VAR_7));
  FUNC_2(VAR_13, VAR_3,
    FUNC_0(VAR_3));
  FUNC_3(VAR_13, VAR_12,
    FUNC_0(VAR_12));
  break;
 case 130:
  FUNC_3(VAR_13, VAR_5,
    FUNC_0(VAR_5));
  FUNC_2(VAR_13, VAR_1,
    FUNC_0(VAR_1));
  FUNC_3(VAR_13, VAR_10,
    FUNC_0(VAR_10));
  break;
 case 128:
  FUNC_3(VAR_13, VAR_8,
    FUNC_0(VAR_8));
  FUNC_2(VAR_13, VAR_4,
    FUNC_0(VAR_4));
  FUNC_3(VAR_13, VAR_10,
    FUNC_0(VAR_10));
  break;
 default:

  FUNC_3(VAR_13, VAR_6,
    FUNC_0(VAR_6));
  FUNC_2(VAR_13, VAR_2,
    FUNC_0(VAR_2));
  FUNC_3(VAR_13, VAR_11,
    FUNC_0(VAR_11));
  break;
 }
 FUNC_9(VAR_13);
 FUNC_5(VAR_13);
 FUNC_6(VAR_13);
 FUNC_7(VAR_13);
 FUNC_8(VAR_13);
 FUNC_11(VAR_13);
 FUNC_10(VAR_13);

 FUNC_1(VAR_13, 0xe0, 0x00);
 FUNC_1(VAR_13, 0xe0, 0x00);
 FUNC_4(VAR_13, 1);
 return VAR_13->usb_err;
}
