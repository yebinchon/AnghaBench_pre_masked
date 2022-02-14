
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u16_t ;
struct TYPE_3__ {int aid; int bssid; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_0 (int *,int*,int,int *,int ,int *,int ,int *,int ,int ,int ,int) ;
 int FUNC_1 (int *,int ,int ,int*,int ,int *,int ,int ) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *) ;

void FUNC_7(zdev_t* VAR_5)
{
    zbuf_t* VAR_6;


    u16_t VAR_7;
    u16_t VAR_8;
    u16_t VAR_9[(8+24+1)/2];

    FUNC_6(VAR_5);

    if ((VAR_6 = FUNC_2(VAR_5, 1024)) == ((void*)0))
    {
        FUNC_5(VAR_1, "Alloc mm buf Fail!");
        return;
    }

    FUNC_4(VAR_5, VAR_6, 0);



    FUNC_1(VAR_5, VAR_3, VAR_4->sta.bssid, VAR_9, 0, VAR_6, 0, 0);

    VAR_9[0] = 20;
    VAR_9[4] |= 0x1000;
    VAR_9[5] = VAR_4->sta.aid | 0xc000;
    VAR_8 = 16 + 8;
    if ((VAR_7 = FUNC_0(VAR_5, VAR_9, VAR_8, ((void*)0), 0, ((void*)0), 0, VAR_6, 0,
            VAR_0, 0, 0xff)) != VAR_2)
    {
        goto zlError;
    }

    return;

zlError:

    FUNC_3(VAR_5, VAR_6, 0);
    return;

}
