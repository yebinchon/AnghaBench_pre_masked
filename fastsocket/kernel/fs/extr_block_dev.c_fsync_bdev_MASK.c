
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct block_device {int dummy; } ;


 int FUNC_0 (struct super_block*) ;
 struct super_block* FUNC_1 (struct block_device*) ;
 int FUNC_2 (struct block_device*) ;
 int FUNC_3 (struct super_block*) ;

int FUNC_4(struct block_device *VAR_0)
{
 struct super_block *VAR_1 = FUNC_1(VAR_0);
 if (VAR_1) {
  int VAR_2 = FUNC_3(VAR_1);
  FUNC_0(VAR_1);
  return VAR_2;
 }
 return FUNC_2(VAR_0);
}
