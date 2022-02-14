
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int huff_ncode; int val_ac_chrominance; int bits_ac_chrominance; int huff_code_ac_chrominance; int huff_size_ac_chrominance; int val_ac_luminance; int bits_ac_luminance; int huff_code_ac_luminance; int huff_size_ac_luminance; int val_dc_chrominance; int bits_dc_chrominance; int huff_code_dc_chrominance; int huff_size_dc_chrominance; int val_dc_luminance; int bits_dc_luminance; int huff_code_dc_luminance; int huff_size_dc_luminance; TYPE_1__* huff_buffer; } ;
struct TYPE_4__ {int table_id; int code; } ;
typedef int MJpegEncHuffmanContext ;
typedef TYPE_2__ MJpegContext ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int *,int ,int ,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(MJpegContext *VAR_0)
{
    int VAR_1, VAR_2, VAR_3;

    MJpegEncHuffmanContext VAR_4;
    MJpegEncHuffmanContext VAR_5;
    MJpegEncHuffmanContext VAR_6;
    MJpegEncHuffmanContext VAR_7;
    MJpegEncHuffmanContext *VAR_8[4] = {&VAR_4,
                                      &VAR_5,
                                      &VAR_6,
                                      &VAR_7};
    for (VAR_1 = 0; VAR_1 < 4; VAR_1++) {
        FUNC_3(VAR_8[VAR_1]);
    }
    for (VAR_1 = 0; VAR_1 < VAR_0->huff_ncode; VAR_1++) {
        VAR_2 = VAR_0->huff_buffer[VAR_1].table_id;
        VAR_3 = VAR_0->huff_buffer[VAR_1].code;

        FUNC_2(VAR_8[VAR_2], VAR_3);
    }

    FUNC_1(&VAR_4,
                                  VAR_0->bits_dc_luminance,
                                  VAR_0->val_dc_luminance, 12);
    FUNC_1(&VAR_5,
                                  VAR_0->bits_dc_chrominance,
                                  VAR_0->val_dc_chrominance, 12);
    FUNC_1(&VAR_6,
                                  VAR_0->bits_ac_luminance,
                                  VAR_0->val_ac_luminance, 256);
    FUNC_1(&VAR_7,
                                  VAR_0->bits_ac_chrominance,
                                  VAR_0->val_ac_chrominance, 256);

    FUNC_0(VAR_0->huff_size_dc_luminance,
                                 VAR_0->huff_code_dc_luminance,
                                 VAR_0->bits_dc_luminance,
                                 VAR_0->val_dc_luminance);
    FUNC_0(VAR_0->huff_size_dc_chrominance,
                                 VAR_0->huff_code_dc_chrominance,
                                 VAR_0->bits_dc_chrominance,
                                 VAR_0->val_dc_chrominance);
    FUNC_0(VAR_0->huff_size_ac_luminance,
                                 VAR_0->huff_code_ac_luminance,
                                 VAR_0->bits_ac_luminance,
                                 VAR_0->val_ac_luminance);
    FUNC_0(VAR_0->huff_size_ac_chrominance,
                                 VAR_0->huff_code_ac_chrominance,
                                 VAR_0->bits_ac_chrominance,
                                 VAR_0->val_ac_chrominance);
}
