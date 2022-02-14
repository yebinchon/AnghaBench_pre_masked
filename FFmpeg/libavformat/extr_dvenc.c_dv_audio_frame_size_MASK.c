
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int den; int num; } ;
struct TYPE_5__ {int* audio_samples_dist; TYPE_1__ time_base; } ;
typedef TYPE_2__ AVDVProfile ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const AVDVProfile* VAR_0, int VAR_1, int VAR_2)
{
    if ((VAR_0->time_base.den == 25 || VAR_0->time_base.den == 50) && VAR_0->time_base.num == 1) {
        if (VAR_2 == 32000) return 1280;
        else if (VAR_2 == 44100) return 1764;
        else return 1920;
    }

    FUNC_0(VAR_2 == 48000);

    return VAR_0->audio_samples_dist[VAR_1 % (sizeof(VAR_0->audio_samples_dist) /
                                            sizeof(VAR_0->audio_samples_dist[0]))];
}
