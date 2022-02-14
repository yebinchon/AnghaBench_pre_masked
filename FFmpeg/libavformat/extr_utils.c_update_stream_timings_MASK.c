
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ int64_t ;
struct TYPE_16__ {scalar_t__ den; } ;
struct TYPE_15__ {int nb_streams; int nb_programs; scalar_t__ duration; double bit_rate; scalar_t__ pb; TYPE_3__** programs; scalar_t__ start_time; TYPE_2__** streams; } ;
struct TYPE_14__ {scalar_t__ start_time; scalar_t__ end_time; } ;
struct TYPE_13__ {scalar_t__ start_time; scalar_t__ duration; TYPE_6__ time_base; TYPE_1__* codecpar; } ;
struct TYPE_12__ {scalar_t__ codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVProgram ;
typedef TYPE_4__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_3__* FUNC_2 (TYPE_4__*,TYPE_3__*,int) ;
 int FUNC_3 (TYPE_4__*,int ,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,TYPE_6__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,TYPE_6__,int ,int) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(AVFormatContext *VAR_10)
{
    int64_t VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    int64_t VAR_17, VAR_18, VAR_19, VAR_20;
    int VAR_21;
    AVProgram *VAR_22;

    VAR_11 = VAR_8;
    VAR_13 = VAR_8;
    VAR_14 = VAR_9;
    VAR_16 = VAR_9;
    VAR_17 = VAR_9;
    VAR_19 = VAR_9;

    for (VAR_21 = 0; VAR_21 < VAR_10->nb_streams; VAR_21++) {
        AVStream *VAR_23 = VAR_10->streams[VAR_21];
        int VAR_24 = VAR_23->codecpar->codec_type == VAR_1 ||
                      VAR_23->codecpar->codec_type == VAR_0;
        if (VAR_23->start_time != VAR_3 && VAR_23->time_base.den) {
            VAR_12 = FUNC_4(VAR_23->start_time, VAR_23->time_base,
                                       VAR_7);
            if (VAR_24)
                VAR_13 = FUNC_1(VAR_13, VAR_12);
            else
                VAR_11 = FUNC_1(VAR_11, VAR_12);
            VAR_15 = FUNC_5(VAR_23->duration, VAR_23->time_base,
                                         VAR_7,
                                         VAR_4|VAR_5);
            if (VAR_15 != VAR_3 && (VAR_15 > 0 ? VAR_12 <= VAR_8 - VAR_15 : VAR_12 >= VAR_9 - VAR_15)) {
                VAR_15 += VAR_12;
                if (VAR_24)
                    VAR_16 = FUNC_0(VAR_16, VAR_15);
                else
                    VAR_14 = FUNC_0(VAR_14, VAR_15);
            }
            for (VAR_22 = ((void*)0); (VAR_22 = FUNC_2(VAR_10, VAR_22, VAR_21)); ) {
                if (VAR_22->start_time == VAR_3 || VAR_22->start_time > VAR_12)
                    VAR_22->start_time = VAR_12;
                if (VAR_22->end_time < VAR_15)
                    VAR_22->end_time = VAR_15;
            }
        }
        if (VAR_23->duration != VAR_3) {
            VAR_18 = FUNC_4(VAR_23->duration, VAR_23->time_base,
                                     VAR_7);
            if (VAR_24)
                VAR_19 = FUNC_0(VAR_19, VAR_18);
            else
                VAR_17 = FUNC_0(VAR_17, VAR_18);
        }
    }
    if (VAR_11 == VAR_8 || (VAR_11 > VAR_13 && VAR_11 - (uint64_t)VAR_13 < VAR_6))
        VAR_11 = VAR_13;
    else if (VAR_11 > VAR_13)
        FUNC_3(VAR_10, VAR_2, "Ignoring outlier non primary stream starttime %f\n", VAR_13 / (float)VAR_6);

    if (VAR_14 == VAR_9 || (VAR_14 < VAR_16 && VAR_16 - (uint64_t)VAR_14 < VAR_6))
        VAR_14 = VAR_16;
    else if (VAR_14 < VAR_16)
        FUNC_3(VAR_10, VAR_2, "Ignoring outlier non primary stream endtime %f\n", VAR_16 / (float)VAR_6);

     if (VAR_17 == VAR_9 || (VAR_17 < VAR_19 && VAR_19 - VAR_17 < VAR_6))
         VAR_17 = VAR_19;
     else if (VAR_17 < VAR_19)
         FUNC_3(VAR_10, VAR_2, "Ignoring outlier non primary stream duration %f\n", VAR_19 / (float)VAR_6);

    if (VAR_11 != VAR_8) {
        VAR_10->start_time = VAR_11;
        if (VAR_14 != VAR_9) {
            if (VAR_10->nb_programs > 1) {
                for (VAR_21 = 0; VAR_21 < VAR_10->nb_programs; VAR_21++) {
                    VAR_22 = VAR_10->programs[VAR_21];
                    if (VAR_22->start_time != VAR_3 &&
                        VAR_22->end_time > VAR_22->start_time &&
                        VAR_22->end_time - (uint64_t)VAR_22->start_time <= VAR_8)
                        VAR_17 = FUNC_0(VAR_17, VAR_22->end_time - VAR_22->start_time);
                }
            } else if (VAR_14 >= VAR_11 && VAR_14 - (uint64_t)VAR_11 <= VAR_8) {
                VAR_17 = FUNC_0(VAR_17, VAR_14 - VAR_11);
            }
        }
    }
    if (VAR_17 != VAR_9 && VAR_17 > 0 && VAR_10->duration == VAR_3) {
        VAR_10->duration = VAR_17;
    }
    if (VAR_10->pb && (VAR_20 = FUNC_6(VAR_10->pb)) > 0 && VAR_10->duration > 0) {

        double VAR_25 = (double) VAR_20 * 8.0 * VAR_6 /
                         (double) VAR_10->duration;
        if (VAR_25 >= 0 && VAR_25 <= VAR_8)
            VAR_10->bit_rate = VAR_25;
    }
}
