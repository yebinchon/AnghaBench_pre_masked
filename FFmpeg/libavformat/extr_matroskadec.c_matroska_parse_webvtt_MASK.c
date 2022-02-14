
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef char uint8_t ;
typedef void* uint64_t ;
typedef int int64_t ;
struct TYPE_12__ {char* data; int pos; void* duration; void* pts; int stream_index; } ;
struct TYPE_11__ {int index; } ;
struct TYPE_10__ {int queue_end; int queue; } ;
typedef int MatroskaTrack ;
typedef TYPE_1__ MatroskaDemuxContext ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVPacket ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,int) ;
 char* FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *,int *,TYPE_3__*,int ) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static int FUNC_6(MatroskaDemuxContext *VAR_4,
                                 MatroskaTrack *VAR_5,
                                 AVStream *VAR_6,
                                 uint8_t *VAR_7, int VAR_8,
                                 uint64_t VAR_9,
                                 uint64_t VAR_10,
                                 int64_t VAR_11)
{
    AVPacket VAR_12, *VAR_13 = &VAR_12;
    uint8_t *VAR_14, *VAR_15, *VAR_16, *VAR_17;
    int VAR_18, VAR_19, VAR_20;
    uint8_t *VAR_21, *VAR_22;
    int VAR_23;

    if (VAR_8 <= 0)
        return VAR_0;

    VAR_21 = VAR_7;
    VAR_22 = VAR_7 + VAR_8;

    VAR_14 = VAR_21;
    VAR_18 = -1;
    while (VAR_21 < VAR_22) {
        if (*VAR_21 == '\r' || *VAR_21 == '\n') {
            VAR_18 = VAR_21 - VAR_14;
            if (*VAR_21 == '\r')
                VAR_21++;
            break;
        }
        VAR_21++;
    }

    if (VAR_21 >= VAR_22 || *VAR_21 != '\n')
        return VAR_0;
    VAR_21++;

    VAR_15 = VAR_21;
    VAR_19 = -1;
    while (VAR_21 < VAR_22) {
        if (*VAR_21 == '\r' || *VAR_21 == '\n') {
            VAR_19 = VAR_21 - VAR_15;
            if (*VAR_21 == '\r')
                VAR_21++;
            break;
        }
        VAR_21++;
    }

    if (VAR_21 >= VAR_22 || *VAR_21 != '\n')
        return VAR_0;
    VAR_21++;

    VAR_16 = VAR_21;
    VAR_20 = VAR_22 - VAR_21;
    while (VAR_20 > 0) {
        const int VAR_24 = VAR_20 - 1;
        const uint8_t VAR_25 = VAR_21[VAR_24];
        if (VAR_25 != '\r' && VAR_25 != '\n')
            break;
        VAR_20 = VAR_24;
    }

    if (VAR_20 <= 0)
        return VAR_0;

    VAR_23 = FUNC_1(VAR_13, VAR_20);
    if (VAR_23 < 0) {
        return VAR_23;
    }

    FUNC_5(VAR_13->data, VAR_16, VAR_20);

    if (VAR_18 > 0) {
        VAR_17 = FUNC_2(VAR_13,
                                      VAR_1,
                                      VAR_18);
        if (!VAR_17) {
            FUNC_3(VAR_13);
            return FUNC_0(VAR_3);
        }
        FUNC_5(VAR_17, VAR_14, VAR_18);
    }

    if (VAR_19 > 0) {
        VAR_17 = FUNC_2(VAR_13,
                                      VAR_2,
                                      VAR_19);
        if (!VAR_17) {
            FUNC_3(VAR_13);
            return FUNC_0(VAR_3);
        }
        FUNC_5(VAR_17, VAR_15, VAR_19);
    }




    VAR_13->stream_index = VAR_6->index;
    VAR_13->pts = VAR_9;




    VAR_13->duration = VAR_10;
    VAR_13->pos = VAR_11;

    VAR_23 = FUNC_4(&VAR_4->queue, &VAR_4->queue_end, VAR_13, 0);
    if (VAR_23 < 0) {
        FUNC_3(VAR_13);
        return FUNC_0(VAR_3);
    }

    return 0;
}
