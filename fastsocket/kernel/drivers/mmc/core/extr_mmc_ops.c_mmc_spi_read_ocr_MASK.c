
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_host {int dummy; } ;
struct mmc_command {int arg; int * resp; int flags; int opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mmc_command*,int ,int) ;
 int FUNC_1 (struct mmc_host*,struct mmc_command*,int ) ;

int FUNC_2(struct mmc_host *VAR_2, int VAR_3, u32 *VAR_4)
{
 struct mmc_command VAR_5;
 int VAR_6;

 FUNC_0(&VAR_5, 0, sizeof(struct mmc_command));

 VAR_5.opcode = VAR_1;
 VAR_5.arg = VAR_3 ? (1 << 30) : 0;
 VAR_5.flags = VAR_0;

 VAR_6 = FUNC_1(VAR_2, &VAR_5, 0);

 *VAR_4 = VAR_5.resp[1];
 return VAR_6;
}
