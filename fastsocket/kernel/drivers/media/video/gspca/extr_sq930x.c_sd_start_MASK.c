
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sd {int sensor; int do_ctrl; int type; } ;
struct TYPE_4__ {TYPE_1__* cam_mode; } ;
struct gspca_dev {size_t curr_mode; int usb_err; TYPE_2__ cam; } ;
struct TYPE_3__ {int priv; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct sd*) ;
 int FUNC_2 (struct sd*,int ) ;
 int FUNC_3 (struct sd*,int,int) ;
 int FUNC_4 (struct sd*,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (struct sd*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_6 (int) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_7 (struct gspca_dev*,int ,int) ;
 int FUNC_8 (struct gspca_dev*) ;
 int FUNC_9 (struct gspca_dev*) ;
 int FUNC_10 (struct gspca_dev*,int ,int ,int) ;

__attribute__((used)) static int FUNC_11(struct gspca_dev *VAR_27)
{
 struct sd *VAR_28 = (struct sd *) VAR_27;
 int VAR_29;

 FUNC_1(VAR_28);
 FUNC_2(VAR_28, 0);
 FUNC_6(100);

 switch (VAR_28->sensor) {
 case 130:
  FUNC_10(VAR_27, VAR_6,
    FUNC_0(VAR_6),
    8);
  FUNC_10(VAR_27, VAR_7,
    FUNC_0(VAR_7),
    5);
  FUNC_10(VAR_27, VAR_8,
    FUNC_0(VAR_8),
    6);
  FUNC_6(50);


  FUNC_8(VAR_27);
  FUNC_3(VAR_28, VAR_4 | VAR_5, 0x00ff);
  FUNC_6(70);
  FUNC_7(VAR_27, VAR_2, 0x0000);
  FUNC_3(VAR_28, 0x7f, 0x00ff);


  FUNC_8(VAR_27);
  FUNC_3(VAR_28, VAR_4 | VAR_5, 0x00ff);
  goto out;
 case 129:
  FUNC_10(VAR_27, VAR_9,
    FUNC_0(VAR_9),
    8);
  if (VAR_28->type != VAR_0)
   FUNC_10(VAR_27, VAR_11,
     FUNC_0(VAR_11),
     5);
  else
   FUNC_10(VAR_27, VAR_10,
     FUNC_0(VAR_10),
     5);
  FUNC_10(VAR_27, VAR_12,
    FUNC_0(VAR_12),
    6);
  VAR_29 = VAR_27->cam.cam_mode[VAR_27->curr_mode].priv;
  FUNC_5(VAR_28, VAR_29 == 1 ? 0x0564 : 0x0310);
  FUNC_6(10);
  break;
 case 128:
  FUNC_10(VAR_27, VAR_16,
    FUNC_0(VAR_16),
    8);
  FUNC_4(VAR_28, VAR_13,
    FUNC_0(VAR_13));
  FUNC_4(VAR_28, VAR_14,
    FUNC_0(VAR_14));
  FUNC_4(VAR_28, VAR_15,
    FUNC_0(VAR_15));
  FUNC_10(VAR_27, VAR_17,
    FUNC_0(VAR_17),
    5);
  FUNC_4(VAR_28, VAR_18,
    FUNC_0(VAR_18));
  FUNC_4(VAR_28, VAR_19,
    FUNC_0(VAR_19));


  FUNC_8(VAR_27);
  FUNC_6(60);
  FUNC_9(VAR_27);

  FUNC_4(VAR_28,
   VAR_20, FUNC_0(VAR_20));
  break;
 default:

  FUNC_10(VAR_27, VAR_16,
    FUNC_0(VAR_16),
    8);
  FUNC_4(VAR_28, VAR_21,
    FUNC_0(VAR_21));
  FUNC_4(VAR_28, VAR_22,
    FUNC_0(VAR_22));
  FUNC_4(VAR_28, VAR_23,
    FUNC_0(VAR_23));
  FUNC_10(VAR_27, VAR_26,
    FUNC_0(VAR_26),
    5);
  FUNC_4(VAR_28, VAR_24,
    FUNC_0(VAR_24));
  FUNC_4(VAR_28, VAR_25,
    FUNC_0(VAR_25));
  break;
 }

 FUNC_8(VAR_27);
out:
 FUNC_6(1000);

 if (VAR_28->sensor == VAR_1)
  FUNC_3(VAR_28, VAR_3, VAR_3);

 VAR_28->do_ctrl = 1;

 return VAR_27->usb_err;
}
