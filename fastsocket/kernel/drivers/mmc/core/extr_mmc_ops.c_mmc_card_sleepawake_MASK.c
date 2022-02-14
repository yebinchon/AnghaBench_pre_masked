
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_host {int caps; struct mmc_card* card; } ;
struct mmc_command {int arg; int flags; int opcode; } ;
struct TYPE_2__ {int sa_timeout; } ;
struct mmc_card {int rca; TYPE_1__ ext_csd; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mmc_command*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_card*) ;
 int FUNC_5 (struct mmc_host*,struct mmc_command*,int ) ;

int FUNC_6(struct mmc_host *VAR_4, int VAR_5)
{
 struct mmc_command VAR_6;
 struct mmc_card *VAR_7 = VAR_4->card;
 int VAR_8;

 if (VAR_5)
  FUNC_3(VAR_4);

 FUNC_1(&VAR_6, 0, sizeof(struct mmc_command));

 VAR_6.opcode = VAR_3;
 VAR_6.arg = VAR_7->rca << 16;
 if (VAR_5)
  VAR_6.arg |= 1 << 15;

 VAR_6.flags = VAR_2 | VAR_1;
 VAR_8 = FUNC_5(VAR_4, &VAR_6, 0);
 if (VAR_8)
  return VAR_8;







 if (!(VAR_4->caps & VAR_0))
  FUNC_2(FUNC_0(VAR_7->ext_csd.sa_timeout, 10000));

 if (!VAR_5)
  VAR_8 = FUNC_4(VAR_7);

 return VAR_8;
}
