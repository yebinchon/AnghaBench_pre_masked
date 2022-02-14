
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int caps; int enabled; scalar_t__ nesting_cnt; scalar_t__ en_dis_recurs; } ;


 int VAR_0 ;
 int FUNC_0 (struct mmc_host*,int ) ;

int FUNC_1(struct mmc_host *VAR_1)
{
 int VAR_2;

 if (!(VAR_1->caps & VAR_0))
  return 0;

 if (VAR_1->en_dis_recurs)
  return 0;

 if (--VAR_1->nesting_cnt)
  return 0;

 if (!VAR_1->enabled)
  return 0;

 VAR_2 = FUNC_0(VAR_1, 0);
 return VAR_2;
}
