
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct cam {TYPE_1__* cam_mode; } ;
struct TYPE_4__ {size_t curr_mode; struct cam cam; } ;
struct sd {TYPE_2__ gspca_dev; } ;
struct TYPE_3__ {int width; int height; int priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct sd*,int ,int) ;
 int FUNC_1 (struct sd*,int ,int*,int) ;

int FUNC_2(struct sd *VAR_12)
{
 struct cam *VAR_13 = &VAR_12->gspca_dev.cam;
 int VAR_14, VAR_15 = 0;
 int VAR_16 = VAR_13->cam_mode[VAR_12->gspca_dev.curr_mode].width;
 int VAR_17 = VAR_13->cam_mode[VAR_12->gspca_dev.curr_mode].height;
 int VAR_18 = VAR_13->cam_mode[VAR_12->gspca_dev.curr_mode].priv;
 u8 VAR_19;

 switch (VAR_16) {
 case 320:
  VAR_19 = VAR_7;
  VAR_15 = FUNC_1(VAR_12, VAR_6, &VAR_19, 1);
  if (VAR_15 < 0)
   return VAR_15;

  VAR_19 = ((VAR_16 + 3) >> 8) & 0xff;
  VAR_15 = FUNC_1(VAR_12, VAR_10, &VAR_19, 1);
  if (VAR_15 < 0)
   return VAR_15;

  VAR_19 = (VAR_16 + 3) & 0xff;
  VAR_15 = FUNC_1(VAR_12, VAR_11, &VAR_19, 1);
  if (VAR_15 < 0)
   return VAR_15;

  VAR_19 = ((VAR_17 + 1) >> 8) & 0xff;
  VAR_15 = FUNC_1(VAR_12, VAR_8, &VAR_19, 1);
  if (VAR_15 < 0)
   return VAR_15;

  VAR_19 = (VAR_17 + 1) & 0xff;
  VAR_15 = FUNC_1(VAR_12, VAR_9, &VAR_19, 1);

  VAR_17 += 6;
  VAR_16 -= 1;
  break;

 case 640:
  VAR_19 = 0;
  VAR_15 = FUNC_1(VAR_12, VAR_6, &VAR_19, 1);
  if (VAR_15 < 0)
   return VAR_15;

  VAR_19 = ((VAR_16 + 7) >> 8) & 0xff;
  VAR_15 = FUNC_1(VAR_12, VAR_10, &VAR_19, 1);
  if (VAR_15 < 0)
   return VAR_15;

  VAR_19 = (VAR_16 + 7) & 0xff;
  VAR_15 = FUNC_1(VAR_12, VAR_11, &VAR_19, 1);
  if (VAR_15 < 0)
   return VAR_15;

  VAR_19 = ((VAR_17 + 3) >> 8) & 0xff;
  VAR_15 = FUNC_1(VAR_12, VAR_8, &VAR_19, 1);
  if (VAR_15 < 0)
   return VAR_15;

  VAR_19 = (VAR_17 + 3) & 0xff;
  VAR_15 = FUNC_1(VAR_12, VAR_9, &VAR_19, 1);

  VAR_17 += 12;
  VAR_16 -= 2;
  break;
 }
 VAR_15 = FUNC_0(VAR_12, VAR_3, 0x0c);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_0(VAR_12, VAR_1, 0x81);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_0(VAR_12, VAR_2, 0x82);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_0(VAR_12, VAR_4, 0x01);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_0(VAR_12, VAR_5,
     ((VAR_18 >> 8) & 0xff));
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_0(VAR_12, VAR_5, (VAR_18 & 0xff));
 if (VAR_15 < 0)
  return VAR_15;

 for (VAR_14 = 0; VAR_14 < 2 && !VAR_15; VAR_14++)
  VAR_15 = FUNC_0(VAR_12, VAR_5, 0);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_0(VAR_12, VAR_5, (VAR_17 >> 8) & 0xff);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_0(VAR_12, VAR_5, (VAR_17 & 0xff));
 if (VAR_15 < 0)
  return VAR_15;

 for (VAR_14 = 0; VAR_14 < 2 && !VAR_15; VAR_14++)
  VAR_15 = FUNC_0(VAR_12, VAR_5, 0);

 for (VAR_14 = 0; VAR_14 < 2 && !VAR_15; VAR_14++)
  VAR_15 = FUNC_0(VAR_12, VAR_4, 0);

 for (VAR_14 = 0; VAR_14 < 2 && !VAR_15; VAR_14++)
  VAR_15 = FUNC_0(VAR_12, VAR_0, 0);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_0(VAR_12, VAR_0, (VAR_16 >> 8) & 0xff);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_0(VAR_12, VAR_0, (VAR_16 & 0xff));
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_0(VAR_12, VAR_4, 0);
 return VAR_15;
}
