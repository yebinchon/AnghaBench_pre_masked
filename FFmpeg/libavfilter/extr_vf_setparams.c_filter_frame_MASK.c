
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int * outputs; TYPE_1__* priv; } ;
struct TYPE_10__ {TYPE_4__* dst; } ;
struct TYPE_9__ {int interlaced_frame; scalar_t__ top_field_first; scalar_t__ color_range; scalar_t__ color_primaries; scalar_t__ color_trc; scalar_t__ colorspace; } ;
struct TYPE_8__ {scalar_t__ field_mode; scalar_t__ color_range; scalar_t__ color_primaries; scalar_t__ color_trc; scalar_t__ colorspace; } ;
typedef TYPE_1__ SetParamsContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_1(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_2->dst;
    SetParamsContext *VAR_5 = VAR_4->priv;


    if (VAR_5->field_mode == VAR_1) {
        VAR_3->interlaced_frame = 0;
    } else if (VAR_5->field_mode != VAR_0) {
        VAR_3->interlaced_frame = 1;
        VAR_3->top_field_first = VAR_5->field_mode;
    }


    if (VAR_5->color_range >= 0)
        VAR_3->color_range = VAR_5->color_range;


    if (VAR_5->color_primaries >= 0)
        VAR_3->color_primaries = VAR_5->color_primaries;
    if (VAR_5->color_trc >= 0)
        VAR_3->color_trc = VAR_5->color_trc;
    if (VAR_5->colorspace >= 0)
        VAR_3->colorspace = VAR_5->colorspace;
    return FUNC_0(VAR_4->outputs[0], VAR_3);
}
