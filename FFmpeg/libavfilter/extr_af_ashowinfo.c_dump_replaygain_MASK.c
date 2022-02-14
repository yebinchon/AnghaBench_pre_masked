
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int size; scalar_t__ data; } ;
struct TYPE_4__ {int album_peak; int album_gain; int track_peak; int track_gain; } ;
typedef TYPE_1__ AVReplayGain ;
typedef TYPE_2__ AVFrameSideData ;
typedef int AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ) ;

__attribute__((used)) static void FUNC_3(AVFilterContext *VAR_1, AVFrameSideData *VAR_2)
{
    AVReplayGain *VAR_3;

    FUNC_0(VAR_1, VAR_0, "replaygain: ");
    if (VAR_2->size < sizeof(*VAR_3)) {
        FUNC_0(VAR_1, VAR_0, "invalid data");
        return;
    }
    VAR_3 = (AVReplayGain*)VAR_2->data;

    FUNC_1(VAR_1, "track gain", VAR_3->track_gain);
    FUNC_2(VAR_1, "track peak", VAR_3->track_peak);
    FUNC_1(VAR_1, "album gain", VAR_3->album_gain);
    FUNC_2(VAR_1, "album peak", VAR_3->album_peak);
}
