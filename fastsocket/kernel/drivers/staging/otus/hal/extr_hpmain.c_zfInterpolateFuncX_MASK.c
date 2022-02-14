
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8_t ;
typedef int s32_t ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,int,int) ;

u8_t FUNC_1(u8_t VAR_1, u8_t VAR_2, u8_t VAR_3, u8_t VAR_4, u8_t VAR_5)
{
    s32_t VAR_6;
    s32_t VAR_7;


    VAR_6 = FUNC_0((s32_t)VAR_1<<8,
                          (s32_t)VAR_2<<8,
                          (s32_t)VAR_3<<8,
                          (s32_t)VAR_4<<8,
                          (s32_t)VAR_5<<8);

    VAR_7 = (VAR_6 & (1<<(8 -1))) >> (8 -1);
    VAR_6 = (VAR_6 >> 8) + VAR_7;


    return (u8_t)VAR_6;
}
