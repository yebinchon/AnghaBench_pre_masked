
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {int max_payload_size; int buf_ptr; int buf; int cur_timestamp; int timestamp; } ;
typedef TYPE_1__ RTPMuxContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int,int,int ) ;
 int FUNC_1 (int,int const*,int) ;

__attribute__((used)) static void FUNC_2(AVFormatContext *VAR_1,
                                const uint8_t *VAR_2, int VAR_3)
{
    RTPMuxContext *VAR_4 = VAR_1->priv_data;
    int VAR_5, VAR_6;

    VAR_4->timestamp = VAR_4->cur_timestamp;
    while (VAR_3 >= VAR_0) {
        VAR_5 = VAR_4->max_payload_size - (VAR_4->buf_ptr - VAR_4->buf);
        if (VAR_5 > VAR_3)
            VAR_5 = VAR_3;
        FUNC_1(VAR_4->buf_ptr, VAR_2, VAR_5);
        VAR_2 += VAR_5;
        VAR_3 -= VAR_5;
        VAR_4->buf_ptr += VAR_5;

        VAR_6 = VAR_4->buf_ptr - VAR_4->buf;
        if (VAR_6 >= VAR_4->max_payload_size) {
            FUNC_0(VAR_1, VAR_4->buf, VAR_6, 0);
            VAR_4->buf_ptr = VAR_4->buf;
        }
    }
}
