
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int int8_t ;
typedef int int16_t ;
typedef int GetBitContext ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ,int) ;

__attribute__((used)) static inline int FUNC_6(GetBitContext *VAR_1, int16_t *VAR_2, const uint8_t *VAR_3,
                            const uint32_t *VAR_4) {
    int VAR_5, VAR_6, VAR_7;
    int8_t VAR_8;
    uint8_t VAR_9 = FUNC_2(VAR_1, 8);


    if (VAR_9 == 255)
       return 0;


    VAR_5 = FUNC_2(VAR_1, 6);
    if (FUNC_3(VAR_1) < (VAR_5 << 1))
        return VAR_0;



    FUNC_5(VAR_2, 0, 64 * sizeof(int16_t));


    while (VAR_5) {
        VAR_8 = FUNC_4(VAR_1, 2);
        if (VAR_8 == -2)
            break;
        FUNC_1(VAR_8);
    }


    FUNC_0(4);
    if (FUNC_3(VAR_1) < (VAR_5 << 2))
        return VAR_0;
    while (VAR_5) {
        VAR_8 = FUNC_4(VAR_1, 4);
        if (VAR_8 == -8)
            break;
        FUNC_1(VAR_8);
    }


    FUNC_0(8);
    if (FUNC_3(VAR_1) < (VAR_5 << 3))
        return VAR_0;
    while (VAR_5) {
        VAR_8 = FUNC_4(VAR_1, 8);
        FUNC_1(VAR_8);
    }

    FUNC_1(VAR_9);
    return 1;
}
