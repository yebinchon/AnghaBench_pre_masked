
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {TYPE_1__* priv_data; } ;
struct TYPE_6__ {scalar_t__ nal_length_size; int buf; int buf_ptr; int cur_timestamp; int timestamp; } ;
typedef TYPE_1__ RTPMuxContext ;
typedef TYPE_2__ AVFormatContext ;


 int * FUNC_0 (int const*,int const*) ;
 int * FUNC_1 (int const*,int const*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int const*,int,int) ;

void FUNC_4(AVFormatContext *VAR_0, const uint8_t *VAR_1, int VAR_2)
{
    const uint8_t *VAR_3, *VAR_4 = VAR_1 + VAR_2;
    RTPMuxContext *VAR_5 = VAR_0->priv_data;

    VAR_5->timestamp = VAR_5->cur_timestamp;
    VAR_5->buf_ptr = VAR_5->buf;
    if (VAR_5->nal_length_size)
        VAR_3 = FUNC_1(VAR_1, VAR_4, VAR_5->nal_length_size) ? VAR_1 : VAR_4;
    else
        VAR_3 = FUNC_0(VAR_1, VAR_4);
    while (VAR_3 < VAR_4) {
        const uint8_t *VAR_6;

        if (VAR_5->nal_length_size) {
            VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5->nal_length_size);
            if (!VAR_6)
                VAR_6 = VAR_4;
            VAR_3 += VAR_5->nal_length_size;
        } else {
            while (!*(VAR_3++));
            VAR_6 = FUNC_0(VAR_3, VAR_4);
        }
        FUNC_3(VAR_0, VAR_3, VAR_6 - VAR_3, VAR_6 == VAR_4);
        VAR_3 = VAR_6;
    }
    FUNC_2(VAR_0, 1);
}
