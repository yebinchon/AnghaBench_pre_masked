
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* max_persistent; scalar_t__* nb_frames_max_display; scalar_t__ persistent_max_frames; } ;
typedef TYPE_1__ ShowVolumeContext ;



__attribute__((used)) static inline void FUNC_0(ShowVolumeContext *VAR_0, float VAR_1, int VAR_2)
{

    if ((VAR_1 >= VAR_0->max_persistent[VAR_2]) || (VAR_0->nb_frames_max_display[VAR_2] >= VAR_0->persistent_max_frames)) {
        VAR_0->max_persistent[VAR_2] = VAR_1;
        VAR_0->nb_frames_max_display[VAR_2] = 0;
    } else {
        VAR_0->nb_frames_max_display[VAR_2] += 1;
    }
}
