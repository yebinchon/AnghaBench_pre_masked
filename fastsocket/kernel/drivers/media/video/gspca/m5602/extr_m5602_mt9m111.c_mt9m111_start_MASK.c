
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct cam {TYPE_1__* cam_mode; } ;
struct TYPE_4__ {size_t curr_mode; struct cam cam; } ;
struct sd {int* sensor_priv; TYPE_2__ gspca_dev; } ;
typedef int s32 ;
struct TYPE_3__ {int width; int height; } ;


 int FUNC_0 (scalar_t__**) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int ,char*) ;
 size_t VAR_12 ;
 int FUNC_2 (struct sd*,scalar_t__,int) ;
 int FUNC_3 (struct sd*,scalar_t__,int*,int) ;
 scalar_t__** VAR_13 ;

int FUNC_4(struct sd *VAR_14)
{
 int VAR_15, VAR_16 = 0;
 u8 VAR_17[2];
 struct cam *VAR_18 = &VAR_14->gspca_dev.cam;
 s32 *VAR_19 = VAR_14->sensor_priv;

 int VAR_20 = VAR_18->cam_mode[VAR_14->gspca_dev.curr_mode].width - 1;
 int VAR_21 = VAR_18->cam_mode[VAR_14->gspca_dev.curr_mode].height;

 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_13) && !VAR_16; VAR_15++) {
  if (VAR_13[VAR_15][0] == VAR_0) {
   VAR_16 = FUNC_2(VAR_14,
    VAR_13[VAR_15][1],
    VAR_13[VAR_15][2]);
  } else {
   VAR_17[0] = VAR_13[VAR_15][2];
   VAR_17[1] = VAR_13[VAR_15][3];
   VAR_16 = FUNC_3(VAR_14,
    VAR_13[VAR_15][1], VAR_17, 2);
  }
 }
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_2(VAR_14, VAR_5, (VAR_21 >> 8) & 0xff);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_2(VAR_14, VAR_5, (VAR_21 & 0xff));
 if (VAR_16 < 0)
  return VAR_16;

 for (VAR_15 = 0; VAR_15 < 2 && !VAR_16; VAR_15++)
  VAR_16 = FUNC_2(VAR_14, VAR_5, 0);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_2(VAR_14, VAR_4, 0);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_2(VAR_14, VAR_4, 2);
 if (VAR_16 < 0)
  return VAR_16;

 for (VAR_15 = 0; VAR_15 < 2 && !VAR_16; VAR_15++)
  VAR_16 = FUNC_2(VAR_14, VAR_3, 0);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_2(VAR_14, VAR_3,
     (VAR_20 >> 8) & 0xff);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_2(VAR_14, VAR_3, VAR_20 & 0xff);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_2(VAR_14, VAR_4, 0);
 if (VAR_16 < 0)
  return VAR_16;

 switch (VAR_20) {
 case 640:
  FUNC_1(VAR_1, "Configuring camera for VGA mode");
  VAR_17[0] = VAR_8;
  VAR_17[1] = VAR_9 |
     VAR_6 |
     (VAR_19[VAR_12] << 0) |
     (VAR_19[VAR_2] << 1);

  VAR_16 = FUNC_3(VAR_14,
      VAR_11, VAR_17, 2);
  break;

 case 320:
  FUNC_1(VAR_1, "Configuring camera for QVGA mode");
  VAR_17[0] = VAR_8;
  VAR_17[1] = VAR_10 |
    VAR_7 |
    (VAR_19[VAR_12] << 0) |
    (VAR_19[VAR_2] << 1);
  VAR_16 = FUNC_3(VAR_14,
      VAR_11, VAR_17, 2);
  break;
 }
 return VAR_16;
}
