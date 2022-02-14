
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_19__ {scalar_t__ value; } ;
struct TYPE_14__ {int den; int num; } ;
struct TYPE_18__ {int index; TYPE_2__ sample_aspect_ratio; scalar_t__ metadata; TYPE_1__* codecpar; } ;
struct TYPE_17__ {scalar_t__ mode; int fc; scalar_t__ per_stream_grouping; } ;
struct TYPE_16__ {int flags; scalar_t__ mode; int time; int track_id; scalar_t__ height; TYPE_3__* par; int entry; int timescale; int track_duration; } ;
struct TYPE_15__ {scalar_t__ codec_type; scalar_t__ height; scalar_t__ width; } ;
struct TYPE_13__ {int codec_type; } ;
typedef TYPE_4__ MOVTrack ;
typedef TYPE_5__ MOVMuxContext ;
typedef TYPE_6__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_7__ AVDictionaryEntry ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_7__* FUNC_2 (scalar_t__,char*,int *,int ) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_6__*,int ,int*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int *,int,int,int,int,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_14(AVIOContext *VAR_14, MOVMuxContext *VAR_15,
                              MOVTrack *VAR_16, AVStream *VAR_17)
{
    int64_t VAR_18 = FUNC_5(VAR_16->track_duration, VAR_9,
                                      VAR_16->timescale, VAR_5);
    int VAR_19 = VAR_18 < VAR_6 ? 0 : 1;
    int VAR_20 = VAR_11;
    int VAR_21 = 0;
    int VAR_22 = 0;

    uint32_t *VAR_23 = ((void*)0);
    int VAR_24, VAR_25;

    if (VAR_17) {
        if (VAR_15->per_stream_grouping)
            VAR_22 = VAR_17->index;
        else
            VAR_22 = VAR_17->codecpar->codec_type;

        VAR_23 = (uint32_t*)FUNC_6(VAR_17, VAR_4,
                                                            &VAR_24);
        if (VAR_23 && VAR_24 < 9 * sizeof(*VAR_23))
            VAR_23 = ((void*)0);
    }

    if (VAR_16->flags & VAR_12)
        VAR_20 |= VAR_10;

    if (VAR_16->mode == VAR_7)
        VAR_19 = 1;

    (VAR_19 == 1) ? FUNC_10(VAR_14, 104) : FUNC_10(VAR_14, 92);
    FUNC_12(VAR_14, "tkhd");
    FUNC_7(VAR_14, VAR_19);
    FUNC_9(VAR_14, VAR_20);
    if (VAR_19 == 1) {
        FUNC_11(VAR_14, VAR_16->time);
        FUNC_11(VAR_14, VAR_16->time);
    } else {
        FUNC_10(VAR_14, VAR_16->time);
        FUNC_10(VAR_14, VAR_16->time);
    }
    FUNC_10(VAR_14, VAR_16->track_id);
    FUNC_10(VAR_14, 0);
    if (!VAR_16->entry && VAR_15->mode == VAR_7)
        (VAR_19 == 1) ? FUNC_11(VAR_14, FUNC_0(0xffffffffffffffff)) : FUNC_10(VAR_14, 0xffffffff);
    else if (!VAR_16->entry)
        (VAR_19 == 1) ? FUNC_11(VAR_14, 0) : FUNC_10(VAR_14, 0);
    else
        (VAR_19 == 1) ? FUNC_11(VAR_14, VAR_18) : FUNC_10(VAR_14, VAR_18);

    FUNC_10(VAR_14, 0);
    FUNC_10(VAR_14, 0);
    FUNC_8(VAR_14, 0);
    FUNC_8(VAR_14, VAR_22);

    if (VAR_16->par->codec_type == VAR_0)
        FUNC_8(VAR_14, 0x0100);
    else
        FUNC_8(VAR_14, 0);
    FUNC_8(VAR_14, 0);
    if (VAR_23) {
        for (VAR_25 = 0; VAR_25 < 9; VAR_25++)
            FUNC_10(VAR_14, VAR_23[VAR_25]);
    } else {
        FUNC_13(VAR_14, 1, 0, 0, 1, 0, 0);
    }

    if (VAR_17 && (VAR_16->par->codec_type == VAR_2 ||
               VAR_16->par->codec_type == VAR_1)) {
        int64_t VAR_26;
        if (VAR_16->mode == VAR_8) {
            VAR_26 = VAR_16->par->width * 0x10000ULL;
        } else {
            VAR_26 = FUNC_4(VAR_17->sample_aspect_ratio.num,
                                                  VAR_16->par->width * 0x10000LL,
                                                  VAR_17->sample_aspect_ratio.den);
            if (!VAR_26 ||
                VAR_16->height != VAR_16->par->height ||
                VAR_26 > VAR_13)
                VAR_26 = VAR_16->par->width * 0x10000ULL;
        }
        if (VAR_26 > VAR_13) {
            FUNC_3(VAR_15->fc, VAR_3, "track width is too large\n");
            VAR_26 = 0;
        }
        FUNC_10(VAR_14, VAR_26);
        if (VAR_16->height > 0xFFFF) {
            FUNC_3(VAR_15->fc, VAR_3, "track height is too large\n");
            FUNC_10(VAR_14, 0);
        } else
            FUNC_10(VAR_14, VAR_16->height * 0x10000U);
    } else {
        FUNC_10(VAR_14, 0);
        FUNC_10(VAR_14, 0);
    }
    return 0x5c;
}
