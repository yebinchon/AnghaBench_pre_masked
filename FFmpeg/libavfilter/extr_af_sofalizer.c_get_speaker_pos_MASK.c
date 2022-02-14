
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct SOFAlizerContext {int lfe_channel; TYPE_2__* vspkrpos; scalar_t__ speakers_pos; } ;
struct TYPE_8__ {TYPE_1__** inputs; struct SOFAlizerContext* priv; } ;
struct TYPE_7__ {float azim; float elev; scalar_t__ set; } ;
struct TYPE_6__ {unsigned long long channel_layout; int channels; } ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (float*,float*,int) ;
 int FUNC_2 (TYPE_3__*,unsigned long long) ;

__attribute__((used)) static int FUNC_3(AVFilterContext *VAR_1,
                           float *VAR_2, float *VAR_3)
{
    struct SOFAlizerContext *VAR_4 = VAR_1->priv;
    uint64_t VAR_5 = VAR_1->inputs[0]->channel_layout;
    float VAR_6[16] = { 0 };
    float VAR_7[16] = { 0 };
    int VAR_8, VAR_9, VAR_10 = VAR_1->inputs[0]->channels;

    if (VAR_10 > 16)
        return FUNC_0(VAR_0);

    VAR_4->lfe_channel = -1;

    if (VAR_4->speakers_pos)
        FUNC_2(VAR_1, VAR_5);


    for (VAR_8 = 0, VAR_9 = 0; VAR_9 < VAR_10 && VAR_8 < 64; VAR_8++) {
        uint64_t VAR_11 = VAR_5 & (1ULL << VAR_8);

        switch (VAR_11) {
        case 148: VAR_6[VAR_9] = 30; break;
        case 146: VAR_6[VAR_9] = 330; break;
        case 149: VAR_6[VAR_9] = 0; break;
        case 144:
        case 143: VAR_4->lfe_channel = VAR_9; break;
        case 151: VAR_6[VAR_9] = 150; break;
        case 150: VAR_6[VAR_9] = 210; break;
        case 152: VAR_6[VAR_9] = 180; break;
        case 142: VAR_6[VAR_9] = 90; break;
        case 141: VAR_6[VAR_9] = 270; break;
        case 147: VAR_6[VAR_9] = 15; break;
        case 145: VAR_6[VAR_9] = 345; break;
        case 133: VAR_6[VAR_9] = 0;
                                          VAR_7[VAR_9] = 90; break;
        case 131: VAR_6[VAR_9] = 30;
                                          VAR_7[VAR_9] = 45; break;
        case 132: VAR_6[VAR_9] = 0;
                                          VAR_7[VAR_9] = 45; break;
        case 130: VAR_6[VAR_9] = 330;
                                          VAR_7[VAR_9] = 45; break;
        case 135: VAR_6[VAR_9] = 150;
                                          VAR_7[VAR_9] = 45; break;
        case 134: VAR_6[VAR_9] = 210;
                                          VAR_7[VAR_9] = 45; break;
        case 136: VAR_6[VAR_9] = 180;
                                          VAR_7[VAR_9] = 45; break;
        case 129: VAR_6[VAR_9] = 90; break;
        case 128: VAR_6[VAR_9] = 270; break;
        case 138: VAR_6[VAR_9] = 90; break;
        case 137: VAR_6[VAR_9] = 270; break;
        case 140: VAR_6[VAR_9] = 90; break;
        case 139: VAR_6[VAR_9] = 270; break;
        case 0: break;
        default:
            return FUNC_0(VAR_0);
        }

        if (VAR_4->vspkrpos[VAR_8].set) {
            VAR_6[VAR_9] = VAR_4->vspkrpos[VAR_8].azim;
            VAR_7[VAR_9] = VAR_4->vspkrpos[VAR_8].elev;
        }

        if (VAR_11)
            VAR_9++;
    }

    FUNC_1(VAR_2, VAR_6, VAR_10 * sizeof(float));
    FUNC_1(VAR_3, VAR_7, VAR_10 * sizeof(float));

    return 0;

}
