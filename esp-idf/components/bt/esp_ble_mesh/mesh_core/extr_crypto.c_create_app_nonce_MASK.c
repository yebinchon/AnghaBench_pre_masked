
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u32_t ;
typedef int u16_t ;


 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int,int*) ;

__attribute__((used)) static void FUNC_2(u8_t VAR_0[13], bool VAR_1, u8_t VAR_2,
                             u16_t VAR_3, u16_t VAR_4, u32_t VAR_5,
                             u32_t VAR_6)
{
    if (VAR_1) {
        VAR_0[0] = 0x02;
    } else {
        VAR_0[0] = 0x01;
    }

    FUNC_1((VAR_5 | ((u32_t)VAR_2 << 31)), &VAR_0[1]);

    FUNC_0(VAR_3, &VAR_0[5]);
    FUNC_0(VAR_4, &VAR_0[7]);

    FUNC_1(VAR_6, &VAR_0[9]);
}
