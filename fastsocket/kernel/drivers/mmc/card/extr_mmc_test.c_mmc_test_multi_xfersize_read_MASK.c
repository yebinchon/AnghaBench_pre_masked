
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mmc_test_card {TYPE_2__* card; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {int max_blk_count; } ;


 int VAR_0 ;
 int FUNC_0 (struct mmc_test_card*,int,int,int ) ;
 int FUNC_1 (struct mmc_test_card*,int) ;

__attribute__((used)) static int FUNC_2(struct mmc_test_card *VAR_1)
{
 int VAR_2;

 if (VAR_1->card->host->max_blk_count == 1)
  return VAR_0;

 VAR_2 = FUNC_1(VAR_1, 512);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_1, 2, 512, 0);
 if (VAR_2)
  return VAR_2;

 return 0;
}
