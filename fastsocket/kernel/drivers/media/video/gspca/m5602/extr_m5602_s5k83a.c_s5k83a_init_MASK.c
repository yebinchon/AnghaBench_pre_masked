
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int gspca_dev; scalar_t__ sensor_priv; } ;
struct s5k83a_priv {int * settings; } ;
typedef int s32 ;


 int FUNC_0 (int**) ;

 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;


 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (char*) ;
 int** VAR_7 ;
 int FUNC_2 (struct sd*,int,int) ;
 int FUNC_3 (struct sd*,int,int*,int) ;
 int FUNC_4 (struct sd*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;

int FUNC_10(struct sd *VAR_8)
{
 int VAR_9, VAR_10 = 0;
 s32 *VAR_11 =
   ((struct s5k83a_priv *) VAR_8->sensor_priv)->settings;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_7) && !VAR_10; VAR_9++) {
  u8 VAR_12[2] = {0x00, 0x00};

  switch (VAR_7[VAR_9][0]) {
  case 130:
   VAR_10 = FUNC_2(VAR_8,
     VAR_7[VAR_9][1],
     VAR_7[VAR_9][2]);
   break;

  case 129:
   VAR_12[0] = VAR_7[VAR_9][2];
   VAR_10 = FUNC_3(VAR_8,
    VAR_7[VAR_9][1], VAR_12, 1);
   break;

  case 128:
   VAR_12[0] = VAR_7[VAR_9][2];
   VAR_12[1] = VAR_7[VAR_9][3];
   VAR_10 = FUNC_3(VAR_8,
    VAR_7[VAR_9][1], VAR_12, 2);
   break;
  default:
   FUNC_1("Invalid stream command, exiting init");
   return -VAR_1;
  }
 }

 if (VAR_6)
  FUNC_4(VAR_8);

 VAR_10 = FUNC_7(&VAR_8->gspca_dev, VAR_11[VAR_3]);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_5(&VAR_8->gspca_dev,
         VAR_11[VAR_0]);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_6(&VAR_8->gspca_dev,
       VAR_11[VAR_2]);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_8(&VAR_8->gspca_dev, VAR_11[VAR_4]);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_9(&VAR_8->gspca_dev, VAR_11[VAR_5]);

 return VAR_10;
}
