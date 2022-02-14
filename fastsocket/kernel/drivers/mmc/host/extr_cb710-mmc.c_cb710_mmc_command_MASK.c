
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mmc_host {int dummy; } ;
struct mmc_data {int error; int blksz; int blocks; } ;
struct mmc_command {int flags; scalar_t__ error; int arg; struct mmc_data* data; } ;
struct cb710_slot {int dummy; } ;
struct cb710_mmc_reader {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cb710_mmc_reader*,struct mmc_command*) ;
 int FUNC_1 (struct mmc_data*) ;
 int FUNC_2 (struct cb710_slot*) ;
 int FUNC_3 (struct cb710_slot*,int ,int ) ;
 struct cb710_slot* FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (struct cb710_slot*,struct mmc_data*) ;
 int FUNC_6 (struct cb710_slot*,int ,int,int ) ;
 int FUNC_7 (struct cb710_slot*,struct mmc_command*) ;
 int FUNC_8 (struct cb710_slot*) ;
 scalar_t__ FUNC_9 (struct cb710_slot*,int ) ;
 int FUNC_10 (struct cb710_slot*,int) ;
 int FUNC_11 (struct cb710_slot*,int ,int ) ;
 int FUNC_12 (struct cb710_slot*,int ,int ) ;
 int FUNC_13 (int ,char*,int ) ;
 struct cb710_mmc_reader* FUNC_14 (struct mmc_host*) ;

__attribute__((used)) static int FUNC_15(struct mmc_host *VAR_8, struct mmc_command *VAR_9)
{
 struct cb710_slot *VAR_10 = FUNC_4(VAR_8);
 struct cb710_mmc_reader *VAR_11 = FUNC_14(VAR_8);
 struct mmc_data *VAR_12 = VAR_9->data;

 u16 VAR_13 = FUNC_0(VAR_11, VAR_9);
 FUNC_13(FUNC_8(VAR_10), "cmd request: 0x%04X\n", VAR_13);

 if (VAR_12) {
  if (!FUNC_1(VAR_12)) {
   VAR_12->error = -VAR_6;
   return -1;
  }
  FUNC_3(VAR_10, VAR_12->blocks, VAR_12->blksz);
 }

 FUNC_10(VAR_10, VAR_5|VAR_4);
 FUNC_11(VAR_10, VAR_1, VAR_13);
 FUNC_10(VAR_10, VAR_5);
 FUNC_12(VAR_10, VAR_0, VAR_9->arg);
 FUNC_2(VAR_10);
 FUNC_10(VAR_10, VAR_5);
 FUNC_6(VAR_10, VAR_2, 0x01, 0);

 VAR_9->error = FUNC_9(VAR_10, VAR_3);
 if (VAR_9->error)
  return -1;

 if (VAR_9->flags & VAR_7) {
  FUNC_7(VAR_10, VAR_9);
  if (VAR_9->error)
   return -1;
 }

 if (VAR_12)
  VAR_12->error = FUNC_5(VAR_10, VAR_12);
 return 0;
}
