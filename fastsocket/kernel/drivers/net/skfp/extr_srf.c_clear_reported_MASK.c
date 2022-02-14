
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s_srf_evc {scalar_t__* evc_cond_state; scalar_t__* evc_multiple; scalar_t__ evc_rep_required; int evc_code; } ;
struct TYPE_2__ {scalar_t__ any_report; } ;
struct s_smc {TYPE_1__ srf; struct s_srf_evc* evcs; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_1(struct s_smc *VAR_3)
{
 struct s_srf_evc *VAR_4 ;
 int VAR_5 ;

 VAR_3->srf.any_report = VAR_0 ;
 for (VAR_5 = 0, VAR_4 = VAR_3->evcs ; (unsigned) VAR_5 < VAR_1 ; VAR_5++, VAR_4++) {
  if (FUNC_0(VAR_4->evc_code)) {
   if (*VAR_4->evc_cond_state == VAR_0)
    VAR_4->evc_rep_required = VAR_0 ;
   else
    VAR_3->srf.any_report = VAR_2 ;
  }
  else {
   VAR_4->evc_rep_required = VAR_0 ;
   *VAR_4->evc_multiple = VAR_0 ;
  }
 }
}
