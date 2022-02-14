
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s_srf_evc {void** evc_cond_state; int evc_code; void* evc_rep_required; } ;
struct TYPE_2__ {void* any_report; } ;
struct s_smc {TYPE_1__ srf; struct s_srf_evc* evcs; } ;


 void* VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct s_smc *VAR_2)
{
 struct s_srf_evc *VAR_3 ;
 int VAR_4 ;

 for (VAR_4 = 0, VAR_3 = VAR_2->evcs ; (unsigned) VAR_4 < VAR_1 ; VAR_4++, VAR_3++) {
  VAR_3->evc_rep_required = VAR_0 ;
  if (FUNC_0(VAR_3->evc_code))
   *VAR_3->evc_cond_state = VAR_0 ;
 }
 VAR_2->srf.any_report = VAR_0 ;
}
