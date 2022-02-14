
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {int max_payload_size; int* buf_ptr; int* buf; int cur_timestamp; int timestamp; } ;
typedef TYPE_1__ RTPMuxContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (TYPE_2__*,int*,int,int ) ;
 int FUNC_1 (int*,int const*,int) ;

__attribute__((used)) static void FUNC_2(AVFormatContext *VAR_0,
                               const uint8_t *VAR_1, int VAR_2)
{
    RTPMuxContext *VAR_3 = VAR_0->priv_data;
    int VAR_4, VAR_5, VAR_6;

    VAR_6 = VAR_3->max_payload_size;


    VAR_4 = (VAR_3->buf_ptr - VAR_3->buf);
    if ((VAR_4 + VAR_2) > VAR_6) {
        if (VAR_4 > 4) {
            FUNC_0(VAR_0, VAR_3->buf, VAR_3->buf_ptr - VAR_3->buf, 0);
            VAR_3->buf_ptr = VAR_3->buf + 4;
        }
    }
    if (VAR_3->buf_ptr == VAR_3->buf + 4) {
        VAR_3->timestamp = VAR_3->cur_timestamp;
    }


    if (VAR_2 > VAR_6) {

        VAR_5 = 0;
        while (VAR_2 > 0) {
            VAR_4 = VAR_6 - 4;
            if (VAR_4 > VAR_2)
                VAR_4 = VAR_2;

            VAR_3->buf[0] = 0;
            VAR_3->buf[1] = 0;
            VAR_3->buf[2] = VAR_5 >> 8;
            VAR_3->buf[3] = VAR_5;
            FUNC_1(VAR_3->buf + 4, VAR_1, VAR_4);
            FUNC_0(VAR_0, VAR_3->buf, VAR_4 + 4, 0);
            VAR_2 -= VAR_4;
            VAR_1 += VAR_4;
            VAR_5 += VAR_4;
        }
    } else {
        if (VAR_3->buf_ptr == VAR_3->buf + 4) {

            VAR_3->buf[0] = 0;
            VAR_3->buf[1] = 0;
            VAR_3->buf[2] = 0;
            VAR_3->buf[3] = 0;
        }
        FUNC_1(VAR_3->buf_ptr, VAR_1, VAR_2);
        VAR_3->buf_ptr += VAR_2;
    }
}
