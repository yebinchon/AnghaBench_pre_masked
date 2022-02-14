
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {TYPE_1__* resample; int resample_needed; } ;
struct TYPE_5__ {int compensation_distance; int dst_incr; int ideal_dst_incr; } ;
typedef TYPE_1__ ResampleContext ;
typedef TYPE_2__ AVAudioResampleContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;

int FUNC_2(AVAudioResampleContext *VAR_2, int VAR_3,
                                int VAR_4)
{
    ResampleContext *VAR_5;

    if (VAR_4 < 0)
        return FUNC_0(VAR_1);
    if (!VAR_4 && VAR_3)
        return FUNC_0(VAR_1);

    if (!VAR_2->resample_needed) {
        FUNC_1(VAR_2, VAR_0, "Unable to set resampling compensation\n");
        return FUNC_0(VAR_1);
    }
    VAR_5 = VAR_2->resample;
    VAR_5->compensation_distance = VAR_4;
    if (VAR_4) {
        VAR_5->dst_incr = VAR_5->ideal_dst_incr - VAR_5->ideal_dst_incr *
                      (int64_t)VAR_3 / VAR_4;
    } else {
        VAR_5->dst_incr = VAR_5->ideal_dst_incr;
    }

    return 0;
}
