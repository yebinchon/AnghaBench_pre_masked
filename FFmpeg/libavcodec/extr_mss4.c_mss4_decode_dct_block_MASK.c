
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int** imgbuf; TYPE_1__* pic; int block; int ** dc_cache; int ** prev_dc; int * quant_mat; scalar_t__ ac_vlc; scalar_t__ dc_vlc; } ;
struct TYPE_4__ {int* linesize; } ;
typedef TYPE_2__ MSS4Context ;
typedef int GetBitContext ;


 int FUNC_0 (int*,int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int*,int,int ) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__,int ,int *,int,int,int ) ;

__attribute__((used)) static int FUNC_3(MSS4Context *VAR_3, GetBitContext *VAR_4,
                                 uint8_t *VAR_5[3], int VAR_6, int VAR_7)
{
    int VAR_8, VAR_9, VAR_10, VAR_11;
    uint8_t *VAR_12 = VAR_5[0];

    for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {
        for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {
            int VAR_13 = VAR_6 * 2 + VAR_8;
            VAR_3->dc_cache[VAR_9][VAR_2] = VAR_3->dc_cache[VAR_9][VAR_1];
            VAR_3->dc_cache[VAR_9][VAR_1] = VAR_3->prev_dc[0][VAR_6 * 2 + VAR_8];
            VAR_11 = FUNC_2(VAR_4, VAR_3->dc_vlc, VAR_3->ac_vlc, VAR_3->block,
                                  VAR_3->dc_cache[VAR_9],
                                  VAR_13, VAR_7 * 2 + VAR_9, VAR_3->quant_mat[0]);
            if (VAR_11)
                return VAR_11;
            VAR_3->prev_dc[0][VAR_6 * 2 + VAR_8] = VAR_3->dc_cache[VAR_9][VAR_0];

            FUNC_1(VAR_12 + VAR_13 * 8, VAR_3->pic->linesize[0],
                             VAR_3->block);
        }
        VAR_12 += 8 * VAR_3->pic->linesize[0];
    }

    for (VAR_8 = 1; VAR_8 < 3; VAR_8++) {
        VAR_3->dc_cache[VAR_8 + 1][VAR_2] = VAR_3->dc_cache[VAR_8 + 1][VAR_1];
        VAR_3->dc_cache[VAR_8 + 1][VAR_1] = VAR_3->prev_dc[VAR_8][VAR_6];
        VAR_11 = FUNC_2(VAR_4, VAR_3->dc_vlc + 1, VAR_3->ac_vlc + 1,
                              VAR_3->block, VAR_3->dc_cache[VAR_8 + 1], VAR_6, VAR_7,
                              VAR_3->quant_mat[1]);
        if (VAR_11)
            return VAR_11;
        VAR_3->prev_dc[VAR_8][VAR_6] = VAR_3->dc_cache[VAR_8 + 1][VAR_0];

        FUNC_1(VAR_3->imgbuf[VAR_8], 8, VAR_3->block);
        VAR_12 = VAR_5[VAR_8] + VAR_6 * 16;


        for (VAR_9 = 0; VAR_9 < 16; VAR_9++) {
            for (VAR_10 = 0; VAR_10 < 8; VAR_10++)
                FUNC_0(VAR_12 + VAR_10 * 2, VAR_3->imgbuf[VAR_8][VAR_10 + (VAR_9 & ~1) * 4] * 0x101);
            VAR_12 += VAR_3->pic->linesize[VAR_8];
        }
    }

    return 0;
}
