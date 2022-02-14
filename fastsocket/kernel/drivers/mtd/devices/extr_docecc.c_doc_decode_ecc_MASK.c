
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gf ;
typedef int dtype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *,int*,int*,int*,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;

int FUNC_4(unsigned char VAR_5[VAR_4], unsigned char VAR_6[6])
{
    int VAR_7, VAR_8, VAR_9;
    gf VAR_10[VAR_3 - VAR_1 + 1];
    gf VAR_11[VAR_3-VAR_1];
    int VAR_12[VAR_3-VAR_1], VAR_13, VAR_14, VAR_15, VAR_16;
    dtype *VAR_17, *VAR_18;


    VAR_17 = FUNC_3((VAR_3 + 1) * sizeof(dtype), VAR_0);
    if (!VAR_17)
        return -1;

    VAR_18 = FUNC_3((VAR_3 + 1) * sizeof(dtype), VAR_0);
    if (!VAR_18) {
        FUNC_2(VAR_17);
        return -1;
    }

    FUNC_1(VAR_17, VAR_18);

    VAR_7 = VAR_6[1];

    VAR_10[0] = (VAR_6[4] & 0xff) | ((VAR_6[5] & 0x03) << 8);
    VAR_10[1] = ((VAR_6[5] & 0xfc) >> 2) | ((VAR_6[2] & 0x0f) << 6);
    VAR_10[2] = ((VAR_6[2] & 0xf0) >> 4) | ((VAR_6[3] & 0x3f) << 4);
    VAR_10[3] = ((VAR_6[3] & 0xc0) >> 6) | ((VAR_6[0] & 0xff) << 2);

    VAR_9 = FUNC_0(VAR_17, VAR_18, VAR_10,
                            VAR_11, VAR_12, 0);
    if (VAR_9 <= 0)
        goto the_end;


    for(VAR_8=0;VAR_8<VAR_9;VAR_8++) {
        VAR_13 = VAR_12[VAR_8];
        if (VAR_13 >= VAR_2 && VAR_13 < VAR_1) {
            VAR_9 = -1;
            goto the_end;
        }
        if (VAR_13 < VAR_2) {

            VAR_13 = 10 * (VAR_2 - 1 - VAR_13) - 6;


            VAR_15 = (VAR_13 >> 3) ^ 1;
            VAR_14 = VAR_13 & 7;
            if ((VAR_15 >= 0 && VAR_15 < VAR_4) ||
                VAR_15 == (VAR_4 + 1)) {
                VAR_16 = VAR_11[VAR_8] >> (2 + VAR_14);
                VAR_7 ^= VAR_16;
                if (VAR_15 < VAR_4)
                    VAR_5[VAR_15] ^= VAR_16;
            }
            VAR_15 = ((VAR_13 >> 3) + 1) ^ 1;
            VAR_14 = (VAR_14 + 10) & 7;
            if (VAR_14 == 0)
                VAR_14 = 8;
            if ((VAR_15 >= 0 && VAR_15 < VAR_4) ||
                VAR_15 == (VAR_4 + 1)) {
                VAR_16 = VAR_11[VAR_8] << (8 - VAR_14);
                VAR_7 ^= VAR_16;
                if (VAR_15 < VAR_4)
                    VAR_5[VAR_15] ^= VAR_16;
            }
        }
    }


    if ((VAR_7 & 0xff) != 0)
        VAR_9 = -1;

 the_end:
    FUNC_2(VAR_17);
    FUNC_2(VAR_18);
    return VAR_9;
}
