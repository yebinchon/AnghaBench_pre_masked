
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smt_p_lem {int lem_ct; int lem_reject_ct; int lem_estimate; int lem_alarm; int lem_cutoff; scalar_t__ lem_pad2; int lem_phy_index; scalar_t__ lem_mib_index; } ;
struct s_smc {TYPE_1__* y; } ;
struct fddi_mib_p {int fddiPORTLem_Ct; int fddiPORTLem_Reject_Ct; int fddiPORTLer_Estimate; int fddiPORTLer_Alarm; int fddiPORTLer_Cutoff; } ;
struct TYPE_2__ {struct fddi_mib_p* mib; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct smt_p_lem*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct s_smc*,int) ;

__attribute__((used)) static void FUNC_2(struct s_smc *VAR_2, struct smt_p_lem *VAR_3, int VAR_4)
{
 struct fddi_mib_p *VAR_5 ;

 VAR_5 = VAR_2->y[VAR_4].mib ;

 FUNC_0(VAR_3,VAR_1) ;
 VAR_3->lem_mib_index = VAR_4+VAR_0 ;
 VAR_3->lem_phy_index = FUNC_1(VAR_2,VAR_4) ;
 VAR_3->lem_pad2 = 0 ;
 VAR_3->lem_cutoff = VAR_5->fddiPORTLer_Cutoff ;
 VAR_3->lem_alarm = VAR_5->fddiPORTLer_Alarm ;

 VAR_3->lem_estimate = VAR_5->fddiPORTLer_Estimate ;

 VAR_3->lem_reject_ct = VAR_5->fddiPORTLem_Reject_Ct ;
 VAR_3->lem_ct = VAR_5->fddiPORTLem_Ct ;
}
