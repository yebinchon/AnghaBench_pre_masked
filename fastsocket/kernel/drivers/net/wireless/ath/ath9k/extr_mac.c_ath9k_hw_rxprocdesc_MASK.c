
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct ath_rx_status {int rs_datalen; int rs_rate; int rs_more; int rs_isaggr; int rs_moreaggr; int rs_status; void* rs_phyerr; int rs_flags; void* rs_antenna; void* rs_keyix; void* rs_rssi_ext2; void* rs_rssi_ext1; void* rs_rssi_ext0; void* rs_rssi_ctl2; void* rs_rssi_ctl1; void* rs_rssi_ctl0; void* rs_rssi; int rs_tstamp; } ;
struct ath_hw {int dummy; } ;
struct ath_desc {int dummy; } ;
struct TYPE_2__ {int rx; } ;
struct ar5416_desc {int ds_rxstatus8; int ds_rxstatus1; int ds_rxstatus4; int ds_rxstatus0; int ds_rxstatus3; int AR_RcvTimestamp; TYPE_1__ u; } ;


 struct ar5416_desc* FUNC_0 (struct ath_desc*) ;
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
 void* VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 void* VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 void* FUNC_1 (int,int ) ;

int FUNC_2(struct ath_hw *VAR_42, struct ath_desc *VAR_43,
   struct ath_rx_status *VAR_44)
{
 struct ar5416_desc VAR_45;
 struct ar5416_desc *VAR_46 = FUNC_0(VAR_43);
 u32 VAR_47;

 if ((VAR_46->ds_rxstatus8 & VAR_15) == 0)
  return -VAR_41;

 VAR_45.u.rx = VAR_46->u.rx;

 VAR_44->rs_status = 0;
 VAR_44->rs_flags = 0;

 VAR_44->rs_datalen = VAR_45.ds_rxstatus1 & VAR_2;
 VAR_44->rs_tstamp = VAR_45.AR_RcvTimestamp;

 if (VAR_45.ds_rxstatus8 & VAR_11) {
  VAR_44->rs_rssi = VAR_28;
  VAR_44->rs_rssi_ctl0 = VAR_28;
  VAR_44->rs_rssi_ctl1 = VAR_28;
  VAR_44->rs_rssi_ctl2 = VAR_28;
  VAR_44->rs_rssi_ext0 = VAR_28;
  VAR_44->rs_rssi_ext1 = VAR_28;
  VAR_44->rs_rssi_ext2 = VAR_28;
 } else {
  VAR_44->rs_rssi = FUNC_1(VAR_45.ds_rxstatus4, VAR_26);
  VAR_44->rs_rssi_ctl0 = FUNC_1(VAR_45.ds_rxstatus0,
      VAR_20);
  VAR_44->rs_rssi_ctl1 = FUNC_1(VAR_45.ds_rxstatus0,
      VAR_21);
  VAR_44->rs_rssi_ctl2 = FUNC_1(VAR_45.ds_rxstatus0,
      VAR_22);
  VAR_44->rs_rssi_ext0 = FUNC_1(VAR_45.ds_rxstatus4,
      VAR_23);
  VAR_44->rs_rssi_ext1 = FUNC_1(VAR_45.ds_rxstatus4,
      VAR_24);
  VAR_44->rs_rssi_ext2 = FUNC_1(VAR_45.ds_rxstatus4,
      VAR_25);
 }
 if (VAR_45.ds_rxstatus8 & VAR_17)
  VAR_44->rs_keyix = FUNC_1(VAR_45.ds_rxstatus8, VAR_6);
 else
  VAR_44->rs_keyix = VAR_35;

 VAR_44->rs_rate = FUNC_1(VAR_45.ds_rxstatus0, VAR_27);
 VAR_44->rs_more = (VAR_45.ds_rxstatus1 & VAR_18) ? 1 : 0;

 VAR_44->rs_isaggr = (VAR_45.ds_rxstatus8 & VAR_13) ? 1 : 0;
 VAR_44->rs_moreaggr =
  (VAR_45.ds_rxstatus8 & VAR_19) ? 1 : 0;
 VAR_44->rs_antenna = FUNC_1(VAR_45.ds_rxstatus3, VAR_14);
 VAR_44->rs_flags =
  (VAR_45.ds_rxstatus3 & VAR_5) ? VAR_40 : 0;
 VAR_44->rs_flags |=
  (VAR_45.ds_rxstatus3 & VAR_0) ? VAR_36 : 0;

 if (VAR_45.ds_rxstatus8 & VAR_12)
  VAR_44->rs_flags |= VAR_39;
 if (VAR_45.ds_rxstatus8 & VAR_11)
  VAR_44->rs_flags |= VAR_38;
 if (VAR_45.ds_rxstatus8 & VAR_3)
  VAR_44->rs_flags |= VAR_37;

 if ((VAR_45.ds_rxstatus8 & VAR_16) == 0) {






  if (VAR_45.ds_rxstatus8 & VAR_9) {
   VAR_44->rs_status |= VAR_34;
   VAR_47 = FUNC_1(VAR_45.ds_rxstatus8, VAR_10);
   VAR_44->rs_phyerr = VAR_47;
  } else if (VAR_45.ds_rxstatus8 & VAR_1)
   VAR_44->rs_status |= VAR_30;
  else if (VAR_45.ds_rxstatus8 & VAR_4)
   VAR_44->rs_status |= VAR_31;
  else if (VAR_45.ds_rxstatus8 & VAR_8)
   VAR_44->rs_status |= VAR_33;
 } else {
  if (VAR_45.ds_rxstatus8 &
      (VAR_1 | VAR_9 | VAR_4 | VAR_8))
   VAR_44->rs_status |= VAR_29;


  if (VAR_44->rs_rate >= 0x90)
   VAR_44->rs_status |= VAR_29;
 }

 if (VAR_45.ds_rxstatus8 & VAR_7)
  VAR_44->rs_status |= VAR_32;

 return 0;
}
