
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int ptrdiff_t ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(uint8_t *VAR_4, ptrdiff_t VAR_5, const int16_t *VAR_6)
{
    int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

    VAR_11 = VAR_6[8*0];
    VAR_12 = VAR_6[8*1];
    VAR_13 = VAR_6[8*2];
    VAR_14 = VAR_6[8*3];
    VAR_7 = (VAR_11 + VAR_13)*VAR_2 + (1 << (VAR_3 - 1));
    VAR_9 = (VAR_11 - VAR_13)*VAR_2 + (1 << (VAR_3 - 1));
    VAR_8 = VAR_12 * VAR_0 + VAR_14 * VAR_1;
    VAR_10 = VAR_12 * VAR_1 - VAR_14 * VAR_0;
    VAR_4[0] = FUNC_0(VAR_4[0] + ((VAR_7 + VAR_8) >> VAR_3));
    VAR_4 += VAR_5;
    VAR_4[0] = FUNC_0(VAR_4[0] + ((VAR_9 + VAR_10) >> VAR_3));
    VAR_4 += VAR_5;
    VAR_4[0] = FUNC_0(VAR_4[0] + ((VAR_9 - VAR_10) >> VAR_3));
    VAR_4 += VAR_5;
    VAR_4[0] = FUNC_0(VAR_4[0] + ((VAR_7 - VAR_8) >> VAR_3));
}
