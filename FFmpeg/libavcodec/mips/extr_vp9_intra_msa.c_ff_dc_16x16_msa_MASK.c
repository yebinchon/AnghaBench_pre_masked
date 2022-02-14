
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8u16 ;
typedef scalar_t__ v4u32 ;
typedef int v4i32 ;
typedef scalar_t__ v2u64 ;
typedef scalar_t__ v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int const*) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int *,int) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int) ;

void FUNC_8(uint8_t *VAR_0, ptrdiff_t VAR_1,
                     const uint8_t *VAR_2, const uint8_t *VAR_3)
{
    v16u8 VAR_4, VAR_5, VAR_6;
    v8u16 VAR_7, VAR_8, VAR_9;
    v4u32 VAR_10;
    v2u64 VAR_11;

    VAR_4 = FUNC_1(VAR_3);
    VAR_5 = FUNC_1(VAR_2);
    FUNC_0(VAR_4, VAR_5, VAR_8, VAR_9);
    VAR_7 = VAR_8 + VAR_9;
    VAR_10 = FUNC_4(VAR_7, VAR_7);
    VAR_11 = FUNC_3(VAR_10, VAR_10);
    VAR_10 = (v4u32) FUNC_5((v4i32) VAR_11, (v4i32) VAR_11);
    VAR_11 = FUNC_3(VAR_10, VAR_10);
    VAR_10 = (v4u32) FUNC_7((v4i32) VAR_11, 5);
    VAR_6 = (v16u8) FUNC_6((v16i8) VAR_10, 0);

    FUNC_2(VAR_6, VAR_6, VAR_6, VAR_6, VAR_6, VAR_6, VAR_6, VAR_6, VAR_0, VAR_1);
    VAR_0 += (8 * VAR_1);
    FUNC_2(VAR_6, VAR_6, VAR_6, VAR_6, VAR_6, VAR_6, VAR_6, VAR_6, VAR_0, VAR_1);
}
