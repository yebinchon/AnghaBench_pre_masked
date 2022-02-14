
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_host {int en_dis_recurs; scalar_t__ enabled; int disable; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* disable ) (struct mmc_host*,int) ;} ;


 int FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (int *,unsigned long) ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (struct mmc_host*,int) ;

__attribute__((used)) static int FUNC_5(struct mmc_host *VAR_0, int VAR_1)
{
 if (VAR_0->ops->disable) {
  int VAR_2;

  VAR_0->en_dis_recurs = 1;
  VAR_2 = VAR_0->ops->disable(VAR_0, VAR_1);
  VAR_0->en_dis_recurs = 0;

  if (VAR_2 < 0) {
   FUNC_3("%s: disable error %d\n",
     FUNC_0(VAR_0), VAR_2);
   return VAR_2;
  }
  if (VAR_2 > 0) {
   unsigned long VAR_3 = FUNC_2(VAR_2);

   FUNC_1(&VAR_0->disable, VAR_3);
  }
 }
 VAR_0->enabled = 0;
 return 0;
}
