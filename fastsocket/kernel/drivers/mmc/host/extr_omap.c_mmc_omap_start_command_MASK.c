
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mmc_omap_host {int cmd_abort_timer; TYPE_2__* data; TYPE_1__* current_slot; int mmc; struct mmc_command* cmd; } ;
struct mmc_command {int opcode; int flags; int arg; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {scalar_t__ bus_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;





 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (struct mmc_omap_host*,int ,int) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ VAR_25 ;
 scalar_t__ FUNC_2 (struct mmc_command*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mmc_command*) ;
 int FUNC_5 (int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(struct mmc_omap_host *VAR_26, struct mmc_command *VAR_27)
{
 u32 VAR_28;
 u32 VAR_29;
 u32 VAR_30;

 VAR_26->cmd = VAR_27;

 VAR_29 = 0;
 VAR_30 = 0;


 switch (FUNC_4(VAR_27)) {
 case 132:
  break;
 case 131:
 case 130:

  VAR_29 = 1;
  break;
 case 129:
  VAR_29 = 2;
  break;
 case 128:
  VAR_29 = 3;
  break;
 default:
  FUNC_1(FUNC_3(VAR_26->mmc), "Invalid response type: %04x\n", FUNC_4(VAR_27));
  break;
 }

 if (FUNC_2(VAR_27) == VAR_7) {
  VAR_30 = VAR_13;
 } else if (FUNC_2(VAR_27) == VAR_8) {
  VAR_30 = VAR_14;
 } else if (FUNC_2(VAR_27) == VAR_9) {
  VAR_30 = VAR_15;
 } else {
  VAR_30 = VAR_12;
 }

 VAR_28 = VAR_27->opcode | (VAR_29 << 8) | (VAR_30 << 12);

 if (VAR_26->current_slot->bus_mode == VAR_6)
  VAR_28 |= 1 << 6;

 if (VAR_27->flags & VAR_11)
  VAR_28 |= 1 << 11;

 if (VAR_26->data && !(VAR_26->data->flags & VAR_10))
  VAR_28 |= 1 << 15;

 FUNC_5(&VAR_26->cmd_abort_timer, VAR_25 + VAR_4/2);

 FUNC_0(VAR_26, VAR_3, 200);
 FUNC_0(VAR_26, VAR_1, VAR_27->arg & 0xffff);
 FUNC_0(VAR_26, VAR_0, VAR_27->arg >> 16);
 FUNC_0(VAR_26, VAR_5,
         VAR_16 | VAR_17 |
         VAR_19 | VAR_20 |
         VAR_21 | VAR_22 |
         VAR_23 | VAR_18 |
         VAR_24);
 FUNC_0(VAR_26, VAR_2, VAR_28);
}
