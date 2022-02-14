
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_host {int dummy; } ;
struct au1xmmc_host {TYPE_1__* platdata; } ;
struct TYPE_2__ {int (* card_readonly ) (struct mmc_host*) ;} ;


 int VAR_0 ;
 struct au1xmmc_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct mmc_host*) ;

__attribute__((used)) static int FUNC_2(struct mmc_host *VAR_1)
{
 struct au1xmmc_host *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->platdata && VAR_2->platdata->card_readonly)
  return !!VAR_2->platdata->card_readonly(VAR_1);

 return -VAR_0;
}
