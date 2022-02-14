
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u32_t ;
typedef scalar_t__ u16_t ;
struct zsHpPriv {int hwFrequency; } ;
struct TYPE_2__ {scalar_t__ hpPrivate; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int *,scalar_t__,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,scalar_t__) ;

void FUNC_5(zdev_t* VAR_5, zbuf_t* VAR_6, u16_t VAR_7)
{
    u32_t VAR_8, VAR_9;
    u16_t VAR_10;
    FUNC_3(VAR_5);


    for (VAR_10 = 0; VAR_10<VAR_7; VAR_10+=4)
    {
        VAR_9 = FUNC_4(VAR_5, VAR_6, VAR_10);
        VAR_8 = FUNC_4(VAR_5, VAR_6, VAR_10+2);

        FUNC_0(VAR_5, VAR_0+VAR_10, (VAR_8<<16)+VAR_9);
    }


    if (((struct zsHpPriv*)VAR_4->hpPrivate)->hwFrequency < 3000)
    {
    FUNC_0(VAR_5, VAR_3, ((VAR_7+4)<<(3+16))+0x0400);
    }
    else
    {
        FUNC_0(VAR_5, VAR_3, ((VAR_7+4)<<(16))+0x001b);
    }


    FUNC_0(VAR_5, VAR_2, VAR_7+4);


    FUNC_0(VAR_5, VAR_1, 1);
    FUNC_1(VAR_5);


    FUNC_2(VAR_5, VAR_6, 0);

    return;
}
