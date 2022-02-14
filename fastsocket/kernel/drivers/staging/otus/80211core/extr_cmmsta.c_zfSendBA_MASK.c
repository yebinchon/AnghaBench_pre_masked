
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u16_t ;
struct TYPE_3__ {int bssid; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int* VAR_5 ;
 int FUNC_0 (int *,int*,int,int *,int ,int *,int ,int *,int ,int ,int ,int) ;
 int FUNC_1 (int *,int ,int ,int*,int ,int *,int ,int ) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int,int ) ;
 int FUNC_8 (int *,int *,int,int) ;

void FUNC_9(zdev_t* VAR_6, u16_t VAR_7, u8_t *VAR_8)
{
    zbuf_t* VAR_9;


    u16_t VAR_10;
    u16_t VAR_11;
    u16_t VAR_12[(8+24+1)/2];
    u16_t VAR_13, VAR_14 = 0;

    FUNC_6(VAR_6);

    if ((VAR_9 = FUNC_2(VAR_6, 1024)) == ((void*)0))
    {
        FUNC_5(VAR_1, "Alloc mm buf Fail!");
        return;
    }

    FUNC_4(VAR_6, VAR_9, 12);




    FUNC_1(VAR_6, VAR_3, VAR_4->sta.bssid, VAR_12, 0, VAR_9, 0, 0);

    VAR_12[0] = 32;
    VAR_12[1] = 0x4;


    VAR_12[2] = (u16_t)(VAR_5[4] & 0xffff);
    VAR_12[3] = (u16_t)(VAR_5[4]>>16) & 0xffff;

    VAR_11 = 16 + 8;
    VAR_14 = 0;
    FUNC_8(VAR_6, VAR_9, VAR_14, 0x05);
    VAR_14+=2;
    FUNC_8(VAR_6, VAR_9, VAR_14, VAR_7);
    VAR_14+=2;

    for (VAR_13=0; VAR_13<8; VAR_13++) {
        FUNC_7(VAR_6, VAR_9, VAR_14, VAR_8[VAR_13]);
        VAR_14++;
    }

    if ((VAR_10 = FUNC_0(VAR_6, VAR_12, VAR_11, ((void*)0), 0, ((void*)0), 0, VAR_9, 0,
            VAR_0, 0, 0xff)) != VAR_2)
    {
        goto zlError;
    }

    return;

zlError:

    FUNC_3(VAR_6, VAR_9, 0);
    return;

}
