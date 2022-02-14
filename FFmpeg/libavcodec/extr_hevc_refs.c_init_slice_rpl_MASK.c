
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {size_t slice_segment_addr; } ;
struct TYPE_9__ {TYPE_1__* pps; } ;
struct TYPE_13__ {int slice_idx; TYPE_3__ sh; TYPE_2__ ps; TYPE_5__* ref; } ;
struct TYPE_12__ {int ctb_count; int ** rpl_tab; int * refPicList; TYPE_4__* rpl_buf; } ;
struct TYPE_11__ {int size; scalar_t__ data; } ;
struct TYPE_8__ {int* ctb_addr_rs_to_ts; } ;
typedef int RefPicListTab ;
typedef int RefPicList ;
typedef TYPE_5__ HEVCFrame ;
typedef TYPE_6__ HEVCContext ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(HEVCContext *VAR_1)
{
    HEVCFrame *VAR_2 = VAR_1->ref;
    int VAR_3 = VAR_2->ctb_count;
    int VAR_4 = VAR_1->ps.pps->ctb_addr_rs_to_ts[VAR_1->sh.slice_segment_addr];
    int VAR_5;

    if (VAR_1->slice_idx >= VAR_2->rpl_buf->size / sizeof(RefPicListTab))
        return VAR_0;

    for (VAR_5 = VAR_4; VAR_5 < VAR_3; VAR_5++)
        VAR_2->rpl_tab[VAR_5] = (RefPicListTab *)VAR_2->rpl_buf->data + VAR_1->slice_idx;

    VAR_2->refPicList = (RefPicList *)VAR_2->rpl_tab[VAR_4];

    return 0;
}
