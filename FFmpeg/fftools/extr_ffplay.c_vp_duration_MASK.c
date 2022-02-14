
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {double max_frame_duration; } ;
typedef TYPE_1__ VideoState ;
struct TYPE_7__ {scalar_t__ serial; double pts; double duration; } ;
typedef TYPE_2__ Frame ;


 scalar_t__ FUNC_0 (double) ;

__attribute__((used)) static double FUNC_1(VideoState *VAR_0, Frame *VAR_1, Frame *VAR_2) {
    if (VAR_1->serial == VAR_2->serial) {
        double VAR_3 = VAR_2->pts - VAR_1->pts;
        if (FUNC_0(VAR_3) || VAR_3 <= 0 || VAR_3 > VAR_0->max_frame_duration)
            return VAR_1->duration;
        else
            return VAR_3;
    } else {
        return 0.0;
    }
}
