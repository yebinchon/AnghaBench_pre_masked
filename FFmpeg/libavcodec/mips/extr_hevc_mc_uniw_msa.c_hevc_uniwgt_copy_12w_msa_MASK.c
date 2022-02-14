
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_1__ ;


typedef int v8i16 ;
typedef int v4i32 ;
typedef int v16u8 ;
struct TYPE_24__ {int member_0; } ;
typedef TYPE_1__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__) ;
 int FUNC_3 (TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,int ,int ) ;
 int FUNC_4 (TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,int ,int ,int ,int ) ;
 int FUNC_5 (int *,int,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,int ,int ,int) ;
 int FUNC_9 (int ,int ,int ,int,int ,int,int *,int) ;
 int FUNC_10 (int ,int ,int,int,int,int *,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(uint8_t *VAR_0,
                                     int32_t VAR_1,
                                     uint8_t *VAR_2,
                                     int32_t VAR_3,
                                     int32_t VAR_4,
                                     int32_t VAR_5,
                                     int32_t VAR_6,
                                     int32_t VAR_7)
{
    uint32_t VAR_8;
    v16u8 VAR_9, VAR_10, VAR_11;
    v16i8 VAR_12, VAR_13, VAR_14, VAR_15;
    v8i16 VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
    v8i16 VAR_22;
    v16i8 VAR_23 = { 0 };
    v4i32 VAR_24, VAR_25;

    VAR_5 = VAR_5 & 0x0000FFFF;
    VAR_24 = FUNC_12(VAR_5);
    VAR_22 = FUNC_11(VAR_6);
    VAR_25 = FUNC_12(VAR_7);

    for (VAR_8 = 4; VAR_8--;) {
        FUNC_5(VAR_0, VAR_1, VAR_12, VAR_13, VAR_14, VAR_15);
        VAR_0 += (4 * VAR_1);
        FUNC_4(VAR_23, VAR_12, VAR_23, VAR_13, VAR_23, VAR_14, VAR_23, VAR_15,
                   VAR_16, VAR_17, VAR_18, VAR_19);

        FUNC_2(VAR_13, VAR_12, VAR_15, VAR_14, VAR_12, VAR_13);
        FUNC_3(VAR_23, VAR_12, VAR_23, VAR_13, VAR_20, VAR_21);
        FUNC_8(VAR_16, VAR_17, VAR_18, VAR_19, 6);
        FUNC_7(VAR_20, VAR_21, 6);
        FUNC_1(VAR_16, VAR_17, VAR_18, VAR_19, VAR_24,
                                       VAR_22, VAR_25, VAR_16, VAR_17, VAR_18,
                                       VAR_19);
        FUNC_0(VAR_20, VAR_21, VAR_24, VAR_22,
                                       VAR_25, VAR_20, VAR_21);

        FUNC_6(VAR_17, VAR_16, VAR_19, VAR_18, VAR_21, VAR_20, VAR_9, VAR_10, VAR_11);
        FUNC_9(VAR_9, VAR_10, 0, 1, 0, 1, VAR_2, VAR_3);
        FUNC_10(VAR_11, 0, 1, 2, 3, VAR_2 + 8, VAR_3);
        VAR_2 += (4 * VAR_3);
    }
}
