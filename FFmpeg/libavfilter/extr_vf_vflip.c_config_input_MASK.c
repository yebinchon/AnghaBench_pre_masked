
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int format; TYPE_1__* dst; } ;
struct TYPE_9__ {int log2_chroma_h; } ;
struct TYPE_8__ {int vsub; } ;
struct TYPE_7__ {TYPE_2__* priv; } ;
typedef TYPE_2__ FlipContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;


 TYPE_3__* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(AVFilterLink *VAR_0)
{
    FlipContext *VAR_1 = VAR_0->dst->priv;
    const AVPixFmtDescriptor *VAR_2 = FUNC_0(VAR_0->format);

    VAR_1->vsub = VAR_2->log2_chroma_h;

    return 0;
}
