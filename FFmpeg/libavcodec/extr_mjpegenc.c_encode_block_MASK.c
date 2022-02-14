
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int int16_t ;
struct TYPE_7__ {int * huff_code_ac_chrominance; int * huff_size_ac_chrominance; int huff_code_dc_chrominance; int huff_size_dc_chrominance; int * huff_code_ac_luminance; int * huff_size_ac_luminance; int huff_code_dc_luminance; int huff_size_dc_luminance; } ;
struct TYPE_5__ {int* permutated; } ;
struct TYPE_6__ {int* last_dc; int* block_last_index; int pb; TYPE_1__ intra_scantable; TYPE_3__* mjpeg_ctx; } ;
typedef TYPE_2__ MpegEncContext ;
typedef TYPE_3__ MJpegContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int,int) ;

__attribute__((used)) static void FUNC_4(MpegEncContext *VAR_0, int16_t *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
    int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    MJpegContext *VAR_13 = VAR_0->mjpeg_ctx;
    uint8_t *VAR_14;
    uint16_t *VAR_15;


    VAR_8 = (VAR_2 <= 3 ? 0 : (VAR_2&1) + 1);
    VAR_9 = VAR_1[0];
    VAR_12 = VAR_9 - VAR_0->last_dc[VAR_8];
    if (VAR_2 < 4) {
        FUNC_1(&VAR_0->pb, VAR_12, VAR_13->huff_size_dc_luminance, VAR_13->huff_code_dc_luminance);
        VAR_14 = VAR_13->huff_size_ac_luminance;
        VAR_15 = VAR_13->huff_code_ac_luminance;
    } else {
        FUNC_1(&VAR_0->pb, VAR_12, VAR_13->huff_size_dc_chrominance, VAR_13->huff_code_dc_chrominance);
        VAR_14 = VAR_13->huff_size_ac_chrominance;
        VAR_15 = VAR_13->huff_code_ac_chrominance;
    }
    VAR_0->last_dc[VAR_8] = VAR_9;



    VAR_10 = 0;
    VAR_11 = VAR_0->block_last_index[VAR_2];
    for(VAR_6=1;VAR_6<=VAR_11;VAR_6++) {
        VAR_7 = VAR_0->intra_scantable.permutated[VAR_6];
        VAR_12 = VAR_1[VAR_7];
        if (VAR_12 == 0) {
            VAR_10++;
        } else {
            while (VAR_10 >= 16) {
                FUNC_2(&VAR_0->pb, VAR_14[0xf0], VAR_15[0xf0]);
                VAR_10 -= 16;
            }
            VAR_3 = VAR_12;
            if (VAR_12 < 0) {
                VAR_12 = -VAR_12;
                VAR_3--;
            }

            VAR_4= FUNC_0(VAR_12) + 1;
            VAR_5 = (VAR_10 << 4) | VAR_4;

            FUNC_2(&VAR_0->pb, VAR_14[VAR_5], VAR_15[VAR_5]);

            FUNC_3(&VAR_0->pb, VAR_4, VAR_3);
            VAR_10 = 0;
        }
    }


    if (VAR_11 < 63 || VAR_10 != 0)
        FUNC_2(&VAR_0->pb, VAR_14[0], VAR_15[0]);
}
