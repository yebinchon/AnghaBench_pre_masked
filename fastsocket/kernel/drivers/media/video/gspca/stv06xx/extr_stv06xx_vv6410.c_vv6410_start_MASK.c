
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct cam {TYPE_1__* cam_mode; } ;
struct TYPE_4__ {size_t curr_mode; struct cam cam; } ;
struct sd {TYPE_2__ gspca_dev; } ;
struct TYPE_3__ {int priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct sd*,int ,int) ;
 int FUNC_2 (struct sd*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct sd *VAR_12)
{
 int VAR_13;
 struct cam *VAR_14 = &VAR_12->gspca_dev.cam;
 u32 VAR_15 = VAR_14->cam_mode[VAR_12->gspca_dev.curr_mode].priv;

 if (VAR_15 & VAR_7) {
  FUNC_0(VAR_0, "Cropping to QVGA");
  FUNC_2(VAR_12, VAR_10, 320 - 1);
  FUNC_2(VAR_12, VAR_11, 240 - 1);
 } else {
  FUNC_2(VAR_12, VAR_10, 360 - 1);
  FUNC_2(VAR_12, VAR_11, 294 - 1);
 }

 if (VAR_15 & VAR_9) {
  FUNC_0(VAR_0, "Enabling subsampling");
  FUNC_1(VAR_12, VAR_6, 0x02);
  FUNC_1(VAR_12, VAR_5, 0x06);

  FUNC_1(VAR_12, VAR_4, 0x10);
 } else {
  FUNC_1(VAR_12, VAR_6, 0x01);
  FUNC_1(VAR_12, VAR_5, 0x0a);

  FUNC_1(VAR_12, VAR_4, 0x20);
 }


 VAR_13 = FUNC_1(VAR_12, VAR_3, VAR_2);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_2(VAR_12, VAR_8, 0);
 if (VAR_13 < 0)
  return VAR_13;

 FUNC_0(VAR_1, "Starting stream");

 return 0;
}
