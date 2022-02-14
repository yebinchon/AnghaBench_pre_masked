
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {TYPE_2__* priv; } ;
struct TYPE_9__ {int channels; scalar_t__ format; int sample_rate; TYPE_4__* dst; } ;
struct TYPE_7__ {int num; int den; } ;
struct TYPE_8__ {int nb_channels; int depth; int* fg; int colors; TYPE_1__ frame_rate; int nb_samples; } ;
typedef TYPE_2__ AudioBitScopeContext ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;
 int* FUNC_3 (int,int) ;
 int FUNC_4 (int*,char*,int,TYPE_4__*) ;
 int FUNC_5 (int ,int ,int ) ;
 char* FUNC_6 (int ) ;
 char* FUNC_7 (char*,char*,char**) ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->dst;
    AudioBitScopeContext *VAR_4 = VAR_3->priv;
    int VAR_5;
    char *VAR_6, *VAR_7 = ((void*)0);

    VAR_4->nb_samples = FUNC_1(1, FUNC_5(VAR_2->sample_rate, VAR_4->frame_rate.den, VAR_4->frame_rate.num));
    VAR_4->nb_channels = VAR_2->channels;
    VAR_4->depth = VAR_2->format == VAR_0 ? 16 : 32;

    VAR_4->fg = FUNC_3(VAR_4->nb_channels, 4 * sizeof(*VAR_4->fg));
    if (!VAR_4->fg)
        return FUNC_0(VAR_1);

    VAR_6 = FUNC_6(VAR_4->colors);
    if (!VAR_6)
        return FUNC_0(VAR_1);

    for (VAR_5 = 0; VAR_5 < VAR_4->nb_channels; VAR_5++) {
        uint8_t VAR_8[4] = { 0xff, 0xff, 0xff, 0xff };
        char *VAR_9;

        VAR_9 = FUNC_7(VAR_5 == 0 ? VAR_6 : ((void*)0), " |", &VAR_7);
        if (VAR_9)
            FUNC_4(VAR_8, VAR_9, -1, VAR_3);
        VAR_4->fg[4 * VAR_5 + 0] = VAR_8[0];
        VAR_4->fg[4 * VAR_5 + 1] = VAR_8[1];
        VAR_4->fg[4 * VAR_5 + 2] = VAR_8[2];
        VAR_4->fg[4 * VAR_5 + 3] = VAR_8[3];
    }
    FUNC_2(VAR_6);

    return 0;
}
