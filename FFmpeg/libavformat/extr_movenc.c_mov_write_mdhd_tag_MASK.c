
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ mode; } ;
struct TYPE_5__ {int track_duration; scalar_t__ mode; int time; int timescale; int language; int entry; } ;
typedef TYPE_1__ MOVTrack ;
typedef TYPE_2__ MOVMuxContext ;
typedef int AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,char*) ;

__attribute__((used)) static int FUNC_8(AVIOContext *VAR_4, MOVMuxContext *VAR_5,
                              MOVTrack *VAR_6)
{
    int VAR_7 = VAR_6->track_duration < VAR_1 ? 0 : 1;

    if (VAR_6->mode == VAR_2)
        VAR_7 = 1;

    (VAR_7 == 1) ? FUNC_5(VAR_4, 44) : FUNC_5(VAR_4, 32);
    FUNC_7(VAR_4, "mdhd");
    FUNC_2(VAR_4, VAR_7);
    FUNC_4(VAR_4, 0);
    if (VAR_7 == 1) {
        FUNC_6(VAR_4, VAR_6->time);
        FUNC_6(VAR_4, VAR_6->time);
    } else {
        FUNC_5(VAR_4, VAR_6->time);
        FUNC_5(VAR_4, VAR_6->time);
    }
    FUNC_5(VAR_4, VAR_6->timescale);
    if (!VAR_6->entry && VAR_5->mode == VAR_2)
        (VAR_7 == 1) ? FUNC_6(VAR_4, FUNC_0(0xffffffffffffffff)) : FUNC_5(VAR_4, 0xffffffff);
    else if (!VAR_6->entry)
        (VAR_7 == 1) ? FUNC_6(VAR_4, 0) : FUNC_5(VAR_4, 0);
    else
        (VAR_7 == 1) ? FUNC_6(VAR_4, VAR_6->track_duration) : FUNC_5(VAR_4, VAR_6->track_duration);
    FUNC_3(VAR_4, VAR_6->language);
    FUNC_3(VAR_4, 0);

    if (VAR_7 != 0 && VAR_6->mode == VAR_3) {
        FUNC_1(((void*)0), VAR_0,
               "FATAL error, file duration too long for timebase, this file will not be\n"
               "playable with QuickTime. Choose a different timebase with "
               "-video_track_timescale or a different container format\n");
    }

    return 32;
}
