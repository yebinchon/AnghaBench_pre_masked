
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* priv; } ;
struct TYPE_9__ {int time_base; int h; int w; int format; TYPE_4__* src; } ;
struct TYPE_8__ {int log2_chroma_h; int log2_chroma_w; } ;
struct TYPE_7__ {int frame_rate; int vsub; int hsub; } ;
typedef TYPE_1__ MPTestContext ;
typedef TYPE_2__ AVPixFmtDescriptor ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->src;
    MPTestContext *VAR_4 = VAR_3->priv;
    const AVPixFmtDescriptor *VAR_5 = FUNC_1(VAR_2->format);

    VAR_4->hsub = VAR_5->log2_chroma_w;
    VAR_4->vsub = VAR_5->log2_chroma_h;

    VAR_2->w = VAR_1;
    VAR_2->h = VAR_0;
    VAR_2->time_base = FUNC_0(VAR_4->frame_rate);

    return 0;
}
