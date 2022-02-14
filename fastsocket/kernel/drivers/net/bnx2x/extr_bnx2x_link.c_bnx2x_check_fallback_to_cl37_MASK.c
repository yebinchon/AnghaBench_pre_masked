
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int ) ;
 int FUNC_2 (int ,char*,...) ;
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
 int VAR_14 ;
 int FUNC_3 (struct bnx2x_phy*,struct link_params*,int ) ;

__attribute__((used)) static void FUNC_4(struct bnx2x_phy *VAR_15,
      struct link_params *VAR_16)
{
 struct bnx2x *VAR_17 = VAR_16->bp;
 u16 VAR_18, VAR_19, VAR_20;
 FUNC_2(VAR_14, "bnx2x_check_fallback_to_cl37\n");

 FUNC_0(VAR_17, VAR_15,
     VAR_8,
     VAR_12,
     &VAR_18);
 if ((VAR_18 & VAR_13) !=
     (VAR_13)) {
  FUNC_2(VAR_14, "Signal is not detected. Restoring CL73."
        "rx_status(0x80b0) = 0x%x\n", VAR_18);
  FUNC_1(VAR_17, VAR_15,
      VAR_5,
      VAR_0,
      VAR_1);
  return;
 }

 FUNC_0(VAR_17, VAR_15,
     VAR_6,
     VAR_2,
     &VAR_19);
 if ((VAR_19 &
      (VAR_4 |
       VAR_3)) !=
     (VAR_4 |
       VAR_3)) {
  FUNC_2(VAR_14, "CL73 state-machine is not stable. "
        "ustat_val(0x8371) = 0x%x\n", VAR_19);
  return;
 }



 FUNC_0(VAR_17, VAR_15,
     VAR_7,
     VAR_9,
     &VAR_20);
 if ((VAR_20 &
      (VAR_11 |
      VAR_10)) !=
     (VAR_11 |
       VAR_10)) {
  FUNC_2(VAR_14, "No CL37 FSM were received. "
        "misc_rx_status(0x8330) = 0x%x\n",
    VAR_20);
  return;
 }







 FUNC_1(VAR_17, VAR_15,
     VAR_5,
     VAR_0,
     0);

 FUNC_3(VAR_15, VAR_16, 0);
 FUNC_2(VAR_14, "Disabling CL73, and restarting CL37 autoneg\n");
}
