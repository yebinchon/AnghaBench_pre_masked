
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_0(u_int8_t *VAR_3, u_int32_t VAR_4, u_int8_t *VAR_5, u_int32_t VAR_6)
{

    u_int8_t VAR_7[VAR_1 + VAR_0 - 1];
    u_int8_t *VAR_8 = VAR_3;
 u_int8_t *VAR_9 = VAR_3 + VAR_4;
    u_int8_t *VAR_10 = VAR_5 + VAR_6;
    int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    unsigned int VAR_16;

    VAR_3 = VAR_8;
    VAR_10 = VAR_5 + VAR_6;
    for (VAR_11 = 0; VAR_11 < VAR_1 - VAR_0; VAR_11++)
        VAR_7[VAR_11] = ' ';
    VAR_14 = VAR_1 - VAR_0;
    VAR_16 = 0;
    for ( ; ; ) {
        if (((VAR_16 >>= 1) & 0x100) == 0) {
            if (VAR_5 < VAR_10) VAR_15 = *VAR_5++; else break;
            VAR_16 = VAR_15 | 0xFF00;
        }
        if (VAR_16 & 1) {
            if (VAR_5 < VAR_10) VAR_15 = *VAR_5++; else break;
            *VAR_3++ = VAR_15;
   if (VAR_3 >= VAR_9) {
    goto finish;
   }
            VAR_7[VAR_14++] = VAR_15;
            VAR_14 &= (VAR_1 - 1);
        } else {
            if (VAR_5 < VAR_10) VAR_11 = *VAR_5++; else break;
            if (VAR_5 < VAR_10) VAR_12 = *VAR_5++; else break;
            VAR_11 |= ((VAR_12 & 0xF0) << 4);
            VAR_12 = (VAR_12 & 0x0F) + VAR_2;
            for (VAR_13 = 0; VAR_13 <= VAR_12; VAR_13++) {
                VAR_15 = VAR_7[(VAR_11 + VAR_13) & (VAR_1 - 1)];
                *VAR_3++ = VAR_15;
    if (VAR_3 >= VAR_9) {
     goto finish;
    }
                VAR_7[VAR_14++] = VAR_15;
                VAR_14 &= (VAR_1 - 1);
            }
        }
    }
finish:
    return VAR_3 - VAR_8;
}
