
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int gspca_dev; int * sensor_priv; } ;
typedef int s32 ;


 int FUNC_0 (int**) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;

 size_t VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (char*) ;
 int** VAR_11 ;
 int FUNC_2 (struct sd*,int,int) ;
 int FUNC_3 (struct sd*,int,int*,int) ;
 int FUNC_4 (struct sd*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ) ;

int FUNC_14(struct sd *VAR_12)
{
 s32 *VAR_13 = VAR_12->sensor_priv;
 int VAR_14, VAR_15 = 0;


 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_11) && !VAR_15; VAR_14++) {
  u8 VAR_16[2] = {0x00, 0x00};

  switch (VAR_11[VAR_14][0]) {
  case 129:
   VAR_15 = FUNC_2(VAR_12,
    VAR_11[VAR_14][1],
    VAR_11[VAR_14][2]);
   break;

  case 128:
   VAR_16[0] = VAR_11[VAR_14][2];
   VAR_15 = FUNC_3(VAR_12,
    VAR_11[VAR_14][1], VAR_16, 1);
   break;

  default:
   FUNC_1("Invalid stream command, exiting init");
   return -VAR_3;
  }
 }
 if (VAR_15 < 0)
  return VAR_15;

 if (VAR_10)
  FUNC_4(VAR_12);

 VAR_15 = FUNC_8(&VAR_12->gspca_dev,
       VAR_13[VAR_4]);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_9(&VAR_12->gspca_dev, VAR_13[VAR_5]);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_11(&VAR_12->gspca_dev, VAR_13[VAR_7]);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_13(&VAR_12->gspca_dev, VAR_13[VAR_9]);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_12(&VAR_12->gspca_dev,
          VAR_13[VAR_8]);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_7(&VAR_12->gspca_dev,
          VAR_13[VAR_2]);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_10(&VAR_12->gspca_dev,
           VAR_13[VAR_6]);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_6(&VAR_12->gspca_dev,
    VAR_13[VAR_1]);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_5(&VAR_12->gspca_dev,
    VAR_13[VAR_0]);
 return VAR_15;
}
