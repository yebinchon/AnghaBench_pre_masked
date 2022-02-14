
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mmc_host {TYPE_1__* card; } ;
struct TYPE_2__ {int rca; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (int *,struct mmc_host*,int ,int *,int) ;
 int FUNC_3 (struct mmc_host*,int,int *,int ) ;

int FUNC_4(struct mmc_host *VAR_2, u32 *VAR_3)
{
 int VAR_4, VAR_5;

 if (!FUNC_1(VAR_2)) {
  if (!VAR_2->card)
   return -VAR_0;
  return FUNC_3(VAR_2, VAR_2->card->rca << 16,
    VAR_3, VAR_1);
 }

 VAR_4 = FUNC_2(((void*)0), VAR_2, VAR_1, VAR_3, 16);
 if (VAR_4)
  return VAR_4;

 for (VAR_5 = 0;VAR_5 < 4;VAR_5++)
  VAR_3[VAR_5] = FUNC_0(VAR_3[VAR_5]);

 return 0;
}
