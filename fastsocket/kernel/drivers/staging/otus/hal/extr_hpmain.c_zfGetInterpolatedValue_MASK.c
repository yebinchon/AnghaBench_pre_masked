
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef size_t u16_t ;
typedef int s32_t ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;

u8_t FUNC_1(u8_t VAR_0, u8_t* VAR_1, u8_t* VAR_2)
{
    s32_t VAR_3;
    u16_t VAR_4;

    if (VAR_0 <= VAR_1[1])
    {
        VAR_4 = 0;
    }
    else if (VAR_0 <= VAR_1[2])
    {
        VAR_4 = 1;
    }
    else if (VAR_0 <= VAR_1[3])
    {
        VAR_4 = 2;
    }
    else
    {
        VAR_4 = 3;
    }

    VAR_3 = FUNC_0(VAR_0,
            VAR_1[VAR_4],
            VAR_2[VAR_4],
            VAR_1[VAR_4+1],
            VAR_2[VAR_4+1]);

    return (u8_t)VAR_3;
}
