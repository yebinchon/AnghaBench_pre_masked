
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* int64_t ;
struct TYPE_16__ {int packet_timestamp_start; int packet_size; int multi_payloads_present; int packet_size_left; scalar_t__ packet_nb_payloads; void* packet_timestamp_end; int pb; } ;
struct TYPE_15__ {int seq; } ;
struct TYPE_14__ {TYPE_5__* priv_data; } ;
struct TYPE_13__ {TYPE_1__* codecpar; } ;
struct TYPE_12__ {scalar_t__ codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ ASFStream ;
typedef TYPE_5__ ASFContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int FUNC_0 (int *,int const*,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*,scalar_t__,int,int,int,int) ;

__attribute__((used)) static void FUNC_3(AVFormatContext *VAR_10, ASFStream *VAR_11, AVStream *VAR_12,
                      int64_t VAR_13, const uint8_t *VAR_14,
                      int VAR_15, int VAR_16)
{
    ASFContext *VAR_17 = VAR_10->priv_data;
    int VAR_18, VAR_19, VAR_20;

    VAR_18 = 0;
    while (VAR_18 < VAR_15) {
        VAR_19 = VAR_15 - VAR_18;
        if (VAR_17->packet_timestamp_start == -1) {
            const int VAR_21 = (VAR_17->packet_size - VAR_3);
            VAR_17->multi_payloads_present = (VAR_19 < VAR_21);

            VAR_17->packet_size_left = VAR_17->packet_size;
            if (VAR_17->multi_payloads_present) {
                VAR_20 = VAR_21 - 1;
            } else {
                VAR_20 = VAR_17->packet_size - VAR_8;
            }
            VAR_17->packet_timestamp_start = VAR_13;
        } else {

            VAR_20 = VAR_17->packet_size_left -
                        VAR_5 -
                        VAR_4 - 1;

            if (VAR_20 < VAR_19 &&
                VAR_12->codecpar->codec_type == VAR_1) {
                FUNC_1(VAR_10);
                continue;
            }
            if (VAR_17->packet_timestamp_start > VAR_2 - VAR_9 ||
                VAR_13 > VAR_17->packet_timestamp_start + VAR_9) {
                FUNC_1(VAR_10);
                continue;
            }
        }
        if (VAR_20 > 0) {
            if (VAR_19 > VAR_20)
                VAR_19 = VAR_20;
            else if (VAR_19 == (VAR_20 - 1))
                VAR_19 = VAR_20 - 2;

            FUNC_2(VAR_10, VAR_11, VAR_13 + VAR_7,
                               VAR_15, VAR_18, VAR_19, VAR_16);
            FUNC_0(&VAR_17->pb, VAR_14, VAR_19);

            if (VAR_17->multi_payloads_present)
                VAR_17->packet_size_left -= (VAR_19 + VAR_5);
            else
                VAR_17->packet_size_left -= (VAR_19 + VAR_6);
            VAR_17->packet_timestamp_end = VAR_13;

            VAR_17->packet_nb_payloads++;
        } else {
            VAR_19 = 0;
        }
        VAR_18 += VAR_19;
        VAR_14 += VAR_19;

        if (!VAR_17->multi_payloads_present)
            FUNC_1(VAR_10);
        else if (VAR_17->packet_size_left <= (VAR_5 + VAR_4 + 1))
            FUNC_1(VAR_10);
        else if (VAR_17->packet_nb_payloads == VAR_0)
            FUNC_1(VAR_10);
    }
    VAR_11->seq++;
}
