
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct cam {TYPE_1__* cam_mode; } ;
struct TYPE_4__ {size_t curr_mode; struct cam cam; } ;
struct sd {TYPE_2__ gspca_dev; scalar_t__* sensor_priv; } ;
typedef scalar_t__ s32 ;
struct TYPE_3__ {int width; int height; int priv; } ;


 int FUNC_0 (scalar_t__**) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_13 ;
 size_t VAR_14 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sd*,scalar_t__,int) ;
 int FUNC_4 (struct sd*,scalar_t__,int*,int) ;
 int VAR_15 ;
 scalar_t__** VAR_16 ;

int FUNC_5(struct sd *VAR_17)
{
 u8 VAR_18;
 int VAR_19, VAR_20 = 0;
 struct cam *VAR_21 = &VAR_17->gspca_dev.cam;
 s32 *VAR_22 = VAR_17->sensor_priv;

 int VAR_23 = VAR_21->cam_mode[VAR_17->gspca_dev.curr_mode].width;
 int VAR_24 = VAR_21->cam_mode[VAR_17->gspca_dev.curr_mode].height;
 int VAR_25 = VAR_21->cam_mode[VAR_17->gspca_dev.curr_mode].priv;
 int VAR_26 = VAR_7;

 if ((!FUNC_2(VAR_15) &&
  VAR_22[VAR_14]) ||
  (FUNC_2(VAR_15) &&
  !VAR_22[VAR_14]))
  VAR_25--;

 if (VAR_23 <= 320)
  VAR_26 /= 2;


 for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_16) && !VAR_20; VAR_19++) {
  if (VAR_16[VAR_19][0] == VAR_0)
   VAR_20 = FUNC_3(VAR_17, VAR_16[VAR_19][1],
    VAR_16[VAR_19][2]);
  else if (VAR_16[VAR_19][0] == VAR_13) {
   VAR_18 = VAR_16[VAR_19][2];
   VAR_20 = FUNC_4(VAR_17,
    VAR_16[VAR_19][1], &VAR_18, 1);
  }
 }
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_3(VAR_17, VAR_4,
     ((VAR_25 >> 8) & 0xff));
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_3(VAR_17, VAR_4, (VAR_25 & 0xff));
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_3(VAR_17, VAR_4, 0);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_3(VAR_17, VAR_4, (VAR_24 >> 8) & 0xff);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_3(VAR_17, VAR_4, (VAR_24 & 0xff));
 if (VAR_20 < 0)
  return VAR_20;

 for (VAR_19 = 0; VAR_19 < 2 && !VAR_20; VAR_19++)
  VAR_20 = FUNC_3(VAR_17, VAR_4, 0);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_3(VAR_17, VAR_3, 0);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_3(VAR_17, VAR_3, 2);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_3(VAR_17, VAR_2,
     (VAR_26 >> 8) & 0xff);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_3(VAR_17, VAR_2, VAR_26 & 0xff);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_3(VAR_17, VAR_2,
     ((VAR_23 + VAR_26) >> 8) & 0xff);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_3(VAR_17, VAR_2,
     ((VAR_23 + VAR_26) & 0xff));
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_3(VAR_17, VAR_3, 0);
 if (VAR_20 < 0)
  return VAR_20;

 switch (VAR_23) {
 case 640:
  FUNC_1(VAR_1, "Configuring camera for VGA mode");

  VAR_18 = VAR_12 | VAR_11 |
         VAR_10;
  VAR_20 = FUNC_4(VAR_17, VAR_6, &VAR_18, 1);
  break;

 case 352:
  FUNC_1(VAR_1, "Configuring camera for CIF mode");

  VAR_18 = VAR_5 | VAR_11 |
    VAR_10;
  VAR_20 = FUNC_4(VAR_17, VAR_6, &VAR_18, 1);
  break;

 case 320:
  FUNC_1(VAR_1, "Configuring camera for QVGA mode");

  VAR_18 = VAR_9 | VAR_11 |
    VAR_10;
  VAR_20 = FUNC_4(VAR_17, VAR_6, &VAR_18, 1);
  break;

 case 176:
  FUNC_1(VAR_1, "Configuring camera for QCIF mode");

  VAR_18 = VAR_8 | VAR_11 |
   VAR_10;
  VAR_20 = FUNC_4(VAR_17, VAR_6, &VAR_18, 1);
  break;
 }
 return VAR_20;
}
