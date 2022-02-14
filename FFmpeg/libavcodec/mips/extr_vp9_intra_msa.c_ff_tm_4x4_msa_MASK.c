
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8u16 ;
typedef int v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (int ,int ,int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_7 (int ,int ,int,int *,int) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int ) ;

void FUNC_10(uint8_t *VAR_0, ptrdiff_t VAR_1,
                   const uint8_t *VAR_2, const uint8_t *VAR_3)
{
    uint32_t VAR_4;
    uint8_t VAR_5 = VAR_3[-1];
    v16i8 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    v16u8 VAR_13, VAR_14, VAR_15, VAR_16;
    v8u16 VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;

    VAR_17 = (v8u16) FUNC_9(VAR_5);
    VAR_6 = FUNC_3(VAR_3);
    VAR_4 = FUNC_4(VAR_2);
    VAR_7 = FUNC_8(VAR_4 >> 24);
    VAR_8 = FUNC_8(VAR_4 >> 16);
    VAR_9 = FUNC_8(VAR_4 >> 8);
    VAR_10 = FUNC_8(VAR_4);

    FUNC_1(VAR_7, VAR_6, VAR_8, VAR_6, VAR_9, VAR_6,
               VAR_10, VAR_6, VAR_13, VAR_14, VAR_15, VAR_16);
    FUNC_0(VAR_13, VAR_14, VAR_15, VAR_16, VAR_18, VAR_19, VAR_20, VAR_21);
    FUNC_2(VAR_17, VAR_17, VAR_18, VAR_19);
    FUNC_2(VAR_17, VAR_17, VAR_20, VAR_21);
    FUNC_6(VAR_18, VAR_19, VAR_20, VAR_21, 7);
    FUNC_5(VAR_19, VAR_18, VAR_21, VAR_20, VAR_11, VAR_12);
    FUNC_7(VAR_11, 0, 2, VAR_0, VAR_1);
    FUNC_7(VAR_12, 0, 2, VAR_0 + 2 * VAR_1, VAR_1);
}
