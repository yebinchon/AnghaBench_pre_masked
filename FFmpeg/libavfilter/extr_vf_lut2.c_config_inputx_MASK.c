
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* priv; } ;
struct TYPE_11__ {void* h; void* w; int format; TYPE_5__* dst; } ;
struct TYPE_10__ {int log2_chroma_w; int log2_chroma_h; TYPE_1__* comp; } ;
struct TYPE_9__ {void* depthy; void** var_values; scalar_t__ tlut2; void* depthx; void** widthx; void** heightx; int nb_planesx; } ;
struct TYPE_8__ {void* depth; } ;
typedef TYPE_2__ LUT2Context ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 void* FUNC_0 (void*,int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_4)
{
    AVFilterContext *VAR_5 = VAR_4->dst;
    LUT2Context *VAR_6 = VAR_5->priv;
    const AVPixFmtDescriptor *VAR_7 = FUNC_2(VAR_4->format);
    int VAR_8 = VAR_7->log2_chroma_w;
    int VAR_9 = VAR_7->log2_chroma_h;

    VAR_6->nb_planesx = FUNC_1(VAR_4->format);
    VAR_6->heightx[1] = VAR_6->heightx[2] = FUNC_0(VAR_4->h, VAR_9);
    VAR_6->heightx[0] = VAR_6->heightx[3] = VAR_4->h;
    VAR_6->widthx[1] = VAR_6->widthx[2] = FUNC_0(VAR_4->w, VAR_8);
    VAR_6->widthx[0] = VAR_6->widthx[3] = VAR_4->w;

    VAR_6->var_values[VAR_3] = VAR_4->w;
    VAR_6->var_values[VAR_2] = VAR_4->h;
    VAR_6->depthx = VAR_7->comp[0].depth;
    VAR_6->var_values[VAR_0] = VAR_6->depthx;

    if (VAR_6->tlut2) {
        VAR_6->depthy = VAR_7->comp[0].depth;
        VAR_6->var_values[VAR_1] = VAR_6->depthy;
    }

    return 0;
}
