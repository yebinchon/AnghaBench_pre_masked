
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct isl29003_data {int* reg_cache; int lock; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct isl29003_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,size_t,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_2,
    u32 VAR_3, u8 VAR_4, u8 VAR_5, u8 VAR_6)
{
 struct isl29003_data *VAR_7 = FUNC_0(VAR_2);
 int VAR_8 = 0;
 u8 VAR_9;

 if (VAR_3 >= VAR_1)
  return -VAR_0;

 FUNC_2(&VAR_7->lock);

 VAR_9 = VAR_7->reg_cache[VAR_3];
 VAR_9 &= ~VAR_4;
 VAR_9 |= VAR_6 << VAR_5;

 VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_9);
 if (!VAR_8)
  VAR_7->reg_cache[VAR_3] = VAR_9;

 FUNC_3(&VAR_7->lock);
 return VAR_8;
}
