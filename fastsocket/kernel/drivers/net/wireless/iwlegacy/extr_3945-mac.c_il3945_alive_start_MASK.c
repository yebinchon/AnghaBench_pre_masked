
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int filter_flags; } ;
struct TYPE_3__ {scalar_t__ is_valid; } ;
struct il_priv {int restart; int workqueue; int wait_command_queue; int status; TYPE_2__ staging; int active; int active_rate; int hw; TYPE_1__ card_alive; } ;
struct il3945_rxon_cmd {int filter_flags; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct il_priv*) ;
 scalar_t__ FUNC_4 (struct il_priv*) ;
 int FUNC_5 (struct il_priv*) ;
 scalar_t__ FUNC_6 (struct il_priv*) ;
 int FUNC_7 (struct il_priv*) ;
 scalar_t__ FUNC_8 (struct il_priv*) ;
 scalar_t__ FUNC_9 (struct il_priv*) ;
 int FUNC_10 (struct il_priv*,int) ;
 int FUNC_11 (struct il_priv*,int ) ;
 int FUNC_12 (struct il_priv*) ;
 int FUNC_13 (struct il_priv*) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static void
FUNC_18(struct il_priv *VAR_7)
{
 int VAR_8 = 0;
 u32 VAR_9;

 FUNC_0("Runtime Alive received.\n");

 if (VAR_7->card_alive.is_valid != VAR_6) {


  FUNC_0("Alive failed.\n");
  goto restart;
 }




 if (FUNC_6(VAR_7)) {


  FUNC_0("Bad runtime uCode load.\n");
  goto restart;
 }

 VAR_9 = FUNC_11(VAR_7, VAR_0);
 FUNC_0("RFKILL status: 0x%x\n", VAR_9);

 if (VAR_9 & 0x1) {
  FUNC_1(VAR_5, &VAR_7->status);


  while (FUNC_4(VAR_7) == 0) {
   VAR_8++;
   FUNC_16(10);
  }

  if (VAR_8)
   FUNC_0("Thermal calibration took %dus\n",
          VAR_8 * 10);
 } else
  FUNC_15(VAR_5, &VAR_7->status);


 FUNC_15(VAR_3, &VAR_7->status);


 FUNC_13(VAR_7);

 if (FUNC_9(VAR_7))
  return;

 FUNC_2(VAR_7->hw);

 VAR_7->active_rate = VAR_1;

 FUNC_10(VAR_7, 1);

 if (FUNC_8(VAR_7)) {
  struct il3945_rxon_cmd *VAR_10 =
      (struct il3945_rxon_cmd *)(&VAR_7->active);

  VAR_7->staging.filter_flags |= VAR_2;
  VAR_10->filter_flags &= ~VAR_2;
 } else {

  FUNC_7(VAR_7);
 }


 FUNC_12(VAR_7);

 FUNC_15(VAR_4, &VAR_7->status);


 FUNC_3(VAR_7);

 FUNC_5(VAR_7);

 FUNC_0("ALIVE processing complete.\n");
 FUNC_17(&VAR_7->wait_command_queue);

 return;

restart:
 FUNC_14(VAR_7->workqueue, &VAR_7->restart);
}
