
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int mci; } ;
struct ath_softc {int mci_work; int hw; TYPE_1__ btcoex; struct ath_hw* sc_ah; } ;
struct ath_mci_profile_status {int is_link; int conn_handle; int is_critical; } ;
struct ath_mci_profile_info {int start; int type; } ;
struct ath_hw {int dummy; } ;
struct ath_common {int dummy; } ;


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
 int FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,int,int) ;
 scalar_t__ FUNC_2 (struct ath_hw*,int ) ;
 struct ath_common* FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_common*,int ,char*,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ath_softc*,struct ath_mci_profile_info*) ;
 int FUNC_7 (struct ath_softc*,struct ath_mci_profile_status*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (struct ath_mci_profile_info*,int*,int) ;

__attribute__((used)) static void FUNC_10(struct ath_softc *VAR_13, u8 VAR_14, u8 *VAR_15)
{
 struct ath_hw *VAR_16 = VAR_13->sc_ah;
 struct ath_mci_profile_info VAR_17;
 struct ath_mci_profile_status VAR_18;
 struct ath_common *VAR_19 = FUNC_3(VAR_13->sc_ah);
 u8 VAR_20, VAR_21, VAR_22 = 0;
 u32 VAR_23;

 if (FUNC_2(VAR_16, VAR_10) &&
     FUNC_2(VAR_16, VAR_9)) {
  FUNC_4(VAR_19, VAR_0, "(MCI) Need to flush BT profiles\n");
  FUNC_5(&VAR_13->btcoex.mci);
  FUNC_2(VAR_16, VAR_11);
 }

 switch (VAR_14) {
 case 129:
  FUNC_2(VAR_16, VAR_12);
  break;
 case 128:
  VAR_20 = *(VAR_15 + VAR_1);
  VAR_21 = *(VAR_15 + VAR_2);
  FUNC_1(VAR_16, VAR_20, VAR_21);
  break;
 case 130:
  FUNC_0(VAR_16);
  break;
 case 132:
  FUNC_9(&VAR_17,
         (VAR_15 + VAR_3), 10);

  if ((VAR_17.type == VAR_8) ||
      (VAR_17.type >= VAR_7)) {
   FUNC_4(VAR_19, VAR_0,
    "Illegal profile type = %d, state = %d\n",
    VAR_17.type,
    VAR_17.start);
   break;
  }

  VAR_22 += FUNC_6(VAR_13, &VAR_17);
  break;
 case 131:
  VAR_18.is_link = *(VAR_15 +
        VAR_6);
  VAR_18.conn_handle = *(VAR_15 +
            VAR_4);
  VAR_18.is_critical = *(VAR_15 +
            VAR_5);

  VAR_23 = *((u32 *)(VAR_15 + 12));
  FUNC_4(VAR_19, VAR_0,
   "BT_Status_Update: is_link=%d, linkId=%d, state=%d, SEQ=%u\n",
   VAR_18.is_link, VAR_18.conn_handle,
   VAR_18.is_critical, VAR_23);

  VAR_22 += FUNC_7(VAR_13, &VAR_18);
  break;
 default:
  FUNC_4(VAR_19, VAR_0, "Unknown GPM COEX message = 0x%02x\n", VAR_14);
  break;
 }
 if (VAR_22)
  FUNC_8(VAR_13->hw, &VAR_13->mci_work);
}
