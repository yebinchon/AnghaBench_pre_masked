
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {int max_payload_size; int cur_timestamp; int timestamp; } ;
typedef TYPE_1__ RTPMuxContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (TYPE_2__*,int const*,int,int) ;

__attribute__((used)) static void FUNC_1(AVFormatContext *VAR_0,
                         const uint8_t *VAR_1, int VAR_2)
{
    RTPMuxContext *VAR_3 = VAR_0->priv_data;
    int VAR_4, VAR_5;

    VAR_5 = VAR_3->max_payload_size;

    while (VAR_2 > 0) {
        VAR_4 = VAR_5;
        if (VAR_4 > VAR_2)
            VAR_4 = VAR_2;

        VAR_3->timestamp = VAR_3->cur_timestamp;
        FUNC_0(VAR_0, VAR_1, VAR_4, (VAR_4 == VAR_2));

        VAR_1 += VAR_4;
        VAR_2 -= VAR_4;
    }
}
