
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmio_mmc_host {struct mmc_command* cmd; struct mmc_data* data; } ;
struct mmc_data {int blocks; int flags; } ;
struct mmc_command {int opcode; int arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct tmio_mmc_host*,int ) ;
 int FUNC_1 (struct mmc_command*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct tmio_mmc_host*,int ,int) ;
 int FUNC_4 (struct tmio_mmc_host*,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct tmio_mmc_host *VAR_14, struct mmc_command *VAR_15)
{
 struct mmc_data *VAR_16 = VAR_14->data;
 int VAR_17 = VAR_15->opcode;


 if (VAR_15->opcode == 12 && !VAR_15->arg) {
  FUNC_3(VAR_14, VAR_2, 0x001);
  return 0;
 }

 switch (FUNC_1(VAR_15)) {
 case 132: VAR_17 |= VAR_6; break;
 case 131: VAR_17 |= VAR_7; break;
 case 130: VAR_17 |= VAR_8; break;
 case 129: VAR_17 |= VAR_9; break;
 case 128: VAR_17 |= VAR_10; break;
 default:
  FUNC_2("Unknown response type %d\n", FUNC_1(VAR_15));
  return -VAR_4;
 }

 VAR_14->cmd = VAR_15;






 if (VAR_16) {
  VAR_17 |= VAR_3;
  if (VAR_16->blocks > 1) {
   FUNC_3(VAR_14, VAR_2, 0x100);
   VAR_17 |= VAR_12;
  }
  if (VAR_16->flags & VAR_5)
   VAR_17 |= VAR_13;
 }

 FUNC_0(VAR_14, VAR_11);


 FUNC_4(VAR_14, VAR_0, VAR_15->arg);
 FUNC_3(VAR_14, VAR_1, VAR_17);

 return 0;
}
