
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sd {int gspca_dev; int * sensor_priv; } ;
typedef int s32 ;


 int FUNC_0 (scalar_t__**) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__** VAR_11 ;
 int FUNC_1 (struct sd*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct sd*,scalar_t__,scalar_t__*,int) ;
 int FUNC_3 (struct sd*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;

int FUNC_13(struct sd *VAR_12)
{
 int VAR_13, VAR_14 = 0;
 u8 VAR_15;
 s32 *VAR_16 = VAR_12->sensor_priv;

 if (VAR_10)
  FUNC_3(VAR_12);

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_11) && !VAR_14; VAR_13++) {
  VAR_15 = VAR_11[VAR_13][2];
  if (VAR_11[VAR_13][0] == VAR_8)
   VAR_14 = FUNC_2(VAR_12, VAR_11[VAR_13][1],
        &VAR_15, 1);
  else
   VAR_14 = FUNC_1(VAR_12, VAR_11[VAR_13][1], VAR_15);
 }

 VAR_14 = FUNC_8(&VAR_12->gspca_dev,
       VAR_16[VAR_4]);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_14 = FUNC_9(&VAR_12->gspca_dev, VAR_16[VAR_5]);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_14 = FUNC_11(&VAR_12->gspca_dev,
          VAR_16[VAR_7]);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_14 = FUNC_7(&VAR_12->gspca_dev,
           VAR_16[VAR_3]);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_14 = FUNC_10(&VAR_12->gspca_dev, VAR_16[VAR_6]);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_14 = FUNC_12(&VAR_12->gspca_dev, VAR_16[VAR_9]);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_14 = FUNC_4(&VAR_12->gspca_dev,
    VAR_16[VAR_0]);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_14 = FUNC_6(&VAR_12->gspca_dev,
    VAR_16[VAR_2]);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_14 = FUNC_5(&VAR_12->gspca_dev,
    VAR_16[VAR_1]);
 return VAR_14;
}
