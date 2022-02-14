
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ num; scalar_t__ den; } ;
struct TYPE_11__ {TYPE_6__ frame_rate; TYPE_6__ time_base; int format; TYPE_1__* dst; } ;
struct TYPE_10__ {int log2_chroma_h; int log2_chroma_w; } ;
struct TYPE_9__ {void** var_values; int vsub; int hsub; } ;
struct TYPE_8__ {TYPE_2__* priv; } ;
typedef TYPE_2__ HueContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;


 void* VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 TYPE_3__* FUNC_0 (int ) ;
 void* FUNC_1 (TYPE_6__) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_4)
{
    HueContext *VAR_5 = VAR_4->dst->priv;
    const AVPixFmtDescriptor *VAR_6 = FUNC_0(VAR_4->format);

    VAR_5->hsub = VAR_6->log2_chroma_w;
    VAR_5->vsub = VAR_6->log2_chroma_h;

    VAR_5->var_values[VAR_1] = 0;
    VAR_5->var_values[VAR_3] = FUNC_1(VAR_4->time_base);
    VAR_5->var_values[VAR_2] = VAR_4->frame_rate.num == 0 || VAR_4->frame_rate.den == 0 ?
        VAR_0 : FUNC_1(VAR_4->frame_rate);

    return 0;
}
