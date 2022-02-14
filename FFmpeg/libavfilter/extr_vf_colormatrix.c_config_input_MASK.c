
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* priv; } ;
struct TYPE_10__ {int format; TYPE_4__* dst; } ;
struct TYPE_9__ {int log2_chroma_h; int log2_chroma_w; } ;
struct TYPE_8__ {size_t source; size_t dest; int vsub; int hsub; } ;
typedef TYPE_1__ ColorMatrixContext ;
typedef TYPE_2__ AVPixFmtDescriptor ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ,char*,int ,int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->dst;
    ColorMatrixContext *VAR_4 = VAR_3->priv;
    const AVPixFmtDescriptor *VAR_5 = FUNC_1(VAR_2->format);

    VAR_4->hsub = VAR_5->log2_chroma_w;
    VAR_4->vsub = VAR_5->log2_chroma_h;

    FUNC_0(VAR_3, VAR_0, "%s -> %s\n",
           VAR_1[VAR_4->source], VAR_1[VAR_4->dest]);

    return 0;
}
