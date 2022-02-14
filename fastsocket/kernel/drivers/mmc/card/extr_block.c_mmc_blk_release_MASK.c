
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_blk_data {int dummy; } ;
struct gendisk {struct mmc_blk_data* private_data; } ;
typedef int fmode_t ;


 int FUNC_0 (struct mmc_blk_data*) ;

__attribute__((used)) static int FUNC_1(struct gendisk *VAR_0, fmode_t VAR_1)
{
 struct mmc_blk_data *VAR_2 = VAR_0->private_data;

 FUNC_0(VAR_2);
 return 0;
}
