
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u32_t ;
typedef int u16_t ;
typedef scalar_t__ s16_t ;
struct TYPE_2__ {int enableHALDbgInfo; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int) ;

u16_t FUNC_3(zdev_t* VAR_1,
                        zbuf_t* VAR_2,
                        u16_t VAR_3,
                        u16_t VAR_4,
                        u32_t *VAR_5,
                        u32_t *VAR_6,
                        u32_t *VAR_7,
                        u32_t *VAR_8
                        )
{
    u8_t VAR_9,VAR_10;
    u16_t VAR_11, VAR_12, VAR_13;
    s16_t VAR_14 = 0;

    FUNC_1(VAR_1);

    VAR_10 = FUNC_2(VAR_1, VAR_2, VAR_3-1);
    VAR_9 = FUNC_2(VAR_1, VAR_2, (VAR_3-1)) & 0x3;
    *VAR_5 = VAR_9;


    switch (VAR_9) {
    case 0:
        VAR_11 = FUNC_2(VAR_1, VAR_2, 2);
        VAR_12 = FUNC_2(VAR_1, VAR_2, 3);
        VAR_14 = (VAR_11 | VAR_12 << 8) - 4;
        if (VAR_0->enableHALDbgInfo)
        {
            *VAR_6 = FUNC_2(VAR_1, VAR_2, 0);
            *VAR_7 = 0;
            *VAR_8 = 0;
        }
        break;
    case 1:
        VAR_11 = FUNC_2(VAR_1, VAR_2, 0) >> 5;
        VAR_12 = FUNC_2(VAR_1, VAR_2, 1);
        VAR_13 = FUNC_2(VAR_1, VAR_2, 2) & 0x1;
        VAR_14 = (VAR_11 | (VAR_12 << 3) | (VAR_13 << 11)) - 4;
        if (VAR_0->enableHALDbgInfo)
        {
            *VAR_6 = FUNC_0(VAR_1, VAR_2);
            *VAR_7 = 0;
            *VAR_8 = 0;
        }
        break;
    case 2:

        if ((VAR_10 & 0x30) == 0x00 || (VAR_10 & 0x30) == 0x10)
            VAR_14 = VAR_3 - 24 - 4 - VAR_4;
        else {
            VAR_14 = VAR_3 - 4 - 4 - VAR_4;

        }
        if (VAR_0->enableHALDbgInfo)
        {
            *VAR_6 = FUNC_2(VAR_1, VAR_2, 3) & 0x7f;
            *VAR_7 = (FUNC_2(VAR_1, VAR_2, 3) >> 7) & 0x1;
            *VAR_8 = (FUNC_2(VAR_1, VAR_2, 6) >> 7) & 0x1;
        }
        break;
    default:
        break;

    }

    if (VAR_14 < 0) VAR_14 = 0;
    return VAR_14;
}
