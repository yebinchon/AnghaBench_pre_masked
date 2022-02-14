
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
struct TYPE_11__ {void* w; void* h; int format; TYPE_5__* dst; } ;
struct TYPE_10__ {int log2_chroma_w; int log2_chroma_h; TYPE_1__* comp; } ;
struct TYPE_9__ {void** widthy; void** heighty; int depthy; int * var_values; int nb_planesy; } ;
struct TYPE_8__ {int depth; } ;
typedef TYPE_2__ LUT2Context ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 void* FUNC_0 (void*,int) ;
 size_t VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_1->dst;
    LUT2Context *VAR_3 = VAR_2->priv;
    const AVPixFmtDescriptor *VAR_4 = FUNC_2(VAR_1->format);
    int VAR_5 = VAR_4->log2_chroma_w;
    int VAR_6 = VAR_4->log2_chroma_h;

    VAR_3->nb_planesy = FUNC_1(VAR_1->format);
    VAR_3->depthy = VAR_4->comp[0].depth;
    VAR_3->var_values[VAR_0] = VAR_3->depthy;
    VAR_3->heighty[1] = VAR_3->heighty[2] = FUNC_0(VAR_1->h, VAR_6);
    VAR_3->heighty[0] = VAR_3->heighty[3] = VAR_1->h;
    VAR_3->widthy[1] = VAR_3->widthy[2] = FUNC_0(VAR_1->w, VAR_5);
    VAR_3->widthy[0] = VAR_3->widthy[3] = VAR_1->w;

    return 0;
}
