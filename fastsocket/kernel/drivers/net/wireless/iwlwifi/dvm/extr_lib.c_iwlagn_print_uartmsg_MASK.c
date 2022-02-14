
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_priv {int dummy; } ;
struct iwl_bt_uart_msg {int frame1; int frame2; int frame3; int frame4; int frame5; int frame6; int frame7; } ;


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
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int FUNC_0 (struct iwl_priv*,char*,int,...) ;

__attribute__((used)) static void FUNC_1(struct iwl_priv *VAR_46,
    struct iwl_bt_uart_msg *VAR_47)
{
 FUNC_0(VAR_46, "Message Type = 0x%X, SSN = 0x%X, "
   "Update Req = 0x%X\n",
  (VAR_0 & VAR_47->frame1) >>
   VAR_1,
  (VAR_2 & VAR_47->frame1) >>
   VAR_3,
  (VAR_4 & VAR_47->frame1) >>
   VAR_5);

 FUNC_0(VAR_46, "Open connections = 0x%X, Traffic load = 0x%X, "
   "Chl_SeqN = 0x%X, In band = 0x%X\n",
  (VAR_10 & VAR_47->frame2) >>
   VAR_11,
  (VAR_12 & VAR_47->frame2) >>
   VAR_13,
  (VAR_6 & VAR_47->frame2) >>
   VAR_7,
  (VAR_8 & VAR_47->frame2) >>
   VAR_9);

 FUNC_0(VAR_46, "SCO/eSCO = 0x%X, Sniff = 0x%X, A2DP = 0x%X, "
   "ACL = 0x%X, Master = 0x%X, OBEX = 0x%X\n",
  (VAR_22 & VAR_47->frame3) >>
   VAR_23,
  (VAR_24 & VAR_47->frame3) >>
   VAR_25,
  (VAR_14 & VAR_47->frame3) >>
   VAR_15,
  (VAR_16 & VAR_47->frame3) >>
   VAR_17,
  (VAR_18 & VAR_47->frame3) >>
   VAR_19,
  (VAR_20 & VAR_47->frame3) >>
   VAR_21);

 FUNC_0(VAR_46, "Idle duration = 0x%X\n",
  (VAR_26 & VAR_47->frame4) >>
   VAR_27);

 FUNC_0(VAR_46, "Tx Activity = 0x%X, Rx Activity = 0x%X, "
   "eSCO Retransmissions = 0x%X\n",
  (VAR_32 & VAR_47->frame5) >>
   VAR_33,
  (VAR_30 & VAR_47->frame5) >>
   VAR_31,
  (VAR_28 & VAR_47->frame5) >>
   VAR_29);

 FUNC_0(VAR_46, "Sniff Interval = 0x%X, Discoverable = 0x%X\n",
  (VAR_36 & VAR_47->frame6) >>
   VAR_37,
  (VAR_34 & VAR_47->frame6) >>
   VAR_35);

 FUNC_0(VAR_46, "Sniff Activity = 0x%X, Page = "
   "0x%X, Inquiry = 0x%X, Connectable = 0x%X\n",
  (VAR_44 & VAR_47->frame7) >>
   VAR_45,
  (VAR_42 & VAR_47->frame7) >>
   VAR_43,
  (VAR_40 & VAR_47->frame7) >>
   VAR_41,
  (VAR_38 & VAR_47->frame7) >>
   VAR_39);
}
