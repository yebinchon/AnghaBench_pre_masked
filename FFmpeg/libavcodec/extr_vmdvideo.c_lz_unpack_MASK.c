
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetByteContext ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 unsigned int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned char const*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (unsigned char*,int,int) ;

__attribute__((used)) static int FUNC_9(const unsigned char *VAR_3, int VAR_4,
                      unsigned char *VAR_5, int VAR_6)
{
    unsigned char *VAR_7;
    unsigned char *VAR_8;
    unsigned char VAR_9[VAR_2];
    unsigned int VAR_10;
    unsigned int VAR_11;
    unsigned int VAR_12;
    unsigned int VAR_13;
    unsigned int VAR_14;
    unsigned char VAR_15;
    unsigned int VAR_16, VAR_17;
    GetByteContext VAR_18;

    FUNC_4(&VAR_18, VAR_3, VAR_4);
    VAR_7 = VAR_5;
    VAR_8 = VAR_7 + VAR_6;
    VAR_11 = FUNC_3(&VAR_18);
    FUNC_8(VAR_9, 0x20, VAR_2);
    if (FUNC_1(&VAR_18) < 4)
        return VAR_0;
    if (FUNC_6(&VAR_18) == 0x56781234) {
        FUNC_7(&VAR_18, 4);
        VAR_10 = 0x111;
        VAR_14 = 0xF + 3;
    } else {
        VAR_10 = 0xFEE;
        VAR_14 = 100;
    }

    while (VAR_11 > 0 && FUNC_1(&VAR_18) > 0) {
        VAR_15 = FUNC_2(&VAR_18);
        if ((VAR_15 == 0xFF) && (VAR_11 > 8)) {
            if (VAR_8 - VAR_7 < 8 || FUNC_1(&VAR_18) < 8)
                return VAR_0;
            for (VAR_16 = 0; VAR_16 < 8; VAR_16++) {
                VAR_9[VAR_10++] = *VAR_7++ = FUNC_2(&VAR_18);
                VAR_10 &= VAR_1;
            }
            VAR_11 -= 8;
        } else {
            for (VAR_16 = 0; VAR_16 < 8; VAR_16++) {
                if (VAR_11 == 0)
                    break;
                if (VAR_15 & 0x01) {
                    if (VAR_8 - VAR_7 < 1 || FUNC_1(&VAR_18) < 1)
                        return VAR_0;
                    VAR_9[VAR_10++] = *VAR_7++ = FUNC_2(&VAR_18);
                    VAR_10 &= VAR_1;
                    VAR_11--;
                } else {
                    VAR_12 = FUNC_0(&VAR_18);
                    VAR_12 |= ((FUNC_5(&VAR_18) & 0xF0) << 4);
                    VAR_13 = (FUNC_0(&VAR_18) & 0x0F) + 3;
                    if (VAR_13 == VAR_14) {
                        VAR_13 = FUNC_0(&VAR_18) + 0xF + 3;
                    }
                    if (VAR_8 - VAR_7 < VAR_13)
                        return VAR_0;
                    for (VAR_17 = 0; VAR_17 < VAR_13; VAR_17++) {
                        *VAR_7 = VAR_9[VAR_12++ & VAR_1];
                        VAR_9[VAR_10++] = *VAR_7++;
                        VAR_10 &= VAR_1;
                    }
                    VAR_11 -= VAR_13;
                }
                VAR_15 >>= 1;
            }
        }
    }
    return VAR_7 - VAR_5;
}
