
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2o_block_device {int flags; int i2o_dev; } ;
struct gendisk {struct i2o_block_device* private_data; } ;
typedef int fmode_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct i2o_block_device*,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct gendisk *VAR_0, fmode_t VAR_1)
{
 struct i2o_block_device *VAR_2 = VAR_0->private_data;
 u8 VAR_3;
 if (!VAR_2->i2o_dev)
  return 0;

 FUNC_0(VAR_2->i2o_dev);

 FUNC_2(VAR_2->i2o_dev, -1);

 if (VAR_2->flags & (1 << 3 | 1 << 4))
  VAR_3 = 0x21;
 else
  VAR_3 = 0x24;

 FUNC_1(VAR_2, VAR_3);

 return 0;
}
