
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int GetByteContext ;
typedef int DXVContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int *,int,int *,int*,unsigned int,int **,int*,int **,int **,int ) ;
 int FUNC_8 (int *,int *,unsigned int) ;

__attribute__((used)) static int FUNC_9(DXVContext *VAR_2, GetByteContext *VAR_3,
                             uint8_t *VAR_4, int VAR_5,
                             uint8_t *VAR_6, int VAR_7)
{
    int VAR_8 = FUNC_3(VAR_3);
    unsigned VAR_9 = FUNC_3(VAR_3);
    int VAR_10 = FUNC_6(VAR_3);
    uint8_t *VAR_11, *VAR_12[256] = { 0 }, *VAR_13[256] = { 0 };
    int VAR_14, VAR_15 = 0, VAR_16, VAR_17 = 0, VAR_18, VAR_19;

    if (VAR_8 < 8 || VAR_8 - 8 > FUNC_2(VAR_3))
        return VAR_0;

    VAR_11 = VAR_4;
    FUNC_5(VAR_3, VAR_8 - 8);
    if (VAR_9 > VAR_7)
        return VAR_0;
    VAR_16 = FUNC_8(VAR_3, VAR_6, VAR_9);
    if (VAR_16 < 0)
        return VAR_16;
    FUNC_4(VAR_3, VAR_10, VAR_1);

    VAR_18 = FUNC_3(VAR_3);
    FUNC_1(VAR_11, VAR_18);
    VAR_19 = FUNC_3(VAR_3);
    VAR_12[0x9E3779B1 * (uint16_t)VAR_18 >> 24] = VAR_11;
    FUNC_1(VAR_11 + 4, VAR_19);
    VAR_13[0x9E3779B1 * (FUNC_0(VAR_11 + 2) & 0xFFFFFF) >> 24] = VAR_11 + 2;
    VAR_11 += 8;

    while (VAR_11 < VAR_4 + VAR_5) {
        VAR_14 = FUNC_7(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, &VAR_17, VAR_9,
                                 &VAR_11, &VAR_15, VAR_12, VAR_13, 0);
        if (VAR_14 < 0)
            return VAR_14;
    }

    FUNC_4(VAR_3, VAR_10 + VAR_8 + VAR_16 - 8, VAR_1);

    return 0;
}
