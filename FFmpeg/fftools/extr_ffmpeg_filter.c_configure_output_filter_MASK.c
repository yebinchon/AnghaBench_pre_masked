
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int pad_idx; TYPE_1__* filter_ctx; } ;
struct TYPE_11__ {int name; int ost; } ;
struct TYPE_10__ {int output_pads; } ;
typedef TYPE_2__ OutputFilter ;
typedef int FilterGraph ;
typedef TYPE_3__ AVFilterInOut ;




 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,char*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,TYPE_2__*,TYPE_3__*) ;
 int FUNC_4 (int *,TYPE_2__*,TYPE_3__*) ;
 int FUNC_5 (int) ;

int FUNC_6(FilterGraph *VAR_1, OutputFilter *VAR_2, AVFilterInOut *VAR_3)
{
    if (!VAR_2->ost) {
        FUNC_1(((void*)0), VAR_0, "Filter %s has an unconnected output\n", VAR_2->name);
        FUNC_5(1);
    }

    switch (FUNC_2(VAR_3->filter_ctx->output_pads, VAR_3->pad_idx)) {
    case 128: return FUNC_4(VAR_1, VAR_2, VAR_3);
    case 129: return FUNC_3(VAR_1, VAR_2, VAR_3);
    default: FUNC_0(0);
    }
}
