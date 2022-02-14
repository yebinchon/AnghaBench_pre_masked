
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dtpk_id; int * dtpk_fmatch; int * dtpk_nmatch; int * dtpk_mmatch; int * dtpk_pmatch; void* dtpk_name; void* dtpk_func; void* dtpk_mod; void* dtpk_prov; } ;
typedef TYPE_1__ dtrace_probekey_t ;
struct TYPE_6__ {scalar_t__ dtpd_id; int dtpd_name; int dtpd_func; int dtpd_mod; int dtpd_provider; } ;
typedef TYPE_2__ dtrace_probedesc_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(const dtrace_probedesc_t *VAR_3, dtrace_probekey_t *VAR_4)
{

 VAR_4->dtpk_prov = FUNC_2(VAR_3->dtpd_provider);
 VAR_4->dtpk_pmatch = FUNC_0(VAR_3->dtpd_provider);

 VAR_4->dtpk_mod = FUNC_2(VAR_3->dtpd_mod);
 VAR_4->dtpk_mmatch = FUNC_1(VAR_3->dtpd_mod);

 VAR_4->dtpk_func = FUNC_2(VAR_3->dtpd_func);
 VAR_4->dtpk_fmatch = FUNC_0(VAR_3->dtpd_func);

 VAR_4->dtpk_name = FUNC_2(VAR_3->dtpd_name);
 VAR_4->dtpk_nmatch = FUNC_0(VAR_3->dtpd_name);

 VAR_4->dtpk_id = VAR_3->dtpd_id;

 if (VAR_4->dtpk_id == VAR_0 &&
     VAR_4->dtpk_pmatch == &VAR_2 &&
     VAR_4->dtpk_mmatch == &VAR_2 &&
     VAR_4->dtpk_fmatch == &VAR_2 &&
     VAR_4->dtpk_nmatch == &VAR_2)
  VAR_4->dtpk_fmatch = &VAR_1;
}
