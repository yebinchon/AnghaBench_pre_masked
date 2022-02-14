
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* sps; } ;
struct TYPE_12__ {TYPE_4__* HEVClc; TYPE_2__ ps; } ;
struct TYPE_10__ {scalar_t__ cu_qp_delta; } ;
struct TYPE_11__ {int qp_y; TYPE_3__ tu; } ;
struct TYPE_8__ {int qp_bd_offset; } ;
typedef TYPE_5__ HEVCContext ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (TYPE_5__*,int,int,int) ;

void FUNC_2(HEVCContext *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);

    if (VAR_0->HEVClc->tu.cu_qp_delta != 0) {
        int VAR_5 = VAR_0->ps.sps->qp_bd_offset;
        VAR_0->HEVClc->qp_y = FUNC_0(VAR_4 + VAR_0->HEVClc->tu.cu_qp_delta + 52 + 2 * VAR_5,
                                 52 + VAR_5) - VAR_5;
    } else
        VAR_0->HEVClc->qp_y = VAR_4;
}
