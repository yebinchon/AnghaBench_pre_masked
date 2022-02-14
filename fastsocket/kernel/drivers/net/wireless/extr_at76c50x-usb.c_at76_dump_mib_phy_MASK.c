
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mib_phy {int current_reg_domain; int phy_type; int current_cca_mode; int channel_id; int * operation_rate_set; int cca_mode_supported; int mpdu_max_length; int plcp_header_length; int preamble_length; int sifs_time; int slot_time; int ed_threshold; } ;
struct at76_priv {TYPE_1__* hw; int udev; } ;
struct TYPE_2__ {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,struct mib_phy*,int) ;
 int FUNC_2 (struct mib_phy*) ;
 struct mib_phy* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct at76_priv *VAR_3)
{
 int VAR_4;
 struct mib_phy *VAR_5 = FUNC_3(sizeof(struct mib_phy), VAR_1);

 if (!VAR_5)
  return;

 VAR_4 = FUNC_1(VAR_3->udev, VAR_2, VAR_5, sizeof(struct mib_phy));
 if (VAR_4 < 0) {
  FUNC_6(VAR_3->hw->wiphy,
     "at76_get_mib (PHY) failed: %d\n", VAR_4);
  goto exit;
 }

 FUNC_0(VAR_0, "%s: MIB PHY: ed_threshold %d slot_time %d "
   "sifs_time %d preamble_length %d plcp_header_length %d "
   "mpdu_max_length %d cca_mode_supported %d operation_rate_set "
   "0x%x 0x%x 0x%x 0x%x channel_id %d current_cca_mode %d "
   "phy_type %d current_reg_domain %d",
   FUNC_7(VAR_3->hw->wiphy), FUNC_5(VAR_5->ed_threshold),
   FUNC_4(VAR_5->slot_time), FUNC_4(VAR_5->sifs_time),
   FUNC_4(VAR_5->preamble_length),
   FUNC_4(VAR_5->plcp_header_length),
   FUNC_4(VAR_5->mpdu_max_length),
   FUNC_4(VAR_5->cca_mode_supported), VAR_5->operation_rate_set[0],
   VAR_5->operation_rate_set[1], VAR_5->operation_rate_set[2],
   VAR_5->operation_rate_set[3], VAR_5->channel_id, VAR_5->current_cca_mode,
   VAR_5->phy_type, VAR_5->current_reg_domain);
exit:
 FUNC_2(VAR_5);
}
