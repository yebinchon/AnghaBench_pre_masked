
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {TYPE_1__* priv_data; } ;
struct TYPE_7__ {int* data; scalar_t__ size; } ;
struct TYPE_6__ {size_t hd_buf_filled; int hd_buf_count; int pkt_offset; size_t out_bytes; size_t length_code; int * hd_buf; int * out_buf; int data_type; int hd_buf_size; } ;
typedef TYPE_1__ IEC61937Context ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,int *,scalar_t__) ;
 int FUNC_2 (int *,int*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_2, AVPacket *VAR_3)
{
    IEC61937Context *VAR_4 = VAR_2->priv_data;
    static const uint8_t VAR_5[4] = {6, 3, 2, 1};
    int VAR_6 = 1;

    int VAR_7 = VAR_3->data[5] >> 3;
    if (VAR_7 > 10 && (VAR_3->data[4] & 0xc0) != 0xc0)
        VAR_6 = VAR_5[(VAR_3->data[4] & 0x30) >> 4];

    VAR_4->hd_buf = FUNC_1(VAR_4->hd_buf, &VAR_4->hd_buf_size, VAR_4->hd_buf_filled + VAR_3->size);
    if (!VAR_4->hd_buf)
        return FUNC_0(VAR_0);

    FUNC_2(&VAR_4->hd_buf[VAR_4->hd_buf_filled], VAR_3->data, VAR_3->size);

    VAR_4->hd_buf_filled += VAR_3->size;
    if (++VAR_4->hd_buf_count < VAR_6){
        VAR_4->pkt_offset = 0;
        return 0;
    }
    VAR_4->data_type = VAR_1;
    VAR_4->pkt_offset = 24576;
    VAR_4->out_buf = VAR_4->hd_buf;
    VAR_4->out_bytes = VAR_4->hd_buf_filled;
    VAR_4->length_code = VAR_4->hd_buf_filled;

    VAR_4->hd_buf_count = 0;
    VAR_4->hd_buf_filled = 0;
    return 0;
}
