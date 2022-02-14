
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* sps; TYPE_2__* pps; } ;
struct TYPE_11__ {TYPE_1__* HEVClc; int cabac_state; TYPE_3__ ps; } ;
struct TYPE_10__ {int ctb_width; } ;
struct TYPE_8__ {scalar_t__ entropy_coding_sync_enabled_flag; } ;
struct TYPE_7__ {int cabac_state; } ;
typedef TYPE_5__ HEVCContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

void FUNC_1(HEVCContext *VAR_1, int VAR_2)
{
    if (VAR_1->ps.pps->entropy_coding_sync_enabled_flag &&
        (VAR_2 % VAR_1->ps.sps->ctb_width == 2 ||
         (VAR_1->ps.sps->ctb_width == 2 &&
          VAR_2 % VAR_1->ps.sps->ctb_width == 0))) {
        FUNC_0(VAR_1->cabac_state, VAR_1->HEVClc->cabac_state, VAR_0);
    }
}
