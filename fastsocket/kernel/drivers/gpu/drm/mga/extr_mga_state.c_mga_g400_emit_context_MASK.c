
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int dstorg; int plnwt; int dwgctl; int alphactrl; int wflag; int tdualstage1; int fcol; int stencil; int stencilctl; int tdualstage0; int fogcolor; int maccess; } ;
struct TYPE_5__ {TYPE_3__ context_state; } ;
typedef TYPE_1__ drm_mga_sarea_t ;
struct TYPE_6__ {int depth_offset; TYPE_1__* sarea_priv; } ;
typedef TYPE_2__ drm_mga_private_t ;
typedef TYPE_3__ drm_mga_context_regs_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int ,int ,int ,int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
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

__attribute__((used)) static __inline__ void FUNC_3(drm_mga_private_t *VAR_16)
{
 drm_mga_sarea_t *VAR_17 = VAR_16->sarea_priv;
 drm_mga_context_regs_t *VAR_18 = &VAR_17->context_state;
 VAR_0;

 FUNC_1(4);

 FUNC_2(VAR_3, VAR_18->dstorg,
    VAR_7, VAR_18->maccess,
    VAR_8, VAR_18->plnwt, VAR_4, VAR_18->dwgctl);

 FUNC_2(VAR_1, VAR_18->alphactrl,
    VAR_6, VAR_18->fogcolor,
    VAR_13, VAR_18->wflag, VAR_15, VAR_16->depth_offset);

 FUNC_2(VAR_14, VAR_18->wflag,
    VAR_11, VAR_18->tdualstage0,
    VAR_12, VAR_18->tdualstage1, VAR_5, VAR_18->fcol);

 FUNC_2(VAR_9, VAR_18->stencil,
    VAR_10, VAR_18->stencilctl,
    VAR_2, 0x00000000, VAR_2, 0x00000000);

 FUNC_0();
}
