
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_rx_status {int rs_datalen; int rs_rssi; int rs_rssi_ctl0; int rs_rssi_ctl1; int rs_rssi_ctl2; int rs_rssi_ext0; int rs_rssi_ext1; int rs_rssi_ext2; int rs_keyix; int rs_rate; int rs_more; int rs_isaggr; int rs_moreaggr; int rs_antenna; int evm4; unsigned int rs_phyerr; int rs_status; int rs_flags; int evm3; int evm2; int evm1; int evm0; int rs_tstamp; } ;
struct ath_hw {int dummy; } ;
struct ar9003_rxs {int status11; int ds_info; int status2; int status5; int status1; int status4; int status10; int status9; int status8; int status7; int status6; int status3; } ;


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
 unsigned int VAR_31 ;
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
 int FUNC_0 (int,int ) ;

int FUNC_1(struct ath_hw *VAR_45, struct ath_rx_status *VAR_46,
     void *VAR_47)
{
 struct ar9003_rxs *VAR_48 = (struct ar9003_rxs *) VAR_47;
 unsigned int VAR_49;

 if ((VAR_48->status11 & VAR_17) == 0)
  return -VAR_43;

 if (FUNC_0(VAR_48->ds_info, VAR_6) != 0x168c)
  return -VAR_44;

 if ((VAR_48->ds_info & (VAR_30 | VAR_2)) != 0)
  return -VAR_43;

 VAR_46->rs_status = 0;
 VAR_46->rs_flags = 0;

 VAR_46->rs_datalen = VAR_48->status2 & VAR_3;
 VAR_46->rs_tstamp = VAR_48->status3;


 VAR_46->rs_rssi = FUNC_0(VAR_48->status5, VAR_28);
 VAR_46->rs_rssi_ctl0 = FUNC_0(VAR_48->status1, VAR_22);
 VAR_46->rs_rssi_ctl1 = FUNC_0(VAR_48->status1, VAR_23);
 VAR_46->rs_rssi_ctl2 = FUNC_0(VAR_48->status1, VAR_24);
 VAR_46->rs_rssi_ext0 = FUNC_0(VAR_48->status5, VAR_25);
 VAR_46->rs_rssi_ext1 = FUNC_0(VAR_48->status5, VAR_26);
 VAR_46->rs_rssi_ext2 = FUNC_0(VAR_48->status5, VAR_27);

 if (VAR_48->status11 & VAR_19)
  VAR_46->rs_keyix = FUNC_0(VAR_48->status11, VAR_8);
 else
  VAR_46->rs_keyix = VAR_37;

 VAR_46->rs_rate = FUNC_0(VAR_48->status1, VAR_29);
 VAR_46->rs_more = (VAR_48->status2 & VAR_20) ? 1 : 0;

 VAR_46->rs_isaggr = (VAR_48->status11 & VAR_15) ? 1 : 0;
 VAR_46->rs_moreaggr = (VAR_48->status11 & VAR_21) ? 1 : 0;
 VAR_46->rs_antenna = (FUNC_0(VAR_48->status4, VAR_16) & 0x7);
 VAR_46->rs_flags = (VAR_48->status4 & VAR_7) ? VAR_42 : 0;
 VAR_46->rs_flags |= (VAR_48->status4 & VAR_0) ? VAR_38 : 0;

 VAR_46->evm0 = VAR_48->status6;
 VAR_46->evm1 = VAR_48->status7;
 VAR_46->evm2 = VAR_48->status8;
 VAR_46->evm3 = VAR_48->status9;
 VAR_46->evm4 = (VAR_48->status10 & 0xffff);

 if (VAR_48->status11 & VAR_14)
  VAR_46->rs_flags |= VAR_41;

 if (VAR_48->status11 & VAR_13)
  VAR_46->rs_flags |= VAR_40;

 if (VAR_48->status11 & VAR_4)
  VAR_46->rs_flags |= VAR_39;

 if ((VAR_48->status11 & VAR_18) == 0) {
  if (VAR_48->status11 & VAR_1)
   VAR_46->rs_status |= VAR_32;
  else if (VAR_48->status11 & VAR_5)
   VAR_46->rs_status |= VAR_33;
  else if (VAR_48->status11 & VAR_10)
   VAR_46->rs_status |= VAR_35;
  if (VAR_48->status11 & VAR_11) {
   VAR_49 = FUNC_0(VAR_48->status11, VAR_12);
   if ((VAR_49 == VAR_31) &&
       (VAR_48->status11 & VAR_13)) {
    VAR_46->rs_phyerr = 0;
   } else {
    VAR_46->rs_status |= VAR_36;
    VAR_46->rs_phyerr = VAR_49;
   }
  }
 }

 if (VAR_48->status11 & VAR_9)
  VAR_46->rs_status |= VAR_34;

 return 0;
}
