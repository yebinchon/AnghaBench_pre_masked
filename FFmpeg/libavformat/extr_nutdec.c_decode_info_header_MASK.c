
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t uint64_t ;
typedef int type_str ;
typedef int str_value ;
typedef int name ;
typedef size_t int64_t ;
struct TYPE_16__ {int * metadata; } ;
struct TYPE_15__ {size_t nb_streams; int event_flags; int * metadata; TYPE_3__** streams; int * pb; } ;
struct TYPE_12__ {long long num; long long den; } ;
struct TYPE_14__ {int event_flags; TYPE_1__ r_frame_rate; int * metadata; } ;
struct TYPE_13__ {size_t time_base_count; int * time_base; TYPE_4__* avf; } ;
typedef TYPE_2__ NUTContext ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;
typedef int AVDictionary ;
typedef TYPE_5__ AVChapter ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (unsigned int,int) ;
 int VAR_6 ;
 int FUNC_3 (int **,char*,char*,int ) ;
 int FUNC_4 (TYPE_4__*,int ,char*,...) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (int *) ;
 TYPE_5__* FUNC_7 (TYPE_4__*,int,int ,size_t,size_t,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 void* FUNC_9 (int *) ;
 size_t FUNC_10 (TYPE_2__*,int *,int,int ) ;
 void* FUNC_11 (int *) ;
 int FUNC_12 (int *,char*,int) ;
 int FUNC_13 (TYPE_4__*,char*,unsigned int) ;
 scalar_t__ FUNC_14 (int *,size_t) ;
 int FUNC_15 (char*,char*,long long*,long long*) ;
 int FUNC_16 (char const*,char*) ;

__attribute__((used)) static int FUNC_17(NUTContext *VAR_7)
{
    AVFormatContext *VAR_8 = VAR_7->avf;
    AVIOContext *VAR_9 = VAR_8->pb;
    uint64_t VAR_10, VAR_11, VAR_12;
    unsigned int VAR_13, VAR_14;
    int VAR_15, VAR_16, VAR_17 = 0;
    int64_t VAR_18, VAR_19;
    char VAR_20[256], VAR_21[1024], VAR_22[256];
    const char *VAR_23;
    int *VAR_24 = ((void*)0);
    AVChapter *VAR_25 = ((void*)0);
    AVStream *VAR_26 = ((void*)0);
    AVDictionary **VAR_27 = ((void*)0);
    int VAR_28 = 0;

    VAR_19 = FUNC_10(VAR_7, VAR_9, 1, VAR_6);
    VAR_19 += FUNC_6(VAR_9);

    FUNC_2(VAR_13, VAR_10 <= VAR_8->nb_streams);
    VAR_15 = FUNC_11(VAR_9);
    VAR_11 = FUNC_9(VAR_9);
    VAR_12 = FUNC_9(VAR_9);
    VAR_14 = FUNC_9(VAR_9);

    if (VAR_15 && !VAR_13) {
        int64_t VAR_29 = VAR_11 / VAR_7->time_base_count;
        VAR_25 = FUNC_7(VAR_8, VAR_15,
                                     VAR_7->time_base[VAR_11 %
                                                    VAR_7->time_base_count],
                                     VAR_29, VAR_29 + VAR_12, ((void*)0));
        if (!VAR_25) {
            FUNC_4(VAR_8, VAR_3, "Could not create chapter.\n");
            return FUNC_0(VAR_5);
        }
        VAR_27 = &VAR_25->metadata;
    } else if (VAR_13) {
        VAR_26 = VAR_8->streams[VAR_13 - 1];
        VAR_27 = &VAR_26->metadata;
        VAR_24 = &VAR_26->event_flags;
        VAR_28 = VAR_2;
    } else {
        VAR_27 = &VAR_8->metadata;
        VAR_24 = &VAR_8->event_flags;
        VAR_28 = VAR_1;
    }

    for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
        VAR_17 = FUNC_12(VAR_9, VAR_20, sizeof(VAR_20));
        if (VAR_17 < 0) {
            FUNC_4(VAR_8, VAR_3, "get_str failed while decoding info header\n");
            return VAR_17;
        }
        VAR_18 = FUNC_11(VAR_9);
        VAR_21[0] = 0;

        if (VAR_18 == -1) {
            VAR_23 = "UTF-8";
            VAR_17 = FUNC_12(VAR_9, VAR_21, sizeof(VAR_21));
        } else if (VAR_18 == -2) {
            VAR_17 = FUNC_12(VAR_9, VAR_22, sizeof(VAR_22));
            if (VAR_17 < 0) {
                FUNC_4(VAR_8, VAR_3, "get_str failed while decoding info header\n");
                return VAR_17;
            }
            VAR_23 = VAR_22;
            VAR_17 = FUNC_12(VAR_9, VAR_21, sizeof(VAR_21));
        } else if (VAR_18 == -3) {
            VAR_23 = "s";
            VAR_18 = FUNC_11(VAR_9);
        } else if (VAR_18 == -4) {
            VAR_23 = "t";
            VAR_18 = FUNC_9(VAR_9);
        } else if (VAR_18 < -4) {
            VAR_23 = "r";
            FUNC_11(VAR_9);
        } else {
            VAR_23 = "v";
        }

        if (VAR_17 < 0) {
            FUNC_4(VAR_8, VAR_3, "get_str failed while decoding info header\n");
            return VAR_17;
        }

        if (VAR_13 > VAR_8->nb_streams) {
            FUNC_4(VAR_8, VAR_4,
                   "invalid stream id %d for info packet\n",
                   VAR_13);
            continue;
        }

        if (!FUNC_16(VAR_23, "UTF-8")) {
            if (VAR_15 == 0 && !FUNC_16(VAR_20, "Disposition")) {
                FUNC_13(VAR_8, VAR_21, VAR_13 - 1);
                continue;
            }

            if (VAR_13 && !FUNC_16(VAR_20, "r_frame_rate")) {
                FUNC_15(VAR_21, "%d/%d", &VAR_26->r_frame_rate.num, &VAR_26->r_frame_rate.den);
                if (VAR_26->r_frame_rate.num >= 1000LL*VAR_26->r_frame_rate.den ||
                    VAR_26->r_frame_rate.num < 0 || VAR_26->r_frame_rate.den < 0)
                    VAR_26->r_frame_rate.num = VAR_26->r_frame_rate.den = 0;
                continue;
            }

            if (VAR_27 && FUNC_5(VAR_20, "Uses") &&
                FUNC_5(VAR_20, "Depends") && FUNC_5(VAR_20, "Replaces")) {
                if (VAR_24)
                    *VAR_24 |= VAR_28;
                FUNC_3(VAR_27, VAR_20, VAR_21, 0);
            }
        }
    }

    if (FUNC_14(VAR_9, VAR_19) || FUNC_8(VAR_9)) {
        FUNC_4(VAR_8, VAR_3, "info header checksum mismatch\n");
        return VAR_0;
    }
fail:
    return FUNC_1(VAR_17, 0);
}
