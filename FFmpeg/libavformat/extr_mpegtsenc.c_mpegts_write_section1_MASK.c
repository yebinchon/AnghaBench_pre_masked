
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int MpegTSSection ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *,unsigned int) ;
 int FUNC_2 (int **,int) ;

__attribute__((used)) static int FUNC_3(MpegTSSection *VAR_2, int VAR_3, int VAR_4,
                                 int VAR_5, int VAR_6, int VAR_7,
                                 uint8_t *VAR_8, int VAR_9)
{
    uint8_t VAR_10[1024], *VAR_11;
    unsigned int VAR_12;

    unsigned int VAR_13 = VAR_3 == VAR_1 ? 0xf000 : 0xb000;

    VAR_12 = 3 + 5 + VAR_9 + 4;

    if (VAR_12 > 1024)
        return VAR_0;

    VAR_11 = VAR_10;
    *VAR_11++ = VAR_3;
    FUNC_2(&VAR_11, VAR_13 | (VAR_9 + 5 + 4));
    FUNC_2(&VAR_11, VAR_4);
    *VAR_11++ = 0xc1 | (VAR_5 << 1);
    *VAR_11++ = VAR_6;
    *VAR_11++ = VAR_7;
    FUNC_0(VAR_11, VAR_8, VAR_9);

    FUNC_1(VAR_2, VAR_10, VAR_12);
    return 0;
}
