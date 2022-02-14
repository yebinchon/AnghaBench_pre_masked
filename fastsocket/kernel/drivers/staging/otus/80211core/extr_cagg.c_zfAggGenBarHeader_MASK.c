
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u16_t ;
struct TYPE_2__ {int* macAddr; scalar_t__ wlanMode; int mmseq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

u16_t FUNC_4(zdev_t* VAR_3, u16_t* VAR_4,
        u16_t* VAR_5, u16_t VAR_6, zbuf_t* VAR_7, u16_t VAR_8, u8_t VAR_9)
{
    u8_t VAR_10 = 16+8;


    FUNC_2(VAR_3);

    FUNC_0();





    VAR_5[0] = 16+VAR_6+4;
    VAR_5[1] = 0x8;



    VAR_5[2] = 0x0f00;
    VAR_5[3] = 0x0000;
    VAR_5[4+0] = VAR_1;



    VAR_5[4+1] = 0;


    VAR_5[4+2] = VAR_4[0];
    VAR_5[4+3] = VAR_4[1];
    VAR_5[4+4] = VAR_4[2];


    VAR_5[4+5] = VAR_2->macAddr[0];
    VAR_5[4+6] = VAR_2->macAddr[1];
    if (VAR_2->wlanMode == VAR_0)
    {



        VAR_5[4+7] = VAR_2->macAddr[2] + (VAR_8<<8);

    }
    else
    {
        VAR_5[4+7] = VAR_2->macAddr[2];
    }


    FUNC_1(VAR_3);
    VAR_5[4+11] = ((VAR_2->mmseq++)<<4);
    FUNC_3(VAR_3);


    return VAR_10;
}
