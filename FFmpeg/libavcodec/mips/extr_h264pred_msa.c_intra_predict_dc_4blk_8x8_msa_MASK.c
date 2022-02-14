
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8u16 ;
typedef scalar_t__ v4u32 ;
typedef int v4i32 ;
typedef scalar_t__ v16u8 ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (int*) ;
 int FUNC_1 (int,int,int,int,int*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(uint8_t *VAR_0, int32_t VAR_1)
{
    uint32_t VAR_2, VAR_3, VAR_4, VAR_5;
    uint32_t VAR_6, VAR_7, VAR_8, VAR_9;
    uint64_t VAR_10, VAR_11;
    v16u8 VAR_12;
    v8u16 VAR_13;
    v4u32 VAR_14;

    VAR_12 = FUNC_0(VAR_0 - VAR_1);
    VAR_13 = FUNC_3((v16u8) VAR_12, (v16u8) VAR_12);
    VAR_14 = FUNC_4(VAR_13, VAR_13);
    VAR_2 = FUNC_2((v4i32) VAR_14, 0);
    VAR_3 = FUNC_2((v4i32) VAR_14, 1);
    VAR_2 += VAR_0[0 * VAR_1 - 1];
    VAR_2 += VAR_0[1 * VAR_1 - 1];
    VAR_2 += VAR_0[2 * VAR_1 - 1];
    VAR_2 += VAR_0[3 * VAR_1 - 1];
    VAR_5 = VAR_0[4 * VAR_1 - 1];
    VAR_5 += VAR_0[5 * VAR_1 - 1];
    VAR_5 += VAR_0[6 * VAR_1 - 1];
    VAR_5 += VAR_0[7 * VAR_1 - 1];
    VAR_2 = (VAR_2 + 4) >> 3;
    VAR_4 = (VAR_3 + VAR_5 + 4) >> 3;
    VAR_3 = (VAR_3 + 2) >> 2;
    VAR_5 = (VAR_5 + 2) >> 2;
    VAR_6 = VAR_2 * 0x01010101;
    VAR_7 = VAR_3 * 0x01010101;
    VAR_8 = VAR_5 * 0x01010101;
    VAR_9 = VAR_4 * 0x01010101;
    VAR_10 = ((uint64_t) VAR_7 << 32) | VAR_6;
    VAR_11 = ((uint64_t) VAR_9 << 32) | VAR_8;

    FUNC_1(VAR_10, VAR_10, VAR_10, VAR_10, VAR_0, VAR_1);
    VAR_0 += (4 * VAR_1);
    FUNC_1(VAR_11, VAR_11, VAR_11, VAR_11, VAR_0, VAR_1);
}
