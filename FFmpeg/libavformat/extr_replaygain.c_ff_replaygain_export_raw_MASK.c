
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint32_t ;
typedef scalar_t__ int32_t ;
struct TYPE_2__ {void* album_peak; scalar_t__ album_gain; void* track_peak; scalar_t__ track_gain; } ;
typedef int AVStream ;
typedef TYPE_1__ AVReplayGain ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int *,int ,int) ;

int FUNC_2(AVStream *VAR_3, int32_t VAR_4, uint32_t VAR_5,
                             int32_t VAR_6, uint32_t VAR_7)
{
    AVReplayGain *VAR_8;

    if (VAR_4 == VAR_2 && VAR_6 == VAR_2)
        return 0;

    VAR_8 = (AVReplayGain*)FUNC_1(VAR_3, VAR_0,
                                                        sizeof(*VAR_8));
    if (!VAR_8)
        return FUNC_0(VAR_1);

    VAR_8->track_gain = VAR_4;
    VAR_8->track_peak = VAR_5;
    VAR_8->album_gain = VAR_6;
    VAR_8->album_peak = VAR_7;

    return 0;
}
