
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;
struct ds1621_data {int valid; int update_lock; scalar_t__ last_updated; int conf; int * temp; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 struct ds1621_data* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct i2c_client*,int ) ;
 int FUNC_5 (struct i2c_client*,int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 struct i2c_client* FUNC_9 (struct device*) ;

__attribute__((used)) static struct ds1621_data *FUNC_10(struct device *VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_9(VAR_6);
 struct ds1621_data *VAR_8 = FUNC_3(VAR_7);
 u8 VAR_9;

 FUNC_6(&VAR_8->update_lock);

 if (FUNC_8(VAR_5, VAR_8->last_updated + VAR_4 + VAR_4 / 2)
     || !VAR_8->valid) {
  int VAR_10;

  FUNC_1(&VAR_7->dev, "Starting ds1621 update\n");

  VAR_8->conf = FUNC_4(VAR_7, VAR_2);

  for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_8->temp); VAR_10++)
   VAR_8->temp[VAR_10] = FUNC_2(VAR_7,
        VAR_3[VAR_10]);


  VAR_9 = VAR_8->conf;
  if (VAR_8->temp[0] > VAR_8->temp[1])
   VAR_9 &= ~VAR_1;
  if (VAR_8->temp[0] < VAR_8->temp[2])
   VAR_9 &= ~VAR_0;
  if (VAR_8->conf != VAR_9)
   FUNC_5(VAR_7, VAR_2,
        VAR_9);

  VAR_8->last_updated = VAR_5;
  VAR_8->valid = 1;
 }

 FUNC_7(&VAR_8->update_lock);

 return VAR_8;
}
