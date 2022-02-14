
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u32_t ;
typedef int u16_t ;
struct agg_tid_rx {int dummy; } ;
struct TYPE_3__ {scalar_t__ EnableHT; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 struct agg_tid_rx* FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int *,int) ;

struct agg_tid_rx* FUNC_6(zdev_t* VAR_2, zbuf_t* VAR_3)
{
    u16_t VAR_4, VAR_5[3], VAR_6, VAR_7, VAR_8;
    u8_t VAR_9;
    u16_t VAR_10 = 0;
    u16_t VAR_11;
    u16_t VAR_12;
    u16_t VAR_13;
    u16_t VAR_14;
    u32_t VAR_15;




    FUNC_3(VAR_2);


    VAR_11 = FUNC_5(VAR_2, VAR_3, 22) >> 4;

    if (VAR_1->sta.EnableHT == 0)
    {
        return ((void*)0);
    }

    VAR_13 = FUNC_4(VAR_2, VAR_3, 0);
    VAR_12 = VAR_13 & 0xf;
    VAR_14 = VAR_13 & 0xf0;


    if (VAR_12 != VAR_0)
    {
        return ((void*)0);
    }







    FUNC_0("In                   %5d, %12u\n", VAR_11, VAR_15);
    VAR_4 = FUNC_5(VAR_2, VAR_3, VAR_10+4);

    VAR_5[0] = FUNC_5(VAR_2, VAR_3, VAR_10+10);
    VAR_5[1] = FUNC_5(VAR_2, VAR_3, VAR_10+12);
    VAR_5[2] = FUNC_5(VAR_2, VAR_3, VAR_10+14);




    VAR_7 = FUNC_2(VAR_2, VAR_5);
    if ((VAR_4 & 0x1) == 0 && VAR_7 == 0)
    {
        return ((void*)0);

    }

    return ((void*)0);
}
