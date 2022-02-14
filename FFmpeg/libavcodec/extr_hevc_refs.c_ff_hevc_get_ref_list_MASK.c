
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* pps; TYPE_3__* sps; } ;
struct TYPE_12__ {TYPE_2__ ps; } ;
struct TYPE_11__ {scalar_t__* rpl_tab; } ;
struct TYPE_10__ {int log2_ctb_size; int ctb_width; } ;
struct TYPE_8__ {int* ctb_addr_rs_to_ts; } ;
typedef int RefPicList ;
typedef TYPE_4__ HEVCFrame ;
typedef TYPE_5__ HEVCContext ;



RefPicList *FUNC_0(HEVCContext *VAR_0, HEVCFrame *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4 = VAR_2 >> VAR_0->ps.sps->log2_ctb_size;
    int VAR_5 = VAR_3 >> VAR_0->ps.sps->log2_ctb_size;
    int VAR_6 = VAR_0->ps.sps->ctb_width;
    int VAR_7 = VAR_0->ps.pps->ctb_addr_rs_to_ts[VAR_5 * VAR_6 + VAR_4];
    return (RefPicList *)VAR_1->rpl_tab[VAR_7];
}
