
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ int64_t ;
typedef int int32_t ;
struct TYPE_3__ {int max_packet_size; scalar_t__ prev_rtp_ts; scalar_t__ cur_rtp_ts_unwrapped; int sample_queue; } ;
typedef TYPE_1__ MOVTrack ;
typedef int AVIOContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const) ;
 int VAR_1 ;
 int FUNC_3 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,char const*,int) ;
 int FUNC_8 (char const*,int,int *,int*,int *) ;

__attribute__((used)) static int FUNC_9(AVIOContext *VAR_2, const uint8_t *VAR_3,
                              int VAR_4, MOVTrack *VAR_5, int64_t *VAR_6)
{
    int64_t VAR_7;
    int64_t VAR_8, VAR_9;
    int VAR_10 = 0, VAR_11;

    VAR_8 = FUNC_4(VAR_2);

    FUNC_5(VAR_2, 0);
    FUNC_5(VAR_2, 0);

    while (VAR_4 > 4) {
        uint32_t VAR_12 = FUNC_1(VAR_3);
        uint16_t VAR_13;
        uint32_t VAR_14;
        int32_t VAR_15;

        VAR_3 += 4;
        VAR_4 -= 4;
        if (VAR_12 > VAR_4 || VAR_12 <= 12)
            break;
        if (FUNC_2(VAR_3[1])) {

            VAR_3 += VAR_12;
            VAR_4 -= VAR_12;
            continue;
        }

        if (VAR_12 > VAR_5->max_packet_size)
            VAR_5->max_packet_size = VAR_12;

        VAR_13 = FUNC_0(&VAR_3[2]);
        VAR_14 = FUNC_1(&VAR_3[4]);

        if (VAR_5->prev_rtp_ts == 0)
            VAR_5->prev_rtp_ts = VAR_14;


        VAR_15 = VAR_14 - VAR_5->prev_rtp_ts;
        if (VAR_15 > 0) {
            VAR_5->cur_rtp_ts_unwrapped += VAR_15;
            VAR_5->prev_rtp_ts = VAR_14;
            VAR_15 = 0;
        }
        if (*VAR_6 == VAR_0)
            *VAR_6 = VAR_5->cur_rtp_ts_unwrapped;

        VAR_10++;

        FUNC_6(VAR_2, 0);
        FUNC_7(VAR_2, VAR_3, 2);
        FUNC_5(VAR_2, VAR_13);
        FUNC_5(VAR_2, VAR_15 ? 4 : 0);
        VAR_9 = FUNC_4(VAR_2);
        FUNC_5(VAR_2, 0);
        if (VAR_15) {
            FUNC_6(VAR_2, 16);
            FUNC_6(VAR_2, 12);
            FUNC_7(VAR_2, "rtpo", 4);
            FUNC_6(VAR_2, VAR_15);
        }

        VAR_3 += 12;
        VAR_4 -= 12;
        VAR_12 -= 12;

        VAR_11 = 0;

        FUNC_8(VAR_3, VAR_12, VAR_2, &VAR_11, &VAR_5->sample_queue);
        VAR_3 += VAR_12;
        VAR_4 -= VAR_12;

        VAR_7 = FUNC_4(VAR_2);
        FUNC_3(VAR_2, VAR_9, VAR_1);
        FUNC_5(VAR_2, VAR_11);
        FUNC_3(VAR_2, VAR_7, VAR_1);
    }

    VAR_7 = FUNC_4(VAR_2);
    FUNC_3(VAR_2, VAR_8, VAR_1);
    FUNC_5(VAR_2, VAR_10);
    FUNC_3(VAR_2, VAR_7, VAR_1);
    return VAR_10;
}
