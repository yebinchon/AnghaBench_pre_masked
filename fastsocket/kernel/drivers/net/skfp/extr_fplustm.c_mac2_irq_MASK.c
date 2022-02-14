
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_short ;
struct TYPE_10__ {int err_tkerr; int err_tkiss; int err_sifg_det; int err_phinv; int err_clm_stat; int err_bec_stat; } ;
struct TYPE_13__ {int s2l; int s2u; TYPE_3__ err_stats; } ;
struct TYPE_8__ {int mac_r_restart_counter; } ;
struct TYPE_14__ {TYPE_6__ fp; TYPE_1__ mac_ct; int mac_ring_is_up; } ;
struct TYPE_12__ {TYPE_4__* m; } ;
struct TYPE_9__ {int dup_addr_test; } ;
struct s_smc {TYPE_7__ hw; TYPE_5__ mib; TYPE_2__ r; } ;
struct TYPE_11__ {int fddiMACFrame_Ct; int fddiMACError_Ct; int fddiMACLost_Ct; int fddiMACRingOp_Ct; int fddiMACTvxExpired_Ct; int fddiMACNotCopied_Ct; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
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
 size_t VAR_27 ;
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
 int FUNC_2 (struct s_smc*,int ,int ) ;
 int VAR_39 ;
 int FUNC_3 (struct s_smc*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct s_smc*,int ,int ) ;
 int FUNC_6 (struct s_smc*,int) ;

void FUNC_7(struct s_smc *VAR_40, u_short VAR_41, u_short VAR_42)
{
 u_short VAR_43 ;
 u_short VAR_44 ;




 if (VAR_41 & (VAR_4|VAR_9|VAR_3|VAR_16)) {
  FUNC_5(VAR_40,VAR_1,VAR_35) ;
 }
 else if (VAR_42 & (VAR_23)) {
  FUNC_5(VAR_40,VAR_1,VAR_35) ;
 }




 VAR_43 = VAR_40->hw.fp.s2l ^ VAR_42 ;
 VAR_44 = VAR_40->hw.fp.s2u ^ VAR_41 ;

 if ((VAR_43 & VAR_20) ||
  (!VAR_40->hw.mac_ring_is_up && ((VAR_42 & VAR_20)))) {
  if (VAR_42 & VAR_20) {
   FUNC_3(VAR_40,1) ;
   FUNC_5(VAR_40,VAR_1,VAR_33) ;
   VAR_40->mib.m[VAR_27].fddiMACRingOp_Ct++ ;
  }
  else {
   FUNC_3(VAR_40,0) ;
   FUNC_5(VAR_40,VAR_1,VAR_32) ;
  }
  goto mac2_end ;
 }
 if (VAR_42 & VAR_12) {
  VAR_40->mib.m[VAR_27].fddiMACNotCopied_Ct++ ;
 }
 if (VAR_41 & (VAR_19 |
   VAR_18)) {
  VAR_40->hw.mac_ct.mac_r_restart_counter++ ;

  FUNC_6(VAR_40,1) ;

 }
 if (VAR_41 & VAR_16)
  FUNC_5(VAR_40,VAR_1,VAR_31) ;
 if (VAR_41 & VAR_14)
  FUNC_5(VAR_40,VAR_1,VAR_29) ;
 if (VAR_44 & VAR_41 & VAR_10) {
  FUNC_0(2,"RMT : lower claim received\n",0,0) ;
 }
 if ((VAR_41 & VAR_15) && !(VAR_42 & VAR_5)) {




  FUNC_5(VAR_40,VAR_1,VAR_30) ;
 }
 if (VAR_42 & VAR_5) {







  FUNC_5(VAR_40,VAR_1,VAR_36) ;
 }
 if (VAR_44 & VAR_41 & VAR_9) {
  FUNC_0(2,"RMT : higher claim received\n",0,0) ;
 }
 if ( (VAR_42 & VAR_24) ||
      (VAR_42 & VAR_25) )
  FUNC_5(VAR_40,VAR_1,VAR_34) ;
 if (VAR_42 & VAR_13) {





  VAR_40->r.dup_addr_test = VAR_0 ;
  FUNC_5(VAR_40,VAR_1,VAR_28) ;
 }
 if (VAR_41 & VAR_3)
  VAR_40->hw.fp.err_stats.err_bec_stat++ ;
 if (VAR_41 & VAR_4)
  VAR_40->hw.fp.err_stats.err_clm_stat++ ;
 if (VAR_42 & VAR_26)
  VAR_40->mib.m[VAR_27].fddiMACTvxExpired_Ct++ ;
 if ((VAR_41 & (VAR_3|VAR_4))) {
  if (!(VAR_43 & VAR_20) && (VAR_40->hw.fp.s2l & VAR_20)) {
   FUNC_3(VAR_40,0) ;
   FUNC_5(VAR_40,VAR_1,VAR_32) ;

   FUNC_3(VAR_40,1) ;
   FUNC_5(VAR_40,VAR_1,VAR_33) ;
   VAR_40->mib.m[VAR_27].fddiMACRingOp_Ct++ ;
  }
 }
 if (VAR_42 & VAR_17)
  VAR_40->hw.fp.err_stats.err_phinv++ ;
 if (VAR_42 & VAR_21)
  VAR_40->hw.fp.err_stats.err_sifg_det++ ;
 if (VAR_42 & VAR_23)
  VAR_40->hw.fp.err_stats.err_tkiss++ ;
 if (VAR_42 & VAR_22)
  VAR_40->hw.fp.err_stats.err_tkerr++ ;
 if (VAR_42 & VAR_8)
  VAR_40->mib.m[VAR_27].fddiMACFrame_Ct += 0x10000L ;
 if (VAR_42 & VAR_6)
  VAR_40->mib.m[VAR_27].fddiMACError_Ct += 0x10000L ;
 if (VAR_42 & VAR_11)
  VAR_40->mib.m[VAR_27].fddiMACLost_Ct += 0x10000L ;
 if (VAR_41 & VAR_7) {
  FUNC_2(VAR_40,VAR_37, VAR_38) ;
 }
mac2_end:

 VAR_40->hw.fp.s2l = VAR_42 ;
 VAR_40->hw.fp.s2u = VAR_41 ;
 FUNC_4(FUNC_1(VAR_2),~VAR_39) ;
}
