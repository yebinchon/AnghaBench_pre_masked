
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_command {int arg; int flags; int * resp; int opcode; } ;
struct mmc_card {int rca; int host; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mmc_command*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct mmc_command*,int ) ;

int FUNC_4(struct mmc_card *VAR_5, u32 *VAR_6)
{
 int VAR_7;
 struct mmc_command VAR_8;

 FUNC_0(!VAR_5);
 FUNC_0(!VAR_5->host);

 FUNC_1(&VAR_8, 0, sizeof(struct mmc_command));

 VAR_8.opcode = VAR_4;
 if (!FUNC_2(VAR_5->host))
  VAR_8.arg = VAR_5->rca << 16;
 VAR_8.flags = VAR_3 | VAR_2 | VAR_0;

 VAR_7 = FUNC_3(VAR_5->host, &VAR_8, VAR_1);
 if (VAR_7)
  return VAR_7;




 if (VAR_6)
  *VAR_6 = VAR_8.resp[0];

 return 0;
}
