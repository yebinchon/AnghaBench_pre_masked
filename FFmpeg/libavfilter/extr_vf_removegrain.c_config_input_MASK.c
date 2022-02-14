
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {void* w; void* h; int format; TYPE_1__* dst; } ;
struct TYPE_10__ {int log2_chroma_w; int log2_chroma_h; } ;
struct TYPE_9__ {int nb_planes; int* mode; int skip_odd; int skip_even; void** rg; void** planewidth; void** planeheight; } ;
struct TYPE_8__ {TYPE_2__* priv; } ;
typedef TYPE_2__ RemoveGrainContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (void*,int ) ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_22)
{
    RemoveGrainContext *VAR_23 = VAR_22->dst->priv;
    const AVPixFmtDescriptor *VAR_24 = FUNC_2(VAR_22->format);
    int VAR_25;

    VAR_23->nb_planes = FUNC_1(VAR_22->format);

    VAR_23->planeheight[1] = VAR_23->planeheight[2] = FUNC_0(VAR_22->h, VAR_24->log2_chroma_h);
    VAR_23->planeheight[0] = VAR_23->planeheight[3] = VAR_22->h;
    VAR_23->planewidth[1] = VAR_23->planewidth[2] = FUNC_0(VAR_22->w, VAR_24->log2_chroma_w);
    VAR_23->planewidth[0] = VAR_23->planewidth[3] = VAR_22->w;

    for (VAR_25 = 0; VAR_25 < VAR_23->nb_planes; VAR_25++) {
        switch (VAR_23->mode[VAR_25]) {
        case 1: VAR_23->rg[VAR_25] = VAR_1; break;
        case 2: VAR_23->rg[VAR_25] = VAR_2; break;
        case 3: VAR_23->rg[VAR_25] = VAR_3; break;
        case 4: VAR_23->rg[VAR_25] = VAR_4; break;
        case 5: VAR_23->rg[VAR_25] = VAR_5; break;
        case 6: VAR_23->rg[VAR_25] = VAR_6; break;
        case 7: VAR_23->rg[VAR_25] = VAR_7; break;
        case 8: VAR_23->rg[VAR_25] = VAR_8; break;
        case 9: VAR_23->rg[VAR_25] = VAR_9; break;
        case 10: VAR_23->rg[VAR_25] = VAR_10; break;
        case 11: VAR_23->rg[VAR_25] = VAR_11; break;
        case 12: VAR_23->rg[VAR_25] = VAR_11; break;
        case 13: VAR_23->skip_odd = 1;
                 VAR_23->rg[VAR_25] = VAR_12; break;
        case 14: VAR_23->skip_even = 1;
                 VAR_23->rg[VAR_25] = VAR_12; break;
        case 15: VAR_23->skip_odd = 1;
                 VAR_23->rg[VAR_25] = VAR_13; break;
        case 16: VAR_23->skip_even = 1;
                 VAR_23->rg[VAR_25] = VAR_13; break;
        case 17: VAR_23->rg[VAR_25] = VAR_14; break;
        case 18: VAR_23->rg[VAR_25] = VAR_15; break;
        case 19: VAR_23->rg[VAR_25] = VAR_16; break;
        case 20: VAR_23->rg[VAR_25] = VAR_17; break;
        case 21: VAR_23->rg[VAR_25] = VAR_18; break;
        case 22: VAR_23->rg[VAR_25] = VAR_19; break;
        case 23: VAR_23->rg[VAR_25] = VAR_20; break;
        case 24: VAR_23->rg[VAR_25] = VAR_21; break;
        }
    }

    if (VAR_0)
        FUNC_3(VAR_23);

    return 0;
}
