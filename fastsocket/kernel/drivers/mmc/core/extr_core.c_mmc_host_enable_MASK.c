
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_host {int caps; int en_dis_recurs; int enabled; TYPE_1__* ops; int disable; int nesting_cnt; } ;
struct TYPE_2__ {int (* enable ) (struct mmc_host*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (struct mmc_host*) ;

int FUNC_4(struct mmc_host *VAR_1)
{
 if (!(VAR_1->caps & VAR_0))
  return 0;

 if (VAR_1->en_dis_recurs)
  return 0;

 if (VAR_1->nesting_cnt++)
  return 0;

 FUNC_0(&VAR_1->disable);

 if (VAR_1->enabled)
  return 0;

 if (VAR_1->ops->enable) {
  int VAR_2;

  VAR_1->en_dis_recurs = 1;
  VAR_2 = VAR_1->ops->enable(VAR_1);
  VAR_1->en_dis_recurs = 0;

  if (VAR_2) {
   FUNC_2("%s: enable error %d\n",
     FUNC_1(VAR_1), VAR_2);
   return VAR_2;
  }
 }
 VAR_1->enabled = 1;
 return 0;
}
