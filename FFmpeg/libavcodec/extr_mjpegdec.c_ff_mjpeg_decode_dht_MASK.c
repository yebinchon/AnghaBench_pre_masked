
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int*** raw_huffman_lengths; int*** raw_huffman_values; int ** vlcs; int avctx; int gb; } ;
typedef TYPE_1__ MJpegDecodeContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,int,...) ;
 int FUNC_1 (int *,int*,int*,int,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;

int FUNC_5(MJpegDecodeContext *VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    uint8_t VAR_11[17];
    uint8_t VAR_12[256];
    int VAR_13 = 0;

    VAR_4 = FUNC_3(&VAR_3->gb, 16) - 2;

    if (8*VAR_4 > FUNC_4(&VAR_3->gb)) {
        FUNC_0(VAR_3->avctx, VAR_2, "dht: len %d is too large\n", VAR_4);
        return VAR_0;
    }

    while (VAR_4 > 0) {
        if (VAR_4 < 17)
            return VAR_0;
        VAR_7 = FUNC_3(&VAR_3->gb, 4);
        if (VAR_7 >= 2)
            return VAR_0;
        VAR_5 = FUNC_3(&VAR_3->gb, 4);
        if (VAR_5 >= 4)
            return VAR_0;
        VAR_8 = 0;
        for (VAR_6 = 1; VAR_6 <= 16; VAR_6++) {
            VAR_11[VAR_6] = FUNC_3(&VAR_3->gb, 8);
            VAR_8 += VAR_11[VAR_6];
        }
        VAR_4 -= 17;
        if (VAR_4 < VAR_8 || VAR_8 > 256)
            return VAR_0;

        VAR_10 = 0;
        for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
            VAR_9 = FUNC_3(&VAR_3->gb, 8);
            if (VAR_9 > VAR_10)
                VAR_10 = VAR_9;
            VAR_12[VAR_6] = VAR_9;
        }
        VAR_4 -= VAR_8;


        FUNC_2(&VAR_3->vlcs[VAR_7][VAR_5]);
        FUNC_0(VAR_3->avctx, VAR_1, "class=%d index=%d nb_codes=%d\n",
               VAR_7, VAR_5, VAR_10 + 1);
        if ((VAR_13 = FUNC_1(&VAR_3->vlcs[VAR_7][VAR_5], VAR_11, VAR_12,
                             VAR_10 + 1, 0, VAR_7 > 0)) < 0)
            return VAR_13;

        if (VAR_7 > 0) {
            FUNC_2(&VAR_3->vlcs[2][VAR_5]);
            if ((VAR_13 = FUNC_1(&VAR_3->vlcs[2][VAR_5], VAR_11, VAR_12,
                                 VAR_10 + 1, 0, 0)) < 0)
                return VAR_13;
        }

        for (VAR_6 = 0; VAR_6 < 16; VAR_6++)
            VAR_3->raw_huffman_lengths[VAR_7][VAR_5][VAR_6] = VAR_11[VAR_6 + 1];
        for (VAR_6 = 0; VAR_6 < 256; VAR_6++)
            VAR_3->raw_huffman_values[VAR_7][VAR_5][VAR_6] = VAR_12[VAR_6];
    }
    return 0;
}
