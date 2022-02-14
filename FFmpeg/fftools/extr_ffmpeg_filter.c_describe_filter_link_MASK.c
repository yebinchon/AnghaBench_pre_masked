
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_7__ {int nb_inputs; int nb_outputs; TYPE_1__* filter; int * output_pads; int * input_pads; } ;
struct TYPE_6__ {int pad_idx; TYPE_3__* filter_ctx; } ;
struct TYPE_5__ {int name; } ;
typedef int FilterGraph ;
typedef int AVIOContext ;
typedef int AVFilterPad ;
typedef TYPE_2__ AVFilterInOut ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char**) ;
 scalar_t__ FUNC_2 (int **) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static char *FUNC_6(FilterGraph *VAR_0, AVFilterInOut *VAR_1, int VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->filter_ctx;
    AVFilterPad *VAR_4 = VAR_2 ? VAR_3->input_pads : VAR_3->output_pads;
    int VAR_5 = VAR_2 ? VAR_3->nb_inputs : VAR_3->nb_outputs;
    AVIOContext *VAR_6;
    uint8_t *VAR_7 = ((void*)0);

    if (FUNC_2(&VAR_6) < 0)
        FUNC_5(1);

    FUNC_3(VAR_6, "%s", VAR_3->filter->name);
    if (VAR_5 > 1)
        FUNC_3(VAR_6, ":%s", FUNC_0(VAR_4, VAR_1->pad_idx));
    FUNC_4(VAR_6, 0);
    FUNC_1(VAR_6, &VAR_7);
    return VAR_7;
}
