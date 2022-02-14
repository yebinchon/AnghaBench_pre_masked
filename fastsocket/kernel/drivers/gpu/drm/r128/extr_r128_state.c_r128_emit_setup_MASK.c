
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int pm4_vc_fpu_setup; int setup_cntl; } ;
struct TYPE_5__ {TYPE_3__ context_state; } ;
typedef TYPE_1__ drm_r128_sarea_t ;
struct TYPE_6__ {TYPE_1__* sarea_priv; } ;
typedef TYPE_2__ drm_r128_private_t ;
typedef TYPE_3__ drm_r128_context_regs_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static __inline__ void FUNC_5(drm_r128_private_t *VAR_3)
{
 drm_r128_sarea_t *VAR_4 = VAR_3->sarea_priv;
 drm_r128_context_regs_t *VAR_5 = &VAR_4->context_state;
 VAR_2;
 FUNC_3("\n");

 FUNC_1(3);

 FUNC_4(FUNC_2(VAR_1, VAR_0));
 FUNC_4(VAR_5->setup_cntl);
 FUNC_4(VAR_5->pm4_vc_fpu_setup);

 FUNC_0();
}
