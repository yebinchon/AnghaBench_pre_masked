
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* lfe_data; float lfe_scale; int gb; int avctx; } ;
typedef TYPE_1__ DCALbrDecoder ;


 int VAR_0 ;
 int FUNC_0 (float*) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (int ,int ,char*) ;
 scalar_t__* VAR_1 ;
 float* VAR_2 ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(DCALbrDecoder *VAR_3)
{
    int VAR_4 = FUNC_0(VAR_2) - 1;
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    float VAR_10, VAR_11, VAR_12;

    VAR_6 = FUNC_3(&VAR_3->gb, 16);
    VAR_7 = VAR_6 >> 15;

    VAR_11 = (((VAR_6 & 0x7fff) ^ -VAR_7) + VAR_7) * (1.0f / 0x7fff);

    VAR_9 = FUNC_3(&VAR_3->gb, 8);
    if (VAR_9 > VAR_4) {
        FUNC_2(VAR_3->avctx, VAR_0, "Invalid LFE step size index\n");
        return -1;
    }

    VAR_10 = VAR_2[VAR_9];

    for (VAR_5 = 0; VAR_5 < 64; VAR_5++) {
        VAR_8 = FUNC_3(&VAR_3->gb, 4);

        VAR_12 = VAR_10 * 0.125f;
        if (VAR_8 & 4)
            VAR_12 += VAR_10;
        if (VAR_8 & 2)
            VAR_12 += VAR_10 * 0.5f;
        if (VAR_8 & 1)
            VAR_12 += VAR_10 * 0.25f;

        if (VAR_8 & 8) {
            VAR_11 -= VAR_12;
            if (VAR_11 < -3.0f)
                VAR_11 = -3.0f;
        } else {
            VAR_11 += VAR_12;
            if (VAR_11 > 3.0f)
                VAR_11 = 3.0f;
        }

        VAR_9 += VAR_1[VAR_8 & 7];
        VAR_9 = FUNC_1(VAR_9, 0, VAR_4);

        VAR_10 = VAR_2[VAR_9];
        VAR_3->lfe_data[VAR_5] = VAR_11 * VAR_3->lfe_scale;
    }

    return 0;
}
