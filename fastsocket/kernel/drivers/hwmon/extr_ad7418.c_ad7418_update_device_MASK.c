
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
struct ad7418_data {int valid; int adc_max; int lock; scalar_t__ last_updated; void** in; void** temp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 struct ad7418_data* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct i2c_client*,int ) ;
 int FUNC_5 (struct i2c_client*,int ,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 struct i2c_client* FUNC_9 (struct device*) ;
 int FUNC_10 (int) ;

__attribute__((used)) static struct ad7418_data *FUNC_11(struct device *VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_9(VAR_6);
 struct ad7418_data *VAR_8 = FUNC_3(VAR_7);

 FUNC_6(&VAR_8->lock);

 if (FUNC_8(VAR_5, VAR_8->last_updated + VAR_4 + VAR_4 / 2)
  || !VAR_8->valid) {
  u8 VAR_9;
  int VAR_10, VAR_11;


  VAR_9 = FUNC_4(VAR_7, VAR_2);
  VAR_9 &= 0x1F;

  FUNC_5(VAR_7, VAR_2,
      VAR_9 | VAR_0);
  FUNC_10(30);

  for (VAR_10 = 0; VAR_10 < 3; VAR_10++) {
   VAR_8->temp[VAR_10] = FUNC_1(VAR_7, VAR_3[VAR_10]);
  }

  for (VAR_10 = 0, VAR_11 = 4; VAR_10 < VAR_8->adc_max; VAR_10++, VAR_11--) {
   FUNC_5(VAR_7,
     VAR_2,
     VAR_9 | FUNC_0(VAR_11));

   FUNC_10(15);
   VAR_8->in[VAR_8->adc_max - 1 - VAR_10] =
    FUNC_1(VAR_7, VAR_1);
  }


  FUNC_2(VAR_7, VAR_2, VAR_9);

  VAR_8->last_updated = VAR_5;
  VAR_8->valid = 1;
 }

 FUNC_7(&VAR_8->lock);

 return VAR_8;
}
