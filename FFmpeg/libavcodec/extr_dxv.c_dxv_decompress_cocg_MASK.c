
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int GetByteContext ;
typedef int DXVContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,void*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int *,int,int *,int*,unsigned int,int **,int*,int **,int **,int) ;
 int FUNC_9 (int *,int *,unsigned int) ;

__attribute__((used)) static int FUNC_10(DXVContext *VAR_2, GetByteContext *VAR_3,
                               uint8_t *VAR_4, int VAR_5,
                               uint8_t *VAR_6, uint8_t *VAR_7,
                               int VAR_8, int VAR_9)
{
    uint8_t *VAR_10, *VAR_11[256] = { 0 }, *VAR_12[256] = { 0 }, *VAR_13[256] = { 0 }, *VAR_14[256] = { 0 };
    int VAR_15 = FUNC_4(VAR_3);
    unsigned VAR_16 = FUNC_4(VAR_3);
    unsigned VAR_17 = FUNC_4(VAR_3);
    int VAR_18 = FUNC_7(VAR_3);
    int VAR_19, VAR_20, VAR_21 = 0, VAR_22 = 0;
    int VAR_23, VAR_24 = 0, VAR_25 = 0;

    if (VAR_15 < 12 || VAR_15 - 12 > FUNC_3(VAR_3))
        return VAR_0;

    VAR_10 = VAR_4;
    FUNC_6(VAR_3, VAR_15 - 12);
    if (VAR_16 > VAR_8)
        return VAR_0;
    VAR_19 = FUNC_9(VAR_3, VAR_6, VAR_16);
    if (VAR_19 < 0)
        return VAR_19;
    if (VAR_17 > VAR_9)
        return VAR_0;
    VAR_20 = FUNC_9(VAR_3, VAR_7, VAR_17);
    if (VAR_20 < 0)
        return VAR_20;
    FUNC_5(VAR_3, VAR_18, VAR_1);

    FUNC_2(VAR_10, FUNC_4(VAR_3));
    FUNC_2(VAR_10 + 4, FUNC_4(VAR_3));
    FUNC_2(VAR_10 + 8, FUNC_4(VAR_3));
    FUNC_2(VAR_10 + 12, FUNC_4(VAR_3));

    VAR_12[0x9E3779B1 * FUNC_0(VAR_10) >> 24] = VAR_10;
    VAR_14[0x9E3779B1 * (FUNC_1(VAR_10 + 2) & 0xFFFFFF) >> 24] = VAR_10 + 2;
    VAR_11[0x9E3779B1 * FUNC_0(VAR_10 + 8) >> 24] = VAR_10 + 8;
    VAR_13[0x9E3779B1 * (FUNC_1(VAR_10 + 10) & 0xFFFFFF) >> 24] = VAR_10 + 10;
    VAR_10 += 16;
    while (VAR_10 + 10 < VAR_4 + VAR_5) {
        VAR_23 = FUNC_8(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, &VAR_21, VAR_16,
                                 &VAR_10, &VAR_24, VAR_12, VAR_14, 8);
        if (VAR_23 < 0)
            return VAR_23;
        VAR_23 = FUNC_8(VAR_2, VAR_3, VAR_4, VAR_5, VAR_7, &VAR_22, VAR_17,
                                 &VAR_10, &VAR_25, VAR_11, VAR_13, 8);
        if (VAR_23 < 0)
            return VAR_23;
    }

    FUNC_5(VAR_3, VAR_18 - 12 + VAR_15 + VAR_19 + VAR_20, VAR_1);

    return 0;
}
