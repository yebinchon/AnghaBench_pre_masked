
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2o_block_device {int power; int i2o_dev; } ;
struct block_device {TYPE_1__* bd_disk; } ;
typedef int fmode_t ;
struct TYPE_2__ {struct i2o_block_device* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct i2o_block_device*,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct block_device *VAR_1, fmode_t VAR_2)
{
 struct i2o_block_device *VAR_3 = VAR_1->bd_disk->private_data;

 if (!VAR_3->i2o_dev)
  return -VAR_0;

 if (VAR_3->power > 0x1f)
  FUNC_2(VAR_3, 0x02);

 FUNC_1(VAR_3->i2o_dev, -1);

 FUNC_0(VAR_3->i2o_dev, -1);

 FUNC_3("Ready.\n");

 return 0;
}
