
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_command {int arg; int flags; int opcode; } ;
struct mmc_card {int rca; int host; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mmc_command*,int ,int) ;
 int FUNC_2 (int ,struct mmc_command*,int ) ;

int FUNC_3(struct mmc_card *VAR_4)
{
 int VAR_5;
 struct mmc_command VAR_6;

 FUNC_0(!VAR_4);
 FUNC_0(!VAR_4->host);

 FUNC_1(&VAR_6, 0, sizeof(struct mmc_command));

 VAR_6.opcode = VAR_3;
 VAR_6.arg = VAR_4->rca << 16;
 VAR_6.flags = VAR_2 | VAR_0;

 VAR_5 = FUNC_2(VAR_4->host, &VAR_6, VAR_1);
 if (VAR_5)
  return VAR_5;

 return 0;
}
