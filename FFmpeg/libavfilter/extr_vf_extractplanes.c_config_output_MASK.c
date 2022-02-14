
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int output_pads; TYPE_1__* priv; TYPE_3__** inputs; } ;
struct TYPE_9__ {int srcpad; void* w; void* h; int format; TYPE_4__* src; } ;
struct TYPE_8__ {int log2_chroma_w; int log2_chroma_h; } ;
struct TYPE_7__ {int* map; } ;
typedef TYPE_1__ ExtractPlanesContext ;
typedef TYPE_2__ AVPixFmtDescriptor ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 void* FUNC_0 (void*,int ) ;
 TYPE_2__* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_0)
{
    AVFilterContext *VAR_1 = VAR_0->src;
    AVFilterLink *VAR_2 = VAR_1->inputs[0];
    ExtractPlanesContext *VAR_3 = VAR_1->priv;
    const AVPixFmtDescriptor *VAR_4 = FUNC_1(VAR_2->format);
    const int VAR_5 = VAR_0->srcpad - VAR_1->output_pads;

    if (VAR_3->map[VAR_5] == 1 || VAR_3->map[VAR_5] == 2) {
        VAR_0->h = FUNC_0(VAR_2->h, VAR_4->log2_chroma_h);
        VAR_0->w = FUNC_0(VAR_2->w, VAR_4->log2_chroma_w);
    }

    return 0;
}
