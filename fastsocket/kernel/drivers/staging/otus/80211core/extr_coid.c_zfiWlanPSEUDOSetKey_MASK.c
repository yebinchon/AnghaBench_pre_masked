
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u32_t ;
typedef int u16_t ;
struct zsKeyInfo {int keyLength; int flag; int * key; scalar_t__ macAddr; } ;
struct TYPE_3__ {int* txiv; void* encryMode; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 TYPE_2__* VAR_9 ;
 int FUNC_0 (int *,int,int,void*,int*,int *) ;
 int FUNC_1 (int *) ;

u8_t FUNC_2(zdev_t* VAR_10, struct zsKeyInfo VAR_11)
{


    u8_t VAR_12[16];

    FUNC_1(VAR_10);

    switch (VAR_11.keyLength)
    {
        case 5:
            VAR_9->sta.encryMode = VAR_8;

            FUNC_0(VAR_10, 64, 0, VAR_8, (u16_t *)VAR_11.macAddr, (u32_t*) VAR_11.key);
            break;

        case 13:
            VAR_9->sta.encryMode = VAR_6;

            FUNC_0(VAR_10, 64, 0, VAR_6, (u16_t *)VAR_11.macAddr, (u32_t*) VAR_11.key);
            break;

        case 29:
            VAR_9->sta.encryMode = VAR_7;

            FUNC_0(VAR_10, 64, 1, VAR_7, (u16_t *)VAR_11.macAddr, (u32_t*) (&VAR_11.key[16]));
            FUNC_0(VAR_10, 64, 0, VAR_7, (u16_t *)VAR_11.macAddr, (u32_t*) VAR_11.key);
            break;

        case 16:
            VAR_9->sta.encryMode = VAR_0;

            FUNC_0(VAR_10, 64, 0, VAR_0, (u16_t *)VAR_11.macAddr, (u32_t*) VAR_11.key);
            break;

        case 32:
            {
                VAR_9->sta.encryMode = VAR_5;
                FUNC_0(VAR_10, 64, 1, VAR_5, (u16_t *)VAR_11.macAddr, (u32_t*) VAR_12);
                FUNC_0(VAR_10, 64, 0, VAR_5, (u16_t *)VAR_11.macAddr, (u32_t*) VAR_11.key);
            }
            break;
        default:
            VAR_9->sta.encryMode = VAR_3;
    }

    return VAR_4;
}
