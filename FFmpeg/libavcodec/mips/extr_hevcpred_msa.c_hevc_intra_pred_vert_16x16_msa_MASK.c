
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int * v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ int32_t ;


 int FUNC_0 (int,int,int,int,int,int) ;
 int FUNC_1 (int,int) ;
 int * FUNC_2 (int const*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int,int,int,int,int,int) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int const) ;
 scalar_t__ FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(const uint8_t *VAR_0,
                                           const uint8_t *VAR_1,
                                           uint8_t *VAR_2, int32_t VAR_3,
                                           int32_t VAR_4)
{
    int32_t VAR_5;
    uint8_t *VAR_6 = VAR_2;
    uint32_t VAR_7;
    v16u8 VAR_8;
    v8i16 VAR_9, VAR_10, VAR_11, VAR_12;

    VAR_8 = FUNC_2(VAR_0);

    for (VAR_7 = 16; VAR_7--;) {
        FUNC_3(VAR_8, VAR_6);
        VAR_6 += VAR_3;
    }

    if (0 == VAR_4) {
        VAR_8 = FUNC_2(VAR_1);

        VAR_9 = FUNC_6(VAR_1[-1]);
        VAR_10 = FUNC_6(VAR_0[0]);

        FUNC_5(VAR_8, VAR_11, VAR_12);
        FUNC_4(VAR_11, VAR_9, VAR_12, VAR_9, VAR_11, VAR_12);

        VAR_11 >>= 1;
        VAR_12 >>= 1;

        FUNC_0(VAR_11, VAR_10, VAR_12, VAR_10, VAR_11, VAR_12);
        FUNC_1(VAR_11, VAR_12);

        VAR_8 = (v16u8) FUNC_7((v16i8) VAR_12, (v16i8) VAR_11);

        for (VAR_5 = 0; VAR_5 < 16; VAR_5++) {
            VAR_2[VAR_3 * VAR_5] = VAR_8[VAR_5];
        }
    }
}
