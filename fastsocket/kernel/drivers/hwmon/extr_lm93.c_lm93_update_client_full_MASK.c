
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm93_data {int block10; int block1; scalar_t__ block9; scalar_t__ block8; scalar_t__ block5; scalar_t__ block4; scalar_t__ block2; scalar_t__ block7; scalar_t__ block3; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,int,int *) ;
 int FUNC_2 (struct lm93_data*,struct i2c_client*) ;

__attribute__((used)) static void FUNC_3(struct lm93_data *VAR_0,
        struct i2c_client *VAR_1)
{
 FUNC_0(&VAR_1->dev,"starting device update (block data enabled)\n");


 FUNC_1(VAR_1, 3, (u8 *)(VAR_0->block3));
 FUNC_1(VAR_1, 7, (u8 *)(VAR_0->block7));


 FUNC_1(VAR_1, 2, (u8 *)(VAR_0->block2));


 FUNC_1(VAR_1, 4, (u8 *)(VAR_0->block4));


 FUNC_1(VAR_1, 5, (u8 *)(VAR_0->block5));
 FUNC_1(VAR_1, 8, (u8 *)(VAR_0->block8));


 FUNC_1(VAR_1, 9, (u8 *)(VAR_0->block9));


 FUNC_1(VAR_1, 1, (u8 *)(&VAR_0->block1));


 FUNC_1(VAR_1, 10, (u8 *)(&VAR_0->block10));

 FUNC_2(VAR_0, VAR_1);
}
