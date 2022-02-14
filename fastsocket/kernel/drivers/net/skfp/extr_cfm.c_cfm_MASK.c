
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int fddiSMTCF_State; int fddiSMTPeerWrapFlag; TYPE_3__* m; } ;
struct s_smc {TYPE_4__ mib; TYPE_2__* y; } ;
struct TYPE_7__ {int fddiMACDownstreamPORTType; } ;
struct TYPE_6__ {scalar_t__ pc_mode; TYPE_1__* mib; } ;
struct TYPE_5__ {scalar_t__ fddiPORTNeighborType; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (struct s_smc*) ;
 int FUNC_2 (struct s_smc*,int) ;
 int * VAR_15 ;
 char** VAR_16 ;
 int FUNC_3 (struct s_smc*,int) ;
 int FUNC_4 (struct s_smc*,int) ;
 int * VAR_17 ;
 int FUNC_5 (struct s_smc*,int ,int ,int) ;

void FUNC_6(struct s_smc *VAR_18, int VAR_19)
{
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;







 FUNC_1 (VAR_18);



 FUNC_2 (VAR_18, VAR_19);

 VAR_22 = VAR_18->mib.fddiSMTCF_State ;
 do {
  FUNC_0("CFM : state %s%s",
   (VAR_18->mib.fddiSMTCF_State & VAR_0) ? "ACTIONS " : "",
   VAR_17[VAR_18->mib.fddiSMTCF_State & ~VAR_0]) ;
  FUNC_0(" event %s\n",VAR_16[VAR_19],0) ;
  VAR_20 = VAR_18->mib.fddiSMTCF_State ;
  FUNC_3(VAR_18,VAR_19) ;
  VAR_19 = 0 ;
 } while (VAR_20 != VAR_18->mib.fddiSMTCF_State) ;





 VAR_21 = VAR_1 ;
 if ( (VAR_18->mib.fddiSMTCF_State == VAR_10 &&
  VAR_18->y[VAR_4].pc_mode == VAR_6) ||
  (VAR_18->mib.fddiSMTCF_State == VAR_8 &&
  VAR_18->y[VAR_5].pc_mode == VAR_6) ||
  (VAR_18->mib.fddiSMTCF_State == VAR_9 &&
  VAR_18->y[VAR_7].pc_mode == VAR_6 &&
  VAR_18->y[VAR_7].mib->fddiPORTNeighborType != VAR_14 ) ) {
   VAR_21 = VAR_13 ;
 }
 if (VAR_21 != VAR_18->mib.fddiSMTPeerWrapFlag)
  FUNC_5(VAR_18,VAR_11,0,VAR_21) ;
 VAR_18->mib.m[VAR_3].fddiMACDownstreamPORTType =
  VAR_15[VAR_18->mib.fddiSMTCF_State] ;
 FUNC_4(VAR_18,(int)VAR_18->mib.fddiSMTCF_State) ;
}
