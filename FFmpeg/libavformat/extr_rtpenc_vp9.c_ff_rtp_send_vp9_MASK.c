
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {int* buf_ptr; int* buf; scalar_t__ max_payload_size; int cur_timestamp; int timestamp; } ;
typedef TYPE_1__ RTPMuxContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*,int*,scalar_t__,int) ;
 int FUNC_2 (int*,int const*,int) ;

void FUNC_3(AVFormatContext *VAR_1, const uint8_t *VAR_2, int VAR_3)
{
    RTPMuxContext *VAR_4 = VAR_1->priv_data;
    int VAR_5;

    VAR_4->timestamp = VAR_4->cur_timestamp;
    VAR_4->buf_ptr = VAR_4->buf;


    *VAR_4->buf_ptr++ = 0x08;

    while (VAR_3 > 0) {
        VAR_5 = FUNC_0(VAR_3, VAR_4->max_payload_size - VAR_0);

        if (VAR_5 == VAR_3) {

            VAR_4->buf[0] |= 0x04;
        }

        FUNC_2(VAR_4->buf_ptr, VAR_2, VAR_5);
        FUNC_1(VAR_1, VAR_4->buf, VAR_5 + VAR_0, VAR_3 == VAR_5);

        VAR_3 -= VAR_5;
        VAR_2 += VAR_5;


        VAR_4->buf[0] &= ~0x08;
    }
}
