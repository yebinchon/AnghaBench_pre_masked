
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_host {int dummy; } ;
struct mmc_command {int arg; int flags; int* resp; int opcode; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct mmc_command*,int ,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*,int *,struct mmc_command*,int ) ;

int FUNC_5(struct mmc_host *VAR_8, u32 VAR_9, u32 *VAR_10)
{
 struct mmc_command VAR_11;
 int VAR_12, VAR_13 = 0;

 FUNC_0(!VAR_8);

 FUNC_1(&VAR_11, 0, sizeof(struct mmc_command));

 VAR_11.opcode = VAR_7;
 if (FUNC_3(VAR_8))
  VAR_11.arg = VAR_9 & (1 << 30);
 else
  VAR_11.arg = VAR_9;
 VAR_11.flags = VAR_5 | VAR_4 | VAR_2;

 for (VAR_12 = 100; VAR_12; VAR_12--) {
  VAR_13 = FUNC_4(VAR_8, ((void*)0), &VAR_11, VAR_3);
  if (VAR_13)
   break;


  if (VAR_9 == 0)
   break;


  if (FUNC_3(VAR_8)) {
   if (!(VAR_11.resp[0] & VAR_6))
    break;
  } else {
   if (VAR_11.resp[0] & VAR_1)
    break;
  }

  VAR_13 = -VAR_0;

  FUNC_2(10);
 }

 if (VAR_10 && !FUNC_3(VAR_8))
  *VAR_10 = VAR_11.resp[0];

 return VAR_13;
}
