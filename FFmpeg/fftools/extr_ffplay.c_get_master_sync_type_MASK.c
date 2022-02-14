
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ av_sync_type; scalar_t__ audio_st; scalar_t__ video_st; } ;
typedef TYPE_1__ VideoState ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(VideoState *VAR_3) {
    if (VAR_3->av_sync_type == VAR_2) {
        if (VAR_3->video_st)
            return VAR_2;
        else
            return VAR_0;
    } else if (VAR_3->av_sync_type == VAR_0) {
        if (VAR_3->audio_st)
            return VAR_0;
        else
            return VAR_1;
    } else {
        return VAR_1;
    }
}
