
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_card {int dummy; } ;
struct mmc_blk_data {int queue; int disk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mmc_blk_data*) ;
 int FUNC_2 (int *) ;
 struct mmc_blk_data* FUNC_3 (struct mmc_card*) ;
 int FUNC_4 (struct mmc_card*,int *) ;

__attribute__((used)) static void FUNC_5(struct mmc_card *VAR_0)
{
 struct mmc_blk_data *VAR_1 = FUNC_3(VAR_0);

 if (VAR_1) {

  FUNC_0(VAR_1->disk);


  FUNC_2(&VAR_1->queue);

  FUNC_1(VAR_1);
 }
 FUNC_4(VAR_0, ((void*)0));
}
