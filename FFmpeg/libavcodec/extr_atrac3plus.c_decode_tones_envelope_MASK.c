
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* waves_info; TYPE_1__* channels; } ;
struct TYPE_9__ {int start_pos; int stop_pos; void* has_stop_point; void* has_start_point; } ;
struct TYPE_10__ {TYPE_3__ pend_env; } ;
struct TYPE_8__ {int num_tone_bands; } ;
struct TYPE_7__ {TYPE_4__* tones_info; } ;
typedef int GetBitContext ;
typedef TYPE_4__ Atrac3pWavesData ;
typedef TYPE_5__ Atrac3pChanUnitCtx ;


 int FUNC_0 (int *,int) ;
 void* FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(GetBitContext *VAR_0, Atrac3pChanUnitCtx *VAR_1,
                                  int VAR_2, int VAR_3[])
{
    int VAR_4;
    Atrac3pWavesData *VAR_5 = VAR_1->channels[VAR_2].tones_info;
    Atrac3pWavesData *VAR_6 = VAR_1->channels[0].tones_info;

    if (!VAR_2 || !FUNC_1(VAR_0)) {
        for (VAR_4 = 0; VAR_4 < VAR_1->waves_info->num_tone_bands; VAR_4++) {
            if (!VAR_3[VAR_4])
                continue;
            VAR_5[VAR_4].pend_env.has_start_point = FUNC_1(VAR_0);
            VAR_5[VAR_4].pend_env.start_pos = VAR_5[VAR_4].pend_env.has_start_point
                                               ? FUNC_0(VAR_0, 5) : -1;
            VAR_5[VAR_4].pend_env.has_stop_point = FUNC_1(VAR_0);
            VAR_5[VAR_4].pend_env.stop_pos = VAR_5[VAR_4].pend_env.has_stop_point
                                               ? FUNC_0(VAR_0, 5) : 32;
        }
    } else {
        for (VAR_4 = 0; VAR_4 < VAR_1->waves_info->num_tone_bands; VAR_4++) {
            if (!VAR_3[VAR_4])
                continue;
            VAR_5[VAR_4].pend_env.has_start_point = VAR_6[VAR_4].pend_env.has_start_point;
            VAR_5[VAR_4].pend_env.has_stop_point = VAR_6[VAR_4].pend_env.has_stop_point;
            VAR_5[VAR_4].pend_env.start_pos = VAR_6[VAR_4].pend_env.start_pos;
            VAR_5[VAR_4].pend_env.stop_pos = VAR_6[VAR_4].pend_env.stop_pos;
        }
    }
}
