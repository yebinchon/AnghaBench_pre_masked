
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {char* DisconnectFlag; scalar_t__ path_test; int trace_prop; } ;
struct TYPE_8__ {char* fddiSMTECMState; } ;
struct TYPE_6__ {int numphys; } ;
struct s_smc {TYPE_4__ e; TYPE_3__ mib; TYPE_1__ s; struct s_phy* y; } ;
struct s_plc {int ebuf_cont; scalar_t__ p_state; int p_bits; int p_start; int parity_err; int np_err; int b_hls; int b_ils; int b_qls; int b_tne; int b_tpc; int b_pcs; int tpc_exp; int mini_ctr; int vsym_ctr; int phyinv; int ebuf_err; int soft_err; } ;
struct TYPE_7__ {int lem_errors; scalar_t__ lem_on; } ;
struct s_phy {int* r_val; int phy_name; scalar_t__ tr_flag; TYPE_5__* mib; int curr_ls; TYPE_2__ lem; struct s_plc plc; } ;
struct TYPE_10__ {char* fddiPORTPCMState; int fddiPORTLem_Ct; int fddiPORTEBError_Ct; } ;


 int FUNC_0 (int,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;






 int VAR_18 ;
 unsigned int VAR_19 ;
 int VAR_20 ;




 unsigned int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 unsigned int VAR_30 ;
 unsigned int VAR_31 ;
 unsigned int VAR_32 ;
 unsigned int VAR_33 ;
 int VAR_34 ;
 unsigned int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 unsigned int VAR_38 ;
 unsigned int VAR_39 ;
 unsigned int VAR_40 ;
 unsigned int VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int FUNC_4 (struct s_smc*,int ,int ) ;
 scalar_t__ VAR_47 ;
 int FUNC_5 (struct s_smc*) ;
 int FUNC_6 (struct s_smc*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;
 unsigned int VAR_48 ;
 int FUNC_9 (struct s_smc*,scalar_t__,int ) ;

void FUNC_10(struct s_smc *VAR_49, int VAR_50, unsigned int VAR_51)

{
 struct s_phy *VAR_52 = &VAR_49->y[VAR_50] ;
 struct s_plc *VAR_53 = &VAR_52->plc ;
 int VAR_54 ;



 int VAR_55 ;

 if (VAR_50 >= VAR_49->s.numphys) {
  VAR_53->soft_err++ ;
  return ;
 }
 if (VAR_51 & VAR_19) {



  if (!VAR_53->ebuf_cont && VAR_52->mib->fddiPORTPCMState == VAR_7){






   VAR_52->mib->fddiPORTEBError_Ct ++ ;

  }

  VAR_53->ebuf_err++ ;
  if (VAR_53->ebuf_cont <= 1000) {




   VAR_53->ebuf_cont++ ;
  }
 } else {

  VAR_53->ebuf_cont = 0 ;
 }
 if (VAR_51 & VAR_33) {
  VAR_53->phyinv++ ;
 }
 if (VAR_51 & VAR_41) {
  VAR_53->vsym_ctr++ ;
 }
 if (VAR_51 & VAR_27) {
  VAR_53->mini_ctr++ ;
 }
 if (VAR_51 & VAR_21) {
  int VAR_56 ;




  VAR_56 = FUNC_7(FUNC_3(VAR_50,VAR_22)) ;
  VAR_55 = FUNC_7(FUNC_3(VAR_50,VAR_23)) ;

  if (VAR_55 < VAR_56) {

   VAR_55 += 256 ;
  }

  if (VAR_52->lem.lem_on) {



   VAR_52->lem.lem_errors += VAR_55 ;
   VAR_52->mib->fddiPORTLem_Ct += VAR_55 ;
  }
 }
 if (VAR_51 & VAR_39) {
  if (VAR_53->p_state == VAR_42) {



   ;
  }
  VAR_53->tpc_exp++ ;
 }
 if (VAR_51 & VAR_25) {
  switch (FUNC_7(FUNC_3(VAR_50,VAR_18)) & VAR_26) {
  case 130 : VAR_52->curr_ls = VAR_9 ; break ;
  case 131 : VAR_52->curr_ls = VAR_8 ; break ;
  case 129 : VAR_52->curr_ls = VAR_11 ; break ;
  case 128 : VAR_52->curr_ls = VAR_12 ; break ;
  }
 }
 if (VAR_51 & VAR_30) {
  int VAR_57;

  VAR_57 = FUNC_7(FUNC_3(VAR_50,VAR_37)) & VAR_17 ;

  switch (VAR_57) {
  case 135 : VAR_53->b_pcs++ ; break ;
  case 132 : VAR_53->b_tpc++ ; break ;
  case 133 : VAR_53->b_tne++ ; break ;
  case 134 : VAR_53->b_qls++ ; break ;
  case 136 : VAR_53->b_ils++ ; break ;
  case 137 : VAR_53->b_hls++ ; break ;
  }


  FUNC_0(1,"PLC %d: MDcF = %x\n", VAR_50, VAR_49->e.DisconnectFlag);
  if (VAR_49->e.DisconnectFlag == VAR_5) {
   FUNC_0(1,"PLC %d: restart (reason %x)\n", VAR_50, VAR_57);
   FUNC_9(VAR_49,VAR_4+VAR_50,VAR_14) ;
  }
  else {
   FUNC_0(1,"PLC %d: NO!! restart (reason %x)\n", VAR_50, VAR_57);
  }
  return ;
 }



 if (VAR_51 & VAR_31) {
  FUNC_9(VAR_49,VAR_4+VAR_50,VAR_13) ;
  VAR_54 = FUNC_7(FUNC_3(VAR_50,VAR_34)) ;
  for (VAR_55 = 0 ; VAR_55 < VAR_53->p_bits ; VAR_55++) {
   VAR_52->r_val[VAR_53->p_start+VAR_55] = VAR_54 & 1 ;
   VAR_54 >>= 1 ;
  }
 }
 else if (VAR_51 & VAR_32) {
  FUNC_9(VAR_49,VAR_4+VAR_50,VAR_10) ;
 }
 if (VAR_51 & VAR_40) {

  if (!VAR_52->tr_flag) {
   FUNC_0(1,"PCM : irq TRACE_PROP %d %d\n",
    VAR_50,VAR_49->mib.fddiSMTECMState) ;
   VAR_52->tr_flag = VAR_47 ;
   VAR_49->e.trace_prop |= FUNC_1(FUNC_2(VAR_50)) ;
   FUNC_9(VAR_49,VAR_3,VAR_2) ;
  }
 }




 if ((VAR_51 & VAR_35) && (VAR_52->mib->fddiPORTPCMState == VAR_6)) {

  if (VAR_49->e.path_test == VAR_43) {
   FUNC_0(1,"PCM : state = %s %d\n", FUNC_6(VAR_49,VAR_50),
    VAR_52->mib->fddiPORTPCMState) ;

   VAR_49->e.path_test = VAR_44 ;
   FUNC_9(VAR_49,VAR_3,VAR_1) ;
  }
 }
 if (VAR_51 & VAR_38) {

  if (VAR_52->mib->fddiPORTPCMState == VAR_7) {
   if (!VAR_52->tr_flag) {
      FUNC_0(1,"PCM %c : PC81 %s\n",VAR_52->phy_name,"NSE");
      FUNC_9(VAR_49,VAR_4+VAR_50,VAR_14) ;
      return ;
   }
  }
 }
}
