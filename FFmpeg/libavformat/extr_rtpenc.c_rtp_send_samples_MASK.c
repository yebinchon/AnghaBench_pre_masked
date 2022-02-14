
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {int max_payload_size; scalar_t__ buf; scalar_t__ buf_ptr; scalar_t__ cur_timestamp; scalar_t__ timestamp; } ;
typedef TYPE_1__ RTPMuxContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_2__*,scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int const*,int) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_1,
                            const uint8_t *VAR_2, int VAR_3, int VAR_4)
{
    RTPMuxContext *VAR_5 = VAR_1->priv_data;
    int VAR_6, VAR_7, VAR_8;

    int VAR_9 = VAR_4/FUNC_2(VAR_4, 8);

    VAR_7 = (VAR_5->max_payload_size / VAR_9) * VAR_9;

    if ((VAR_4 % 8) == 0 && ((8 * VAR_3) % VAR_4) != 0)
        return FUNC_0(VAR_0);
    VAR_8 = 0;
    while (VAR_3 > 0) {
        VAR_5->buf_ptr = VAR_5->buf;
        VAR_6 = FUNC_1(VAR_7, VAR_3);


        FUNC_4(VAR_5->buf_ptr, VAR_2, VAR_6);
        VAR_5->buf_ptr += VAR_6;
        VAR_2 += VAR_6;
        VAR_3 -= VAR_6;
        VAR_5->timestamp = VAR_5->cur_timestamp + VAR_8 * 8 / VAR_4;
        FUNC_3(VAR_1, VAR_5->buf, VAR_5->buf_ptr - VAR_5->buf, 0);
        VAR_8 += (VAR_5->buf_ptr - VAR_5->buf);
    }
    return 0;
}
