
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {int fc; scalar_t__ mac_type; int report_tx_early; int original_fc; scalar_t__ media_type; int fc_pause_time; int fc_low_water; int fc_high_water; scalar_t__ fc_send_xon; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int,int*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,int) ;

s32 FUNC_5(struct e1000_hw *VAR_25)
{
 u32 VAR_26;
 s32 VAR_27;
 u16 VAR_28;

 FUNC_3("e1000_setup_link");
 if (VAR_25->fc == VAR_3) {
  VAR_27 = FUNC_0(VAR_25, VAR_8,
         1, &VAR_28);
  if (VAR_27) {
   FUNC_3("EEPROM Read Error\n");
   return -VAR_1;
  }
  if ((VAR_28 & VAR_10) == 0)
   VAR_25->fc = VAR_5;
  else if ((VAR_28 & VAR_10) ==
    VAR_9)
   VAR_25->fc = VAR_7;
  else
   VAR_25->fc = VAR_4;
 }





 if (VAR_25->mac_type == VAR_22)
  VAR_25->fc &= (~VAR_7);

 if ((VAR_25->mac_type < VAR_23) && (VAR_25->report_tx_early == 1))
  VAR_25->fc &= (~VAR_6);

 VAR_25->original_fc = VAR_25->fc;

 FUNC_3("After fix-ups FlowControl is now = %x\n", VAR_25->fc);
 if (VAR_25->mac_type == VAR_23) {
  VAR_27 = FUNC_0(VAR_25, VAR_8,
         1, &VAR_28);
  if (VAR_27) {
   FUNC_3("EEPROM Read Error\n");
   return -VAR_1;
  }
  VAR_26 = ((VAR_28 & VAR_11) <<
       VAR_21);
  FUNC_4(VAR_0, VAR_26);
 }


 VAR_27 = (VAR_25->media_type == VAR_24) ?
     FUNC_1(VAR_25) : FUNC_2(VAR_25);






 FUNC_3("Initializing the Flow Control address, type and timer regs\n");

 FUNC_4(VAR_16, VAR_20);
 FUNC_4(VAR_12, VAR_18);
 FUNC_4(VAR_13, VAR_19);

 FUNC_4(VAR_17, VAR_25->fc_pause_time);







 if (!(VAR_25->fc & VAR_7)) {
  FUNC_4(VAR_15, 0);
  FUNC_4(VAR_14, 0);
 } else {



  if (VAR_25->fc_send_xon) {
   FUNC_4(VAR_15, (VAR_25->fc_low_water | VAR_2));
   FUNC_4(VAR_14, VAR_25->fc_high_water);
  } else {
   FUNC_4(VAR_15, VAR_25->fc_low_water);
   FUNC_4(VAR_14, VAR_25->fc_high_water);
  }
 }
 return VAR_27;
}
