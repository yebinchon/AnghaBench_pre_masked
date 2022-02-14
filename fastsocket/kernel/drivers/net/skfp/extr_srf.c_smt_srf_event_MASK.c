
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct s_srf_evc {int* evc_cond_state; int evc_rep_required; void** evc_multiple; } ;
struct TYPE_4__ {void* TSR; int sr_state; int SRThreshold; void* any_report; } ;
struct TYPE_3__ {int fddiSMTStatRptPolicy; int fddiSMTTransitionTimeStamp; } ;
struct s_smc {TYPE_2__ srf; TYPE_1__ mib; } ;


 int FUNC_0 (char*,char*,int) ;
 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct s_smc*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;



 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_3 (struct s_smc*) ;
 struct s_srf_evc* FUNC_4 (struct s_smc*,int,int) ;
 void* FUNC_5 () ;
 int FUNC_6 (struct s_smc*) ;
 int FUNC_7 (struct s_smc*,int ) ;
 int FUNC_8 (struct s_smc*,struct s_srf_evc*) ;
 char** VAR_7 ;

void FUNC_9(struct s_smc *VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
 struct s_srf_evc *VAR_12 ;
 int VAR_13 = 0 ;
 int VAR_14 = 0 ;
 int VAR_15 = 0 ;
 int VAR_16 ;
 int VAR_17 = 2*VAR_5 ;

 if (VAR_9 == VAR_2 && VAR_11) {
  FUNC_1(VAR_8,VAR_1) ;
 }

 if (VAR_9) {
  FUNC_0("SRF: %s index %d\n",VAR_7[VAR_9],VAR_10) ;

  if (!(VAR_12 = FUNC_4(VAR_8,VAR_9,VAR_10))) {
   FUNC_0("SRF : smt_get_evc() failed\n",0,0) ;
   return ;
  }



  if (FUNC_2(VAR_9)) {
   if (*VAR_12->evc_cond_state == VAR_11)
    return ;
  }




  FUNC_7(VAR_8,VAR_8->mib.fddiSMTTransitionTimeStamp) ;
  if (FUNC_2(VAR_9)) {
   FUNC_0("SRF: condition is %s\n",VAR_11 ? "ON":"OFF",0) ;
   if (VAR_11) {
    *VAR_12->evc_cond_state = VAR_6 ;
    VAR_12->evc_rep_required = VAR_6 ;
    VAR_8->srf.any_report = VAR_6 ;
    VAR_13 = VAR_6 ;
   }
   else {
    *VAR_12->evc_cond_state = VAR_0 ;
    VAR_14 = VAR_6 ;
   }
  }
  else {
   if (VAR_12->evc_rep_required) {
    *VAR_12->evc_multiple = VAR_6 ;
   }
   else {
    VAR_12->evc_rep_required = VAR_6 ;
    *VAR_12->evc_multiple = VAR_0 ;
   }
   VAR_8->srf.any_report = VAR_6 ;
   VAR_15 = VAR_6 ;
  }



 }
 VAR_16 = FUNC_5() - VAR_8->srf.TSR ;

 switch (VAR_8->srf.sr_state) {
 case 130 :

  if (VAR_13 && VAR_16 < VAR_17) {
   VAR_8->srf.SRThreshold = VAR_3 ;
   VAR_8->srf.sr_state = 129 ;
   break ;
  }

  if (VAR_14 && VAR_16 < VAR_17) {
   VAR_8->srf.sr_state = 129 ;
   break ;
  }

  if (VAR_15 && VAR_16 < VAR_17) {
   VAR_8->srf.sr_state = 129 ;
   break ;
  }

  if (VAR_13 && VAR_16 >= VAR_17) {
   VAR_8->srf.SRThreshold = VAR_3 ;
   VAR_8->srf.TSR = FUNC_5() ;
   FUNC_6(VAR_8) ;
   break ;
  }

  if (VAR_14 && VAR_16 >= VAR_17) {
   VAR_8->srf.TSR = FUNC_5() ;
   FUNC_6(VAR_8) ;
   break ;
  }

  if (VAR_15 && VAR_16 >= VAR_17) {
   VAR_8->srf.TSR = FUNC_5() ;
   FUNC_6(VAR_8) ;
   break ;
  }

  if (VAR_8->srf.any_report && (u_long) VAR_16 >=
   VAR_8->srf.SRThreshold) {
   VAR_8->srf.SRThreshold *= 2 ;
   if (VAR_8->srf.SRThreshold > VAR_4)
    VAR_8->srf.SRThreshold = VAR_4 ;
   VAR_8->srf.TSR = FUNC_5() ;
   FUNC_6(VAR_8) ;
   break ;
  }

  if (!VAR_8->mib.fddiSMTStatRptPolicy) {
   VAR_8->srf.sr_state = 128 ;
   break ;
  }
  break ;
 case 129 :

  if (VAR_16 >= VAR_17) {
   VAR_8->srf.sr_state = 130 ;
   VAR_8->srf.TSR = FUNC_5() ;
   FUNC_6(VAR_8) ;
   break ;
  }

  if (VAR_13) {
   VAR_8->srf.SRThreshold = VAR_3 ;
  }




  if (!VAR_8->mib.fddiSMTStatRptPolicy) {
   VAR_8->srf.sr_state = 128 ;
   break ;
  }
  break ;
 case 128 :
  if (VAR_8->mib.fddiSMTStatRptPolicy) {
   VAR_8->srf.sr_state = 130 ;
   VAR_8->srf.TSR = FUNC_5() ;
   VAR_8->srf.SRThreshold = VAR_3 ;
   FUNC_3(VAR_8) ;
   break ;
  }
  break ;
 }
}
