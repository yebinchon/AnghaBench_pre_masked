
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2o_block_device {scalar_t__ media_change_flag; } ;
struct gendisk {struct i2o_block_device* private_data; } ;



__attribute__((used)) static int FUNC_0(struct gendisk *VAR_0)
{
 struct i2o_block_device *VAR_1 = VAR_0->private_data;

 if (VAR_1->media_change_flag) {
  VAR_1->media_change_flag = 0;
  return 1;
 }
 return 0;
}
