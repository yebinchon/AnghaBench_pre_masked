
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint ;
typedef scalar_t__ u8 ;
typedef int u32 ;
struct tx_power {int rf_cores; int flags; int* est_Pout; int* est_Pout_act; scalar_t__ est_Pout_cck; int * tx_power_max_rate_ind; int * tx_power_max; int * target; scalar_t__* board_limit; int * user_limit; } ;
struct brcms_phy_pub {int dummy; } ;
struct brcms_phy {scalar_t__ nphy_txpwrctrl; scalar_t__ radiopwr_override; int tx_power_max_rate_ind; int tx_power_max; TYPE_1__* sh; scalar_t__ hwpwrctrl; int * tx_power_target; int * tx_user_target; } ;
typedef int s8 ;
struct TYPE_2__ {scalar_t__ up; int physhim; } ;


 scalar_t__ FUNC_0 (struct brcms_phy*) ;
 scalar_t__ FUNC_1 (struct brcms_phy*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct brcms_phy*,int *,int *) ;
 scalar_t__ FUNC_5 (struct brcms_phy*) ;
 int FUNC_6 (struct brcms_phy*) ;
 int FUNC_7 (struct brcms_phy_pub*,size_t,scalar_t__*,scalar_t__*,size_t) ;
 int FUNC_8 (struct brcms_phy_pub*) ;
 int FUNC_9 (struct brcms_phy_pub*) ;

void
FUNC_10(struct brcms_phy_pub *VAR_9, struct tx_power *VAR_10,
       uint VAR_11)
{
 struct brcms_phy *VAR_12 = (struct brcms_phy *) VAR_9;
 uint VAR_13, VAR_14;
 u8 VAR_15, VAR_16;





 if (FUNC_1(VAR_12)) {
  VAR_10->rf_cores = 2;
  VAR_10->flags |= (VAR_7);
  if (VAR_12->nphy_txpwrctrl == VAR_0)
   VAR_10->flags |=
    (VAR_5 | VAR_6);
 } else if (FUNC_0(VAR_12)) {
  VAR_10->rf_cores = 1;
  VAR_10->flags |= (VAR_8);
  if (VAR_12->radiopwr_override == VAR_1)
   VAR_10->flags |= VAR_5;
  if (VAR_12->hwpwrctrl)
   VAR_10->flags |= VAR_6;
 }

 VAR_14 = ((FUNC_1(VAR_12)) ? (VAR_4) :
       ((FUNC_0(VAR_12)) ?
        (VAR_3 + 1) : (VAR_2 + 1)));

 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
  VAR_10->user_limit[VAR_13] = VAR_12->tx_user_target[VAR_13];
  FUNC_7(VAR_9, VAR_11, &VAR_15, &VAR_16,
       VAR_13);
  VAR_10->board_limit[VAR_13] = (u8) VAR_16;
  VAR_10->target[VAR_13] = VAR_12->tx_power_target[VAR_13];
 }

 if (FUNC_1(VAR_12)) {
  u32 VAR_17;

  FUNC_3(VAR_12->sh->physhim);
  FUNC_8((struct brcms_phy_pub *) VAR_12);
  VAR_17 = FUNC_6(VAR_12);
  FUNC_9((struct brcms_phy_pub *) VAR_12);
  FUNC_2(VAR_12->sh->physhim);

  VAR_10->est_Pout[0] = (VAR_17 >> 8) & 0xff;
  VAR_10->est_Pout[1] = VAR_17 & 0xff;

  VAR_10->est_Pout_act[0] = VAR_17 >> 24;
  VAR_10->est_Pout_act[1] = (VAR_17 >> 16) & 0xff;

  if (VAR_10->est_Pout[0] == 0x80)
   VAR_10->est_Pout[0] = 0;
  if (VAR_10->est_Pout[1] == 0x80)
   VAR_10->est_Pout[1] = 0;

  if (VAR_10->est_Pout_act[0] == 0x80)
   VAR_10->est_Pout_act[0] = 0;
  if (VAR_10->est_Pout_act[1] == 0x80)
   VAR_10->est_Pout_act[1] = 0;

  VAR_10->est_Pout_cck = 0;

  VAR_10->tx_power_max[0] = VAR_12->tx_power_max;
  VAR_10->tx_power_max[1] = VAR_12->tx_power_max;

  VAR_10->tx_power_max_rate_ind[0] = VAR_12->tx_power_max_rate_ind;
  VAR_10->tx_power_max_rate_ind[1] = VAR_12->tx_power_max_rate_ind;
 } else if (VAR_12->hwpwrctrl && VAR_12->sh->up) {

  FUNC_8(VAR_9);
  if (FUNC_0(VAR_12)) {

   VAR_10->tx_power_max[0] = VAR_12->tx_power_max;
   VAR_10->tx_power_max[1] = VAR_12->tx_power_max;

   VAR_10->tx_power_max_rate_ind[0] =
    VAR_12->tx_power_max_rate_ind;
   VAR_10->tx_power_max_rate_ind[1] =
    VAR_12->tx_power_max_rate_ind;

   if (FUNC_5(VAR_12))
    VAR_10->flags |=
     (VAR_6 |
      VAR_5);
   else
    VAR_10->flags &=
     ~(VAR_6 |
       VAR_5);

   FUNC_4(VAR_12, (s8 *) &VAR_10->est_Pout[0],
         (s8 *) &VAR_10->est_Pout_cck);
  }
  FUNC_9(VAR_9);
 }
}
