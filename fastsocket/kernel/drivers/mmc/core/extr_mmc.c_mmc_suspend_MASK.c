
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_host {TYPE_1__* card; } ;
struct TYPE_2__ {int state; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*) ;

__attribute__((used)) static int FUNC_5(struct mmc_host *VAR_1)
{
 FUNC_0(!VAR_1);
 FUNC_0(!VAR_1->card);

 FUNC_1(VAR_1);
 if (!FUNC_3(VAR_1))
  FUNC_2(VAR_1);
 VAR_1->card->state &= ~VAR_0;
 FUNC_4(VAR_1);

 return 0;
}
