
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sd {int bridge; int sensor; int i2c_addr; int flags; TYPE_1__* ctrls; } ;
struct gspca_dev {int* usb_buf; scalar_t__ usb_err; int ctrl_dis; } ;
struct TYPE_2__ {int def; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;

 int VAR_4 ;



 size_t VAR_5 ;
 int* VAR_6 ;
 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (struct gspca_dev*) ;
 int FUNC_3 (struct gspca_dev*) ;
 int FUNC_4 (struct gspca_dev*) ;
 int FUNC_5 (struct gspca_dev*,int,int) ;
 int FUNC_6 (struct gspca_dev*,int,int*,int) ;
 int FUNC_7 (struct gspca_dev*,int,int) ;
 int** VAR_7 ;

__attribute__((used)) static int FUNC_8(struct gspca_dev *VAR_8)
{
 struct sd *VAR_9 = (struct sd *) VAR_8;
 const u8 *VAR_10;
 u8 VAR_11[] = { 0x29, 0x74 };
 u8 VAR_12;


 FUNC_7(VAR_8, 0xf1, 0x01);
 FUNC_5(VAR_8, 0x00, 1);
 FUNC_7(VAR_8, 0xf1, 0x00);
 FUNC_5(VAR_8, 0x00, 1);
 VAR_12 = VAR_8->usb_buf[0];
 if (VAR_8->usb_err < 0)
  return VAR_8->usb_err;
 FUNC_0(VAR_0, "Sonix chip id: %02x", VAR_12);
 switch (VAR_9->bridge) {
 case 135:
 case 134:
  if (VAR_12 != 0x11)
   return -VAR_1;
  break;
 default:


  if (VAR_12 != 0x12)
   return -VAR_1;
 }

 switch (VAR_9->sensor) {
 case 131:
  FUNC_1(VAR_8);
  break;
 case 130:
  FUNC_2(VAR_8);
  break;
 case 129:
  FUNC_3(VAR_8);
  break;
 case 128:
  FUNC_4(VAR_8);
  break;
 }

 switch (VAR_9->bridge) {
 case 135:
  FUNC_7(VAR_8, 0x02, VAR_11[1]);
  break;
 case 134:
  FUNC_6(VAR_8, 0x01, VAR_11, 2);
  break;
 case 133:
  FUNC_7(VAR_8, 0x02, 0x62);
  break;
 case 132:
  VAR_11[1] = 0x70;
  FUNC_6(VAR_8, 0x01, VAR_11, 2);
  break;
 }

 if (VAR_9->sensor == VAR_4)
  VAR_9->ctrls[VAR_5].def = 0x10;



 FUNC_7(VAR_8, 0xf1, 0x00);


 VAR_10 = VAR_7[VAR_9->sensor];
 VAR_9->i2c_addr = VAR_10[9];

 VAR_8->ctrl_dis = VAR_6[VAR_9->sensor];
 if (!(VAR_9->flags & VAR_2))
  VAR_8->ctrl_dis |= (1 << VAR_3);

 return VAR_8->usb_err;
}
