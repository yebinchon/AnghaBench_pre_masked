
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* priv; } ;
struct TYPE_9__ {int format; TYPE_4__* dst; } ;
struct TYPE_8__ {int log2_chroma_h; int log2_chroma_w; } ;
struct TYPE_7__ {int vsub; int hsub; } ;
typedef TYPE_1__ CodecViewContext ;
typedef TYPE_2__ AVPixFmtDescriptor ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 TYPE_2__* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(AVFilterLink *VAR_0)
{
    AVFilterContext *VAR_1 = VAR_0->dst;
    CodecViewContext *VAR_2 = VAR_1->priv;
    const AVPixFmtDescriptor *VAR_3 = FUNC_0(VAR_0->format);

    VAR_2->hsub = VAR_3->log2_chroma_w;
    VAR_2->vsub = VAR_3->log2_chroma_h;
    return 0;
}
