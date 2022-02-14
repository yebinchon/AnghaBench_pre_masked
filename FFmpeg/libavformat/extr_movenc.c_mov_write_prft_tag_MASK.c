
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_9__ {scalar_t__ write_prft; int fc; TYPE_3__* tracks; } ;
struct TYPE_8__ {TYPE_2__* cluster; int track_id; TYPE_1__* st; int entry; } ;
struct TYPE_7__ {scalar_t__ pts; } ;
struct TYPE_6__ {int time_base; } ;
typedef TYPE_3__ MOVTrack ;
typedef TYPE_4__ MOVMuxContext ;
typedef int AVIOContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ,char*,...) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_11(AVIOContext *VAR_6, MOVMuxContext *VAR_7, int VAR_8)
{
    int64_t VAR_9 = FUNC_2(VAR_6), VAR_10, VAR_11;
    MOVTrack *VAR_12;



    if (VAR_8 > 0)
        return 0;
    VAR_12 = &(VAR_7->tracks[0]);

    if (!VAR_12->entry) {
        FUNC_0(VAR_7->fc, VAR_0, "Unable to write PRFT, no entries in the track\n");
        return 0;
    }

    if (VAR_12->cluster[0].pts == VAR_1) {
        FUNC_0(VAR_7->fc, VAR_0, "Unable to write PRFT, first PTS is invalid\n");
        return 0;
    }

    if (VAR_7->write_prft == VAR_4) {
        VAR_11 = FUNC_7(FUNC_8());
    } else if (VAR_7->write_prft == VAR_3) {
        VAR_10 = FUNC_1(VAR_12->cluster[0].pts,
                              VAR_12->st->time_base, VAR_2);
        VAR_11 = FUNC_7(VAR_10 + VAR_5);
    } else {
        FUNC_0(VAR_7->fc, VAR_0, "Unsupported PRFT box configuration: %d\n",
               VAR_7->write_prft);
        return 0;
    }

    FUNC_5(VAR_6, 0);
    FUNC_9(VAR_6, "prft");
    FUNC_3(VAR_6, 1);
    FUNC_4(VAR_6, 0);
    FUNC_5(VAR_6, VAR_12->track_id);
    FUNC_6(VAR_6, VAR_11);
    FUNC_6(VAR_6, VAR_12->cluster[0].pts);
    return FUNC_10(VAR_6, VAR_9);
}
