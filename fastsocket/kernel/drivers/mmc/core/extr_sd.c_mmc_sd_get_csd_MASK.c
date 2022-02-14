
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int dummy; } ;
struct mmc_card {int raw_csd; } ;


 int FUNC_0 (struct mmc_card*) ;
 int FUNC_1 (struct mmc_card*,int ) ;

int FUNC_2(struct mmc_host *VAR_0, struct mmc_card *VAR_1)
{
 int VAR_2;




 VAR_2 = FUNC_1(VAR_1, VAR_1->raw_csd);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  return VAR_2;

 return 0;
}
