
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct TYPE_9__ {int huff_ncode; TYPE_1__* huff_buffer; int * huff_code_ac_chrominance; int * huff_code_ac_luminance; int * huff_code_dc_chrominance; int * huff_code_dc_luminance; scalar_t__* huff_size_ac_chrominance; scalar_t__* huff_size_ac_luminance; scalar_t__* huff_size_dc_chrominance; scalar_t__* huff_size_dc_luminance; } ;
struct TYPE_8__ {void* i_tex_bits; int pb; void* header_bits; TYPE_3__* mjpeg_ctx; } ;
struct TYPE_7__ {int table_id; int code; int mant; } ;
typedef TYPE_2__ MpegEncContext ;
typedef TYPE_3__ MJpegContext ;


 int FUNC_0 (TYPE_2__*,size_t,size_t) ;
 void* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,scalar_t__,int ) ;
 int FUNC_3 (int *,int,int ) ;

void FUNC_4(MpegEncContext *VAR_0)
{
    int VAR_1, VAR_2, VAR_3, VAR_4;
    MJpegContext *VAR_5 = VAR_0->mjpeg_ctx;
    uint8_t *VAR_6[4] = {VAR_5->huff_size_dc_luminance,
                             VAR_5->huff_size_dc_chrominance,
                             VAR_5->huff_size_ac_luminance,
                             VAR_5->huff_size_ac_chrominance};
    uint16_t *VAR_7[4] = {VAR_5->huff_code_dc_luminance,
                              VAR_5->huff_code_dc_chrominance,
                              VAR_5->huff_code_ac_luminance,
                              VAR_5->huff_code_ac_chrominance};
    size_t VAR_8 = 0;
    size_t VAR_9;

    VAR_0->header_bits = FUNC_1(VAR_0);

    for (VAR_1 = 0; VAR_1 < VAR_5->huff_ncode; VAR_1++) {
        VAR_4 = VAR_5->huff_buffer[VAR_1].table_id;
        VAR_3 = VAR_5->huff_buffer[VAR_1].code;
        VAR_2 = VAR_3 & 0xf;

        VAR_8 += VAR_6[VAR_4][VAR_3] + VAR_2;
    }

    VAR_9 = (VAR_8 + 7) / 8;
    FUNC_0(VAR_0, VAR_9, VAR_9);

    for (VAR_1 = 0; VAR_1 < VAR_5->huff_ncode; VAR_1++) {
        VAR_4 = VAR_5->huff_buffer[VAR_1].table_id;
        VAR_3 = VAR_5->huff_buffer[VAR_1].code;
        VAR_2 = VAR_3 & 0xf;

        FUNC_2(&VAR_0->pb, VAR_6[VAR_4][VAR_3], VAR_7[VAR_4][VAR_3]);
        if (VAR_2 != 0) {
            FUNC_3(&VAR_0->pb, VAR_2, VAR_5->huff_buffer[VAR_1].mant);
        }
    }

    VAR_5->huff_ncode = 0;
    VAR_0->i_tex_bits = FUNC_1(VAR_0);
}
