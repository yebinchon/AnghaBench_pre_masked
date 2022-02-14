
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int16_t ;
typedef int GetBitContext ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int *,int) ;
 int FUNC_1 (int *,int const*,int) ;

int FUNC_2(AVCodecContext *VAR_2, int16_t *VAR_3,
                          const uint8_t *VAR_4, int VAR_5)
{
    int VAR_6;
    GetBitContext VAR_7;
    FUNC_1(&VAR_7, VAR_4, VAR_1 * 8);
    VAR_6 = FUNC_0(VAR_2, VAR_3, &VAR_7, VAR_5);
    if (VAR_6 < 0)
        return VAR_6;
    return FUNC_0(VAR_2, VAR_3 + VAR_0, &VAR_7, VAR_5);
}
