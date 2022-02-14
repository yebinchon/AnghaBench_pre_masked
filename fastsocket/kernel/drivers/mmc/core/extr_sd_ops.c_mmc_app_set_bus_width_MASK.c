
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_command {int flags; int arg; int opcode; } ;
struct mmc_card {int host; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct mmc_command*,int ,int) ;
 int FUNC_2 (int ,struct mmc_card*,struct mmc_command*,int ) ;

int FUNC_3(struct mmc_card *VAR_7, int VAR_8)
{
 int VAR_9;
 struct mmc_command VAR_10;

 FUNC_0(!VAR_7);
 FUNC_0(!VAR_7->host);

 FUNC_1(&VAR_10, 0, sizeof(struct mmc_command));

 VAR_10.opcode = VAR_4;
 VAR_10.flags = VAR_3 | VAR_1;

 switch (VAR_8) {
 case 129:
  VAR_10.arg = VAR_5;
  break;
 case 128:
  VAR_10.arg = VAR_6;
  break;
 default:
  return -VAR_0;
 }

 VAR_9 = FUNC_2(VAR_7->host, VAR_7, &VAR_10, VAR_2);
 if (VAR_9)
  return VAR_9;

 return 0;
}
