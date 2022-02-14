
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_host {struct mmc_card* card; } ;
struct TYPE_2__ {int rev; } ;
struct mmc_card {TYPE_1__ ext_csd; } ;


 int VAR_0 ;
 int FUNC_0 (struct mmc_host*,int ) ;
 int FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct mmc_host *VAR_1)
{
 struct mmc_card *VAR_2 = VAR_1->card;
 int VAR_3 = -VAR_0;

 if (VAR_2 && VAR_2->ext_csd.rev >= 3) {
  VAR_3 = FUNC_0(VAR_1, 0);
  if (VAR_3 < 0)
   FUNC_2("%s: Error %d while awaking sleeping card",
     FUNC_1(VAR_1), VAR_3);
 }

 return VAR_3;
}
