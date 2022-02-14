
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sas; } ;
struct TYPE_10__ {int fddiSMTConnectionPolicy; } ;
struct s_smc {TYPE_3__* y; TYPE_1__ s; TYPE_5__ mib; } ;
struct s_phy {int np; int* t_val; int const phy_name; int pc_mode; int wc_flag; void* cf_loop; int pc_lem_fail; struct fddi_mib_p* mib; } ;
struct TYPE_9__ {int T_val; } ;
struct fddi_mib_p {int fddiPORTMy_Type; int fddiPORTNeighborType; TYPE_4__ fddiPORTMacIndicated; int fddiPORTPC_Withhold; int fddiPORTConnectState; int fddiPORTLCTFail_Ct; } ;
struct TYPE_8__ {TYPE_2__* mib; } ;
struct TYPE_7__ {int fddiPORTConnectState; } ;


 int FUNC_0 (int,char*,int const,int) ;
 int VAR_0 ;
 void* VAR_1 ;
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





 void* VAR_29 ;

 int FUNC_1 (struct s_smc*,struct s_phy*) ;
 int FUNC_2 (struct s_smc*,int ,int ) ;
 int FUNC_3 (struct s_smc*,int ,int,int ) ;

__attribute__((used)) static void FUNC_4(struct s_smc *VAR_30, const int VAR_31, struct s_phy *VAR_32)
{
 int VAR_33 = VAR_32->np ;
 struct fddi_mib_p *VAR_34 ;

 VAR_34 = VAR_32->mib ;

 switch(VAR_31) {
 case 0:
  VAR_32->t_val[0] = 0 ;
  break ;
 case 1:
  if (VAR_34->fddiPORTMy_Type == 128 || VAR_34->fddiPORTMy_Type == 129)
   VAR_32->t_val[1] = 1 ;
  else
   VAR_32->t_val[1] = 0 ;
  break ;
 case 2 :
  if (VAR_34->fddiPORTMy_Type == 130 || VAR_34->fddiPORTMy_Type == 129)
   VAR_32->t_val[2] = 1 ;
  else
   VAR_32->t_val[2] = 0 ;
  break ;
 case 3:
  {
  int VAR_35,VAR_36 ;
  int VAR_37 ;

  VAR_35 = VAR_34->fddiPORTMy_Type ;
  VAR_36 = VAR_34->fddiPORTNeighborType ;
  VAR_37 = VAR_30->mib.fddiSMTConnectionPolicy ;

  VAR_32->t_val[3] = 1 ;
  switch (VAR_35) {
  case 131 :
   if (
    ((VAR_37 & VAR_11) && VAR_36 == 131) ||
    ((VAR_37 & VAR_12) && VAR_36 == 130) ||
    ((VAR_37 & VAR_14) && VAR_36 == 128) ||
    ((VAR_37 & VAR_13) && VAR_36 == 129) )
    VAR_32->t_val[3] = 0 ;
   break ;
  case 130 :
   if (
    ((VAR_37 & VAR_15) && VAR_36 == 131) ||
    ((VAR_37 & VAR_16) && VAR_36 == 130) ||
    ((VAR_37 & VAR_18) && VAR_36 == 128) ||
    ((VAR_37 & VAR_17) && VAR_36 == 129) )
    VAR_32->t_val[3] = 0 ;
   break ;
  case 128 :
   if (
    ((VAR_37 & VAR_23) && VAR_36 == 131) ||
    ((VAR_37 & VAR_24) && VAR_36 == 130) ||
    ((VAR_37 & VAR_26) && VAR_36 == 128) ||
    ((VAR_37 & VAR_25) && VAR_36 == 129) )
    VAR_32->t_val[3] = 0 ;
   break ;
  case 129 :
   if ( VAR_36 == 129 ||
    ((VAR_37 & VAR_19) && VAR_36 == 131) ||
    ((VAR_37 & VAR_20) && VAR_36 == 130) ||
    ((VAR_37 & VAR_22) && VAR_36 == 128) ||
    ((VAR_37 & VAR_21) && VAR_36 == 129) )
    VAR_32->t_val[3] = 0 ;
   break ;
  }




  if ( (VAR_35 == 131 && VAR_36 == 131 ) ||
   (VAR_35 == 131 && VAR_36 == 128 ) ||
   (VAR_35 == 130 && VAR_36 == 130 ) ||
   (VAR_35 == 130 && VAR_36 == 128 ) ||
   (VAR_35 == 128 && VAR_36 == 131 ) ||
   (VAR_35 == 128 && VAR_36 == 130 ) ) {
   FUNC_3(VAR_30,VAR_28,
    (int) (VAR_2+ VAR_32->np) ,0) ;
  }

  }
  break ;
 case 4:
  if (VAR_34->fddiPORTPC_Withhold == VAR_9) {
   if (VAR_32->pc_lem_fail) {
    VAR_32->t_val[4] = 1 ;
    VAR_32->t_val[5] = 0 ;
   }
   else {
    VAR_32->t_val[4] = 0 ;
    if (VAR_34->fddiPORTLCTFail_Ct > 0)
     VAR_32->t_val[5] = 1 ;
    else
     VAR_32->t_val[5] = 0 ;






    if (VAR_32->wc_flag)
     VAR_32->t_val[5] = 1 ;
   }
   VAR_34->fddiPORTConnectState = VAR_6 ;
  }
  else {
   VAR_34->fddiPORTConnectState = VAR_7 ;
   VAR_32->t_val[4] = 1 ;
   VAR_32->t_val[5] = 1 ;
  }
  break ;
 case 5:
  break ;
 case 6:

  VAR_32->t_val[6] = 0 ;
  break ;
 case 7:
  VAR_32->cf_loop = VAR_1 ;
  FUNC_1(VAR_30,VAR_32) ;
  if (VAR_32->pc_lem_fail) {
   FUNC_0(1,"PCM %c : E104 LCT failed\n",
    VAR_32->phy_name,0) ;
   VAR_32->t_val[7] = 1 ;
  }
  else
   VAR_32->t_val[7] = 0 ;
  break ;
 case 8:
  VAR_32->t_val[8] = 0 ;
  break ;
 case 9:
  VAR_32->cf_loop = 0 ;
  if ((VAR_34->fddiPORTPC_Withhold != VAR_9) ||
       ((VAR_30->s.sas == 134) && (VAR_32->wc_flag))) {
   FUNC_2(VAR_30,VAR_0+VAR_33,VAR_8) ;
   break ;
  }
  VAR_32->t_val[9] = VAR_1 ;
  switch (VAR_30->s.sas) {
  case 134 :



   if (VAR_32->pc_mode == VAR_10) {
    if ((VAR_33 == VAR_4) || ((VAR_33 == VAR_3) &&
    (VAR_30->y[VAR_4].mib->fddiPORTConnectState !=
     VAR_5)))
     VAR_32->t_val[9] = VAR_29 ;
   }
   else {
    if (VAR_33 == VAR_4)
     VAR_32->t_val[9] = VAR_29 ;
   }
   break ;
  case 132 :
   if (VAR_33 == VAR_27)
    VAR_32->t_val[9] = VAR_29 ;
   break ;
  }
  VAR_34->fddiPORTMacIndicated.T_val = VAR_32->t_val[9] ;
  break ;
 }
 FUNC_0(1,"SIG snd %x %x: \n", VAR_31,VAR_32->t_val[VAR_31] ) ;
}
