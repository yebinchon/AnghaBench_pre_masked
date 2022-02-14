
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct block_device {int dummy; } ;


 int FUNC_0 (struct super_block*) ;
 struct super_block* FUNC_1 (struct block_device*) ;
 int FUNC_2 (struct block_device*) ;
 int FUNC_3 (struct super_block*,int) ;
 int FUNC_4 (struct super_block*) ;

int FUNC_5(struct block_device *VAR_0, bool VAR_1)
{
 struct super_block *VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = 0;

 if (VAR_2) {






  FUNC_4(VAR_2);
  VAR_3 = FUNC_3(VAR_2, VAR_1);
  FUNC_0(VAR_2);
 }
 FUNC_2(VAR_0);
 return VAR_3;
}
