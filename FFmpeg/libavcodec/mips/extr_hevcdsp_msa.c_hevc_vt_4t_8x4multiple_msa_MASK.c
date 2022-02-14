
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (int ,int ,int,int,int,int) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int *,int,int ,int ,int ) ;
 int FUNC_3 (int *,int,int ,int ,int ,int ) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int,int ,int,int,int) ;
 int FUNC_6 (int,int,int,int,int *,int) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(uint8_t *VAR_0,
                                       int32_t VAR_1,
                                       int16_t *VAR_2,
                                       int32_t VAR_3,
                                       const int8_t *VAR_4,
                                       int32_t VAR_5)
{
    int32_t VAR_6;
    v16i8 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    v16i8 VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
    v8i16 VAR_20, VAR_21, VAR_22, VAR_23;
    v8i16 VAR_24, VAR_25;
    v8i16 VAR_26, VAR_27;

    VAR_0 -= VAR_1;
    VAR_27 = FUNC_9(128);
    VAR_27 <<= 6;

    VAR_26 = FUNC_4(VAR_4);
    FUNC_5(VAR_26, 0, 1, VAR_24, VAR_25);

    FUNC_2(VAR_0, VAR_1, VAR_7, VAR_8, VAR_9);
    VAR_0 += (3 * VAR_1);
    FUNC_7(VAR_7, VAR_8, VAR_9);
    FUNC_1(VAR_8, VAR_7, VAR_9, VAR_8, VAR_14, VAR_16);

    for (VAR_6 = (VAR_5 >> 2); VAR_6--;) {
        FUNC_3(VAR_0, VAR_1, VAR_10, VAR_11, VAR_12, VAR_13);
        VAR_0 += (4 * VAR_1);
        FUNC_8(VAR_10, VAR_11, VAR_12, VAR_13);
        FUNC_1(VAR_10, VAR_9, VAR_11, VAR_10, VAR_15, VAR_17);
        FUNC_1(VAR_12, VAR_11, VAR_13, VAR_12, VAR_18, VAR_19);
        VAR_20 = VAR_27;
        VAR_21 = VAR_27;
        VAR_22 = VAR_27;
        VAR_23 = VAR_27;
        FUNC_0(VAR_14, VAR_15, VAR_24, VAR_25, VAR_20, VAR_20);
        FUNC_0(VAR_16, VAR_17, VAR_24, VAR_25, VAR_21, VAR_21);
        FUNC_0(VAR_15, VAR_18, VAR_24, VAR_25, VAR_22, VAR_22);
        FUNC_0(VAR_17, VAR_19, VAR_24, VAR_25, VAR_23, VAR_23);
        FUNC_6(VAR_20, VAR_21, VAR_22, VAR_23, VAR_2, VAR_3);
        VAR_2 += (4 * VAR_3);

        VAR_9 = VAR_13;
        VAR_14 = VAR_18;
        VAR_16 = VAR_19;
    }
}
