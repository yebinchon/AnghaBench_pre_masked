
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_23__ {int nb_streams; TYPE_4__** streams; scalar_t__ pb; scalar_t__ skip_estimate_duration_from_pts; } ;
struct TYPE_22__ {size_t stream_index; scalar_t__ pts; scalar_t__ duration; scalar_t__ size; } ;
struct TYPE_18__ {long long den; long long num; } ;
struct TYPE_21__ {scalar_t__ start_time; scalar_t__ first_dts; scalar_t__ duration; scalar_t__ cur_dts; scalar_t__* pts_buffer; scalar_t__ last_dts_for_order_check; scalar_t__ last_IP_pts; TYPE_3__* codecpar; TYPE_2__* info; TYPE_1__ time_base; int * parser; } ;
struct TYPE_20__ {int codec_type; } ;
struct TYPE_19__ {scalar_t__ last_duration; } ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVPacket ;
typedef TYPE_6__ AVFormatContext ;


 int FUNC_0 (int ) ;

 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 long long FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (TYPE_6__*,int ,char*,...) ;
 int FUNC_4 (TYPE_6__*,char*,char*,int ) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int,int,int,int ) ;
 int FUNC_8 (scalar_t__,int,int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (TYPE_6__*,int*,int*,TYPE_4__*,int *,TYPE_5__*) ;
 int FUNC_11 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_12 (TYPE_6__*) ;
 int FUNC_13 (TYPE_6__*) ;

__attribute__((used)) static void FUNC_14(AVFormatContext *VAR_11, int64_t VAR_12)
{
    AVPacket VAR_13, *VAR_14 = &VAR_13;
    AVStream *VAR_15;
    int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
    int VAR_21 = 0;
    int VAR_22;
    int64_t VAR_23, VAR_24, VAR_25;
    int VAR_26 = 0;


    FUNC_13(VAR_11);

    for (VAR_19 = 0; VAR_19 < VAR_11->nb_streams; VAR_19++) {
        VAR_15 = VAR_11->streams[VAR_19];
        if (VAR_15->start_time == VAR_3 &&
            VAR_15->first_dts == VAR_3 &&
            VAR_15->codecpar->codec_type != VAR_0)
            FUNC_3(VAR_11, VAR_2,
                   "start time for stream %d is not set in estimate_timings_from_pts\n", VAR_19);

        if (VAR_15->parser) {
            FUNC_6(VAR_15->parser);
            VAR_15->parser = ((void*)0);
        }
    }

    if (VAR_11->skip_estimate_duration_from_pts) {
        FUNC_3(VAR_11, VAR_1, "Skipping duration calculation in estimate_timings_from_pts\n");
        goto skip_duration_calc;
    }

    FUNC_4(VAR_11, "skip_changes", "1", VAR_4);


    VAR_23 = VAR_11->pb ? FUNC_9(VAR_11->pb) : 0;
    do {
        VAR_22 = VAR_21;
        VAR_24 = VAR_23 - (VAR_6 << VAR_26);
        if (VAR_24 < 0)
            VAR_24 = 0;

        FUNC_8(VAR_11->pb, VAR_24, VAR_10);
        VAR_18 = 0;
        for (;;) {
            if (VAR_18 >= VAR_6 << (FUNC_2(VAR_26 - 1, 0)))
                break;

            do {
                VAR_20 = FUNC_11(VAR_11, VAR_14);
            } while (VAR_20 == FUNC_0(VAR_8));
            if (VAR_20 != 0)
                break;
            VAR_18 += VAR_14->size;
            VAR_15 = VAR_11->streams[VAR_14->stream_index];
            if (VAR_14->pts != VAR_3 &&
                (VAR_15->start_time != VAR_3 ||
                 VAR_15->first_dts != VAR_3)) {
                if (VAR_14->duration == 0) {
                    FUNC_10(VAR_11, &VAR_16, &VAR_17, VAR_15, VAR_15->parser, VAR_14);
                    if (VAR_17 && VAR_16) {
                        VAR_14->duration = FUNC_7(1,
                                           VAR_16 * (int64_t) VAR_15->time_base.den,
                                           VAR_17 * (int64_t) VAR_15->time_base.num,
                                           VAR_5);
                    }
                }
                VAR_25 = VAR_14->pts + VAR_14->duration;
                VAR_21 = 1;
                if (VAR_15->start_time != VAR_3)
                    VAR_25 -= VAR_15->start_time;
                else
                    VAR_25 -= VAR_15->first_dts;
                if (VAR_25 > 0) {
                    if (VAR_15->duration == VAR_3 || VAR_15->info->last_duration<= 0 ||
                        (VAR_15->duration < VAR_25 && FUNC_1(VAR_25 - VAR_15->info->last_duration) < 60LL*VAR_15->time_base.den / VAR_15->time_base.num))
                        VAR_15->duration = VAR_25;
                    VAR_15->info->last_duration = VAR_25;
                }
            }
            FUNC_5(VAR_14);
        }


        if (!VAR_22) {
            VAR_22 = 1;
            for (VAR_19 = 0; VAR_19 < VAR_11->nb_streams; VAR_19++) {
                VAR_15 = VAR_11->streams[VAR_19];
                switch (VAR_15->codecpar->codec_type) {
                    case 128:
                    case 129:
                        if (VAR_15->duration == VAR_3)
                            VAR_22 = 0;
                }
            }
        }
    } while (!VAR_22 &&
             VAR_24 &&
             ++VAR_26 <= VAR_7);

    FUNC_4(VAR_11, "skip_changes", "0", VAR_4);


    for (VAR_19 = 0; VAR_19 < VAR_11->nb_streams; VAR_19++) {
        VAR_15 = VAR_11->streams[VAR_19];
        if (VAR_15->duration == VAR_3) {
            switch (VAR_15->codecpar->codec_type) {
            case 128:
            case 129:
                if (VAR_15->start_time != VAR_3 || VAR_15->first_dts != VAR_3) {
                    FUNC_3(VAR_11, VAR_2, "stream %d : no PTS found at end of file, duration not set\n", VAR_19);
                } else
                    FUNC_3(VAR_11, VAR_2, "stream %d : no TS found at start of file, duration not set\n", VAR_19);
            }
        }
    }
skip_duration_calc:
    FUNC_12(VAR_11);

    FUNC_8(VAR_11->pb, VAR_12, VAR_10);
    for (VAR_19 = 0; VAR_19 < VAR_11->nb_streams; VAR_19++) {
        int VAR_27;

        VAR_15 = VAR_11->streams[VAR_19];
        VAR_15->cur_dts = VAR_15->first_dts;
        VAR_15->last_IP_pts = VAR_3;
        VAR_15->last_dts_for_order_check = VAR_3;
        for (VAR_27 = 0; VAR_27 < VAR_9 + 1; VAR_27++)
            VAR_15->pts_buffer[VAR_27] = VAR_3;
    }
}
