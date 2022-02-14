
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8u16 ;
typedef int v4u32 ;
typedef int v4i32 ;
typedef scalar_t__ v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int const*,int,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,int *,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int) ;

__attribute__((used)) static void FUNC_8(const uint8_t *VAR_0,
                                         const uint8_t *VAR_1,
                                         uint8_t *VAR_2, int32_t VAR_3)
{
    uint32_t VAR_4;
    v16u8 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    v8u16 VAR_10, VAR_11;
    v8u16 VAR_12, VAR_13;
    v8u16 VAR_14, VAR_15, VAR_16;

    FUNC_1(VAR_0, 16, VAR_5, VAR_6);
    FUNC_1(VAR_1, 16, VAR_8, VAR_9);
    FUNC_0(VAR_5, VAR_6, VAR_10, VAR_11);
    FUNC_0(VAR_8, VAR_9, VAR_12, VAR_13);
    VAR_15 = VAR_10 + VAR_11;
    VAR_16 = VAR_12 + VAR_13;
    VAR_14 = VAR_15 + VAR_16;
    VAR_14 = (v8u16) FUNC_4(VAR_14, VAR_14);
    VAR_14 = (v8u16) FUNC_3((v4u32) VAR_14, (v4u32) VAR_14);
    VAR_14 = (v8u16) FUNC_5((v4i32) VAR_14, (v4i32) VAR_14);
    VAR_14 = (v8u16) FUNC_3((v4u32) VAR_14, (v4u32) VAR_14);
    VAR_14 = (v8u16) FUNC_7((v4i32) VAR_14, 6);
    VAR_7 = (v16u8) FUNC_6((v16i8) VAR_14, 0);

    for (VAR_4 = 16; VAR_4--;) {
        FUNC_2(VAR_7, VAR_7, VAR_2, 16);
        VAR_2 += VAR_3;
        FUNC_2(VAR_7, VAR_7, VAR_2, 16);
        VAR_2 += VAR_3;
    }
}
