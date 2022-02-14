
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* cam_mode; } ;
struct gspca_dev {size_t curr_mode; int usb_err; TYPE_2__ cam; } ;
struct TYPE_3__ {int priv; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct gspca_dev*,int,int) ;
 int FUNC_2 (struct gspca_dev*,int) ;
 int FUNC_3 (struct gspca_dev*,int ,int ) ;
 int FUNC_4 (struct gspca_dev*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct gspca_dev*) ;
 int FUNC_6 (struct gspca_dev*) ;
 int FUNC_7 (struct gspca_dev*) ;
 int FUNC_8 (struct gspca_dev*) ;
 int FUNC_9 (struct gspca_dev*) ;
 int FUNC_10 (struct gspca_dev*) ;
 int FUNC_11 (struct gspca_dev*) ;
 int FUNC_12 (struct gspca_dev*) ;
 int FUNC_13 (struct gspca_dev*) ;
 int FUNC_14 (struct gspca_dev*) ;
 int FUNC_15 (struct gspca_dev*) ;
 int FUNC_16 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_17(struct gspca_dev *VAR_4)
{
 int VAR_5;

 VAR_5 = VAR_4->cam.cam_mode[VAR_4->curr_mode].priv;
 if (VAR_5 != 0) {
  FUNC_3(VAR_4, VAR_0,
    FUNC_0(VAR_0));
  FUNC_4(VAR_4, VAR_2,
    FUNC_0(VAR_2));
 } else {
  FUNC_3(VAR_4, VAR_1,
    FUNC_0(VAR_1));
  FUNC_4(VAR_4, VAR_3,
    FUNC_0(VAR_3));
 }
 FUNC_5(VAR_4);

 FUNC_7(VAR_4);
 FUNC_8(VAR_4);
 FUNC_6(VAR_4);
 FUNC_13(VAR_4);
 FUNC_11(VAR_4);
 FUNC_9(VAR_4);
 FUNC_10(VAR_4);
 FUNC_15(VAR_4);
 FUNC_16(VAR_4);
 FUNC_14(VAR_4);
 FUNC_12(VAR_4);

 FUNC_2(VAR_4, 1);
 FUNC_1(VAR_4, 0xe0, 0x00);
 return VAR_4->usb_err;
}
