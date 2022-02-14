
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (int,int,int,int,int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ,int ,int ,int *,int) ;
 int FUNC_5 (int,int,int,int,int,int) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int const) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static void FUNC_10(const uint8_t *VAR_0,
                                            const uint8_t *VAR_1,
                                            uint8_t *VAR_2, int32_t VAR_3,
                                            int32_t VAR_4)
{
    uint8_t *VAR_5 = VAR_2;
    uint32_t VAR_6;
    uint8_t VAR_7, VAR_8, VAR_9, VAR_10;
    v16i8 VAR_11, VAR_12, VAR_13, VAR_14;
    v8i16 VAR_15, VAR_16, VAR_17, VAR_18;

    VAR_17 = FUNC_8(VAR_1[0]);

    for (VAR_6 = 4; VAR_6--;) {
        VAR_7 = VAR_1[0];
        VAR_8 = VAR_1[1];
        VAR_9 = VAR_1[2];
        VAR_10 = VAR_1[3];
        VAR_1 += 4;

        VAR_11 = FUNC_7(VAR_7);
        VAR_12 = FUNC_7(VAR_8);
        VAR_13 = FUNC_7(VAR_9);
        VAR_14 = FUNC_7(VAR_10);

        FUNC_4(VAR_11, VAR_12, VAR_13, VAR_14, VAR_5, VAR_3);
        VAR_5 += (4 * VAR_3);
    }

    if (0 == VAR_4) {
        VAR_11 = FUNC_2(VAR_0);
        VAR_18 = FUNC_8(VAR_0[-1]);

        FUNC_6(VAR_11, VAR_15, VAR_16);
        FUNC_5(VAR_15, VAR_18, VAR_16, VAR_18, VAR_15, VAR_16);

        VAR_15 >>= 1;
        VAR_16 >>= 1;

        FUNC_0(VAR_15, VAR_17, VAR_16, VAR_17, VAR_15, VAR_16);
        FUNC_1(VAR_15, VAR_16);
        VAR_11 = FUNC_9((v16i8) VAR_16, (v16i8) VAR_15);
        FUNC_3(VAR_11, VAR_2);
    }
}
