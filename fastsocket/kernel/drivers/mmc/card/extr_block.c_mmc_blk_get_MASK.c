
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_blk_data {scalar_t__ usage; } ;
struct gendisk {struct mmc_blk_data* private_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static struct mmc_blk_data *FUNC_2(struct gendisk *VAR_1)
{
 struct mmc_blk_data *VAR_2;

 FUNC_0(&VAR_0);
 VAR_2 = VAR_1->private_data;
 if (VAR_2 && VAR_2->usage == 0)
  VAR_2 = ((void*)0);
 if (VAR_2)
  VAR_2->usage++;
 FUNC_1(&VAR_0);

 return VAR_2;
}
