
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef unsigned int int16_t ;
typedef int GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int,int) ;
 int* VAR_1 ;
 size_t** VAR_2 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(GetBitContext *VAR_3, int16_t *VAR_4,
                             int VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    const int VAR_13 = VAR_1[VAR_5];
    const uint8_t *VAR_14 = VAR_2[VAR_5 | VAR_7];
    int VAR_15, VAR_16;
    unsigned VAR_17;

    if (FUNC_3(VAR_3) < 5)
        return VAR_0;

    VAR_8 = FUNC_2(VAR_3);
    VAR_9 = FUNC_2(VAR_3);
    VAR_10 = FUNC_1(VAR_3, 3);

    if (VAR_8) {
        VAR_11 = FUNC_2(VAR_3);
        VAR_12 = FUNC_1(VAR_3, 3);

        for (VAR_15 = 0; VAR_15 < VAR_6; VAR_15++) {
            VAR_16 = -1;
            do {
                FUNC_0(VAR_17, VAR_11, VAR_12);
                if (VAR_17 >= 0x10000)
                    return VAR_0;
                VAR_16 += VAR_17 + 1;
                if (VAR_16 >= VAR_13)
                    break;
                FUNC_0(VAR_17, VAR_9, VAR_10);
                VAR_17++;
                if (VAR_17 >= 0x10000)
                    return VAR_0;
                VAR_4[VAR_14[VAR_16]] = VAR_17;
            } while (VAR_16 < VAR_13 - 1);
            VAR_4 += VAR_13;
        }
    } else {
        for (VAR_15 = 0; VAR_15 < VAR_6; VAR_15++) {
            for (VAR_16 = 0; VAR_16 < VAR_13; VAR_16++) {
                FUNC_0(VAR_17, VAR_9, VAR_10);
                if (VAR_17 >= 0x10000)
                    return VAR_0;
                VAR_4[VAR_14[VAR_16]] = VAR_17;
            }
            VAR_4 += VAR_13;
        }
    }
    return 0;
}
