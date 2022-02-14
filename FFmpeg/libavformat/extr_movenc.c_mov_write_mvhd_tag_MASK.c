
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_5__ {int nb_streams; int flags; scalar_t__ time; TYPE_1__* tracks; } ;
struct TYPE_4__ {scalar_t__ entry; int track_id; scalar_t__ timescale; int track_duration; } ;
typedef TYPE_2__ MOVMuxContext ;
typedef int AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int,scalar_t__,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int,int ,int ,int,int ,int ) ;

__attribute__((used)) static int FUNC_8(AVIOContext *VAR_4, MOVMuxContext *VAR_5)
{
    int VAR_6 = 1, VAR_7;
    int64_t VAR_8 = 0;
    int VAR_9;

    for (VAR_7 = 0; VAR_7 < VAR_5->nb_streams; VAR_7++) {
        if (VAR_5->tracks[VAR_7].entry > 0 && VAR_5->tracks[VAR_7].timescale) {
            int64_t VAR_10 = FUNC_0(VAR_5->tracks[VAR_7].track_duration,
                                                VAR_2,
                                                VAR_5->tracks[VAR_7].timescale,
                                                VAR_0);
            if (VAR_8 < VAR_10)
                VAR_8 = VAR_10;
            if (VAR_6 < VAR_5->tracks[VAR_7].track_id)
                VAR_6 = VAR_5->tracks[VAR_7].track_id;
        }
    }


    if (VAR_5->flags & VAR_1) {
        VAR_8 = 0;
        VAR_6 = 1;
    }

    VAR_9 = VAR_8 < VAR_3 ? 0 : 1;
    FUNC_4(VAR_4, VAR_9 == 1 ? 120 : 108);

    FUNC_6(VAR_4, "mvhd");
    FUNC_1(VAR_4, VAR_9);
    FUNC_3(VAR_4, 0);
    if (VAR_9 == 1) {
        FUNC_5(VAR_4, VAR_5->time);
        FUNC_5(VAR_4, VAR_5->time);
    } else {
        FUNC_4(VAR_4, VAR_5->time);
        FUNC_4(VAR_4, VAR_5->time);
    }
    FUNC_4(VAR_4, VAR_2);
    (VAR_9 == 1) ? FUNC_5(VAR_4, VAR_8) : FUNC_4(VAR_4, VAR_8);

    FUNC_4(VAR_4, 0x00010000);
    FUNC_2(VAR_4, 0x0100);
    FUNC_2(VAR_4, 0);
    FUNC_4(VAR_4, 0);
    FUNC_4(VAR_4, 0);


    FUNC_7(VAR_4, 1, 0, 0, 1, 0, 0);

    FUNC_4(VAR_4, 0);
    FUNC_4(VAR_4, 0);
    FUNC_4(VAR_4, 0);
    FUNC_4(VAR_4, 0);
    FUNC_4(VAR_4, 0);
    FUNC_4(VAR_4, 0);
    FUNC_4(VAR_4, VAR_6 + 1);
    return 0x6c;
}
