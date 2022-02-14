
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int*,int const*,int) ;
 int FUNC_4 (int*,unsigned int,int) ;

__attribute__((used)) static int FUNC_5(const uint8_t *VAR_3, int VAR_4, uint8_t *VAR_5, int VAR_6)
{
    unsigned VAR_7, VAR_8 = 0;
    int VAR_9 = VAR_4;
    const uint8_t *VAR_10, *VAR_11 = VAR_3 + VAR_4;
    uint8_t *VAR_12 = VAR_5 + VAR_2 * VAR_1;
    uint8_t *VAR_13, *VAR_14;
    int VAR_15, VAR_16;
    int VAR_17 = (VAR_6 <= -VAR_2) || (VAR_6 >= 0);
    int VAR_18, VAR_19;
    int VAR_20;
    int VAR_21 = 0;
    int VAR_22;

    if (VAR_4 <= 0)
        return VAR_0;

    if (VAR_17) {
        VAR_10 = VAR_3;
        VAR_13 = VAR_5;
        VAR_14 = VAR_12;
    } else {
        VAR_10 = VAR_3 + VAR_4 - 1;
        VAR_13 = VAR_12 - 1;
        VAR_14 = VAR_5 - 1;
    }
    for (;;) {
        int VAR_23 = 0;
        VAR_19 = 0;
        if (!VAR_21 || (VAR_9 == 4)) {
            if (VAR_10 < VAR_3 || VAR_10 >= VAR_11)
                return VAR_0;
            VAR_7 = *VAR_10;
            VAR_18 = 1;
        } else {
            VAR_7 = VAR_8;
            VAR_18 = 0;
        }
        if (!(VAR_7 & 0xC)) {
            for (;;) {
                if(VAR_23>22)
                    return -1;
                if (!VAR_18) {
                    if (VAR_10 < VAR_3 || VAR_10 >= VAR_11)
                        return VAR_0;
                    VAR_23 += 2;
                    VAR_7 |= (unsigned)*VAR_10 << VAR_23;
                    if (*VAR_10 & 0xC)
                        break;
                }


                VAR_18 = 0;
                VAR_23 += 2;
                VAR_16 = (1 << VAR_23) - 1;
                VAR_7 = ((VAR_7 >> 2) & ~VAR_16) | (VAR_7 & VAR_16);
                FUNC_1(VAR_10);
                if ((VAR_7 & (0xC << VAR_23))) {
                    VAR_19 = 1;
                    break;
                }
            }
        } else if (VAR_21) {
            VAR_19 = VAR_9 != 4;
        }
        if (VAR_19) {
            VAR_9 = 4;
        } else {
            VAR_8 = VAR_7 >> (4 + VAR_23);
            VAR_9 = 0;
            VAR_7 &= (1 << (VAR_23 + 4)) - 1;
            FUNC_1(VAR_10);
        }
        VAR_20 = VAR_7 & 1;
        VAR_15 = (VAR_7 >> 1) - 1;
        FUNC_2(VAR_15>0);
        VAR_21 += 1 + VAR_20;
        if (VAR_21 >= 4)
            VAR_21 -= 3;
        if (VAR_15 <= 0 || FUNC_0(VAR_14 - VAR_13) < VAR_15)
            return VAR_0;
        switch (VAR_21) {
        case 1:
            if (VAR_17) {
                if (VAR_13 - VAR_5 + VAR_2 < VAR_6 ||
                        VAR_13 - VAR_5 + VAR_2 + VAR_6 < 0 ||
                        VAR_12 - VAR_13 < VAR_6 + VAR_15 ||
                        VAR_12 - VAR_13 < VAR_15)
                    return VAR_0;
                for (VAR_22 = 0; VAR_22 < VAR_15; VAR_22++)
                    VAR_13[VAR_22] = VAR_13[VAR_6 + VAR_22];
                VAR_13 += VAR_15;
            } else {
                VAR_13 -= VAR_15;
                if (VAR_13 - VAR_5 + VAR_2 < VAR_6 ||
                        VAR_13 - VAR_5 + VAR_2 + VAR_6 < 0 ||
                        VAR_12 - VAR_13 < VAR_6 + VAR_15 ||
                        VAR_12 - VAR_13 < VAR_15)
                    return VAR_0;
                for (VAR_22 = VAR_15 - 1; VAR_22 >= 0; VAR_22--)
                    VAR_13[VAR_22] = VAR_13[VAR_6 + VAR_22];
            }
            break;
        case 2:
            if (VAR_17) {
                if (VAR_3 + VAR_4 - VAR_10 < VAR_15)
                    return VAR_0;
                FUNC_3(VAR_13, VAR_10, VAR_15);
                VAR_13 += VAR_15;
                VAR_10 += VAR_15;
            } else {
                if (VAR_10 - VAR_3 < VAR_15)
                    return VAR_0;
                VAR_13 -= VAR_15;
                VAR_10 -= VAR_15;
                FUNC_3(VAR_13, VAR_10, VAR_15);
            }
            break;
        case 3:
            VAR_7 = VAR_17 ? VAR_13[-1] : VAR_13[1];
            if (VAR_17) {
                FUNC_4(VAR_13, VAR_7, VAR_15);
                VAR_13 += VAR_15;
            } else {
                VAR_13 -= VAR_15;
                FUNC_4(VAR_13, VAR_7, VAR_15);
            }
            break;
        }
        if (VAR_13 == VAR_14)
            return 0;
    }
}
