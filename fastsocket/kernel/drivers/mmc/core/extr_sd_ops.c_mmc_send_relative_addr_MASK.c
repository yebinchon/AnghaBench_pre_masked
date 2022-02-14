
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int dummy; } ;
struct mmc_command {int flags; int* resp; scalar_t__ arg; int opcode; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mmc_command*,int ,int) ;
 int FUNC_2 (struct mmc_host*,struct mmc_command*,int ) ;

int FUNC_3(struct mmc_host *VAR_4, unsigned int *VAR_5)
{
 int VAR_6;
 struct mmc_command VAR_7;

 FUNC_0(!VAR_4);
 FUNC_0(!VAR_5);

 FUNC_1(&VAR_7, 0, sizeof(struct mmc_command));

 VAR_7.opcode = VAR_3;
 VAR_7.arg = 0;
 VAR_7.flags = VAR_2 | VAR_0;

 VAR_6 = FUNC_2(VAR_4, &VAR_7, VAR_1);
 if (VAR_6)
  return VAR_6;

 *VAR_5 = VAR_7.resp[0] >> 16;

 return 0;
}
