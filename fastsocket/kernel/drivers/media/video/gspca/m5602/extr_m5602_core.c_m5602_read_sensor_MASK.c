
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sd {TYPE_1__* sensor; } ;
struct TYPE_2__ {int const i2c_regW; int i2c_slave_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int const,int) ;
 int FUNC_1 (struct sd*,int ,int*) ;
 int FUNC_2 (struct sd*) ;
 int FUNC_3 (struct sd*,int ,int const) ;

int FUNC_4(struct sd *VAR_6, const u8 VAR_7,
         u8 *VAR_8, const u8 VAR_9)
{
 int VAR_10, VAR_11;

 if (!VAR_9 || VAR_9 > VAR_6->sensor->i2c_regW)
  return -VAR_1;

 VAR_10 = FUNC_2(VAR_6);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_3(VAR_6, VAR_4,
     VAR_6->sensor->i2c_slave_id);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_3(VAR_6, VAR_5, VAR_7);
 if (VAR_10 < 0)
  return VAR_10;





 if (VAR_6->sensor->i2c_regW == 1) {
  VAR_10 = FUNC_3(VAR_6, VAR_2, 1);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_10 = FUNC_3(VAR_6, VAR_2, 0x08);
 } else {
  VAR_10 = FUNC_3(VAR_6, VAR_2, 0x18 + VAR_9);
 }

 for (VAR_11 = 0; (VAR_11 < VAR_9) && !VAR_10; VAR_11++) {
  VAR_10 = FUNC_2(VAR_6);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_10 = FUNC_1(VAR_6, VAR_3, &(VAR_8[VAR_11]));

  FUNC_0(VAR_0, "Reading sensor register "
          "0x%x containing 0x%x ", VAR_7, *VAR_8);
 }
 return VAR_10;
}
