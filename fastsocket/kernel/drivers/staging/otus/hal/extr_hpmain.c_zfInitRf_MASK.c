
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u32_t ;
typedef scalar_t__ u16_t ;
struct zsHpPriv {scalar_t__ hwFrequency; } ;
struct TYPE_2__ {scalar_t__ hpPrivate; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int *,int,int ,int ,int*,int*,int*,int*) ;
 scalar_t__ FUNC_1 (int *,int*,int,int ,int ) ;
 int FUNC_2 (int *,int,int ,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int *) ;

void FUNC_7(zdev_t* VAR_3, u32_t VAR_4)
{
    u32_t VAR_5[8];
    u16_t VAR_6;
    int VAR_7;
    int VAR_8;
    int VAR_9;
    int VAR_10;

    FUNC_6(VAR_3);

    FUNC_5(" initRf frequency = ", VAR_4);

    if (VAR_4 == 0)
    {
        VAR_4 = 2412;
    }


    FUNC_3(VAR_3, VAR_4);

    FUNC_2(VAR_3, VAR_4, 0, 0);


    ((struct zsHpPriv*)VAR_2->hpPrivate)->hwFrequency = (u16_t)VAR_4;

    FUNC_0(VAR_3,
                           VAR_4, 0, 0,
                           &VAR_7,
                           &VAR_8,
                           &VAR_9,
                           &VAR_10);


    VAR_4 = VAR_4*1000;
    VAR_5[0] = 28 | (VAR_0 << 8);
    VAR_5[1] = VAR_4;
    VAR_5[2] = 0;
    VAR_5[3] = 1;
    VAR_5[4] = VAR_7;
    VAR_5[5] = VAR_8;
    VAR_5[6] = VAR_9;
    VAR_5[7] = VAR_10;

    VAR_6 = FUNC_1(VAR_3, VAR_5, 32, VAR_1, 0);


    FUNC_4(VAR_3, 1000);
}
