
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sas; } ;
struct s_smc {struct s_phy* y; TYPE_1__ s; } ;
struct s_phy {scalar_t__ np; int phy_name; struct fddi_mib_p* mib; } ;
struct fddi_mib_p {int fddiPORTPCMState; int fddiPORTPCMStateX; scalar_t__ fddiPORTIndex; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (char*,int,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int const VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 char** VAR_10 ;
 int FUNC_2 (struct s_smc*,struct s_phy*,int) ;
 int FUNC_3 (struct s_smc*,int const,int) ;
 int * VAR_11 ;
 int FUNC_4 (struct s_smc*,int ,int,int ) ;
 int FUNC_5 (struct s_smc*,int,int) ;

void FUNC_6(struct s_smc *VAR_12, const int VAR_13, int VAR_14)
{
 int VAR_15 ;
 int VAR_16 ;
 struct s_phy *VAR_17 ;
 struct fddi_mib_p *VAR_18 ;





 if ((VAR_13 != VAR_7) && (VAR_12->s.sas == VAR_9))
  return ;

 VAR_17 = &VAR_12->y[VAR_13] ;
 VAR_18 = VAR_17->mib ;
 VAR_16 = VAR_18->fddiPORTPCMState ;
 do {
  FUNC_0("PCM %c: state %s",
   VAR_17->phy_name,
   (VAR_18->fddiPORTPCMState & VAR_0) ? "ACTIONS " : "") ;
  FUNC_0("%s, event %s\n",
   VAR_11[VAR_18->fddiPORTPCMState & ~VAR_0],
   VAR_10[VAR_14]) ;
  VAR_15 = VAR_18->fddiPORTPCMState ;
  FUNC_2(VAR_12,VAR_17,VAR_14) ;
  VAR_14 = 0 ;
 } while (VAR_15 != VAR_18->fddiPORTPCMState) ;






 if (VAR_15 == VAR_5)
  VAR_18->fddiPORTPCMStateX = VAR_4 ;
 else
  VAR_18->fddiPORTPCMStateX = VAR_15 ;





 if ( VAR_18->fddiPORTPCMState != VAR_16 &&
  ((VAR_16 == VAR_6) || (VAR_18->fddiPORTPCMState == VAR_6))) {
  FUNC_4(VAR_12,VAR_8,
   (int) (VAR_1+ VAR_17->np),0) ;
 }
 FUNC_3(VAR_12,VAR_13,VAR_15) ;
}
