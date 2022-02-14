
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef size_t u8_t ;
typedef scalar_t__ u32_t ;
typedef int u16_t ;
struct TYPE_4__ {int** macAddr; int wdsBitmap; size_t* encryMode; } ;
struct TYPE_5__ {TYPE_1__ wds; } ;
struct TYPE_6__ {TYPE_2__ ap; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 int FUNC_0 (int *,size_t,int ,size_t,int*,scalar_t__*) ;
 int FUNC_1 (int *) ;

u16_t FUNC_2(zdev_t* VAR_5, u8_t VAR_6, u16_t VAR_7, u16_t* VAR_8,
        u16_t VAR_9, u32_t* VAR_10)
{
    u16_t VAR_11[3];
    u32_t VAR_12[4];

    FUNC_1(VAR_5);

    if (VAR_6 >= VAR_1)
    {
        return VAR_0;
    }

    if (VAR_7 == 1)
    {

        VAR_4->ap.wds.macAddr[VAR_6][0] = VAR_8[0];
        VAR_4->ap.wds.macAddr[VAR_6][1] = VAR_8[1];
        VAR_4->ap.wds.macAddr[VAR_6][2] = VAR_8[2];

        VAR_4->ap.wds.wdsBitmap |= (1 << VAR_6);
        VAR_4->ap.wds.encryMode[VAR_6] = (u8_t) VAR_9;

        FUNC_0(VAR_5, 10+VAR_1, 0, (u8_t) VAR_9, VAR_8, VAR_10);
    }
    else
    {

        VAR_11[0] = VAR_11[1] = VAR_11[2] = 0;
        VAR_12[0] = VAR_12[1] = VAR_12[2] = VAR_12[3] = 0;
        VAR_4->ap.wds.wdsBitmap &= (~(1 << VAR_6));
        FUNC_0(VAR_5, 10+VAR_1, 0, VAR_2, VAR_11, VAR_12);
    }

    return VAR_3;
}
