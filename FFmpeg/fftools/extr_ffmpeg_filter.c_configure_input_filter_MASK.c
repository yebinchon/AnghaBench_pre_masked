
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {int pad_idx; TYPE_3__* filter_ctx; } ;
struct TYPE_15__ {TYPE_2__* ist; } ;
struct TYPE_14__ {int input_pads; } ;
struct TYPE_13__ {TYPE_1__* st; int file_index; int dec; } ;
struct TYPE_12__ {int index; } ;
typedef TYPE_4__ InputFilter ;
typedef int FilterGraph ;
typedef TYPE_5__ AVFilterInOut ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,char*,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,TYPE_4__*,TYPE_5__*) ;
 int FUNC_4 (int *,TYPE_4__*,TYPE_5__*) ;

__attribute__((used)) static int FUNC_5(FilterGraph *VAR_2, InputFilter *VAR_3,
                                  AVFilterInOut *VAR_4)
{
    if (!VAR_3->ist->dec) {
        FUNC_1(((void*)0), VAR_1,
               "No decoder for stream #%d:%d, filtering impossible\n",
               VAR_3->ist->file_index, VAR_3->ist->st->index);
        return VAR_0;
    }
    switch (FUNC_2(VAR_4->filter_ctx->input_pads, VAR_4->pad_idx)) {
    case 128: return FUNC_4(VAR_2, VAR_3, VAR_4);
    case 129: return FUNC_3(VAR_2, VAR_3, VAR_4);
    default: FUNC_0(0);
    }
}
