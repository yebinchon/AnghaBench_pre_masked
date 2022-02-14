
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sd {int gspca_dev; int * sensor_priv; } ;
typedef int s32 ;


 int FUNC_0 (scalar_t__**) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__** VAR_8 ;
 int FUNC_1 (struct sd*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct sd*,scalar_t__,scalar_t__*,int) ;
 int FUNC_3 (struct sd*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;

int FUNC_10(struct sd *VAR_9)
{
 int VAR_10, VAR_11 = 0;
 s32 *VAR_12 = VAR_9->sensor_priv;


 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_8) && !VAR_11; VAR_10++) {
  u8 VAR_13[2];

  if (VAR_8[VAR_10][0] == VAR_1) {
   VAR_11 = FUNC_1(VAR_9,
    VAR_8[VAR_10][1],
    VAR_8[VAR_10][2]);
  } else {
   VAR_13[0] = VAR_8[VAR_10][2];
   VAR_13[1] = VAR_8[VAR_10][3];
   VAR_11 = FUNC_2(VAR_9,
    VAR_8[VAR_10][1], VAR_13, 2);
  }
 }

 if (VAR_7)
  FUNC_3(VAR_9);

 VAR_11 = FUNC_9(&VAR_9->gspca_dev, VAR_12[VAR_6]);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_7(&VAR_9->gspca_dev, VAR_12[VAR_4]);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_6(&VAR_9->gspca_dev,
      VAR_12[VAR_3]);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_4(&VAR_9->gspca_dev,
      VAR_12[VAR_0]);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_8(&VAR_9->gspca_dev,
     VAR_12[VAR_5]);
 if (VAR_11 < 0)
  return VAR_11;

 return FUNC_5(&VAR_9->gspca_dev, VAR_12[VAR_2]);
}
