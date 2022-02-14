
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u32_t ;
typedef int u16_t ;
struct zsHpPriv {int retransmissionEvent; } ;
struct TYPE_2__ {struct zsHpPriv* hpPrivate; int (* zfcbHwWatchDogNotify ) (int *) ;} ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;



 int FUNC_1 (int *) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (int *,int,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int *) ;

void FUNC_10(zdev_t* VAR_2, u32_t* VAR_3, u16_t VAR_4)
{

    u8_t VAR_5;
    u8_t *VAR_6;
    u16_t VAR_7;
    u32_t VAR_8;
    FUNC_9(VAR_2);

    FUNC_8(VAR_0, "zfiUsbRegIn()");

    VAR_6 = (u8_t *)VAR_3;


    VAR_5 = *(VAR_6+1);
    VAR_6 = VAR_6+4;



    if ((VAR_5 & 0xC0) == 0xC0)
    {
        if (VAR_5 == 0xC0)
        {
            FUNC_3(VAR_2, 0, VAR_6);

        }
        else if (VAR_5 == 0xC1)
        {
            VAR_7 = (u16_t)(VAR_3[3] >> 16);


            VAR_3[8] = VAR_3[8] >> 2 | (VAR_3[9] & 0x1) << 6;
            switch (VAR_7)
            {
            case 130 :
                FUNC_3(VAR_2, 1, VAR_6);
                break;
            case 128 :
                FUNC_3(VAR_2, 2, VAR_6);
                break;
            case 129 :
                FUNC_3(VAR_2, 3, VAR_6);
                break;
            }
        }
        else if (VAR_5 == 0xC2)
        {
            FUNC_2(VAR_2, VAR_6);
        }
        else if (VAR_5 == 0xC3)
        {
            FUNC_4(VAR_2);
        }
        else if (VAR_5 == 0xC4)
        {
            VAR_8 = (VAR_3[1] >> 16) + ((VAR_3[2] & 0xFFFF) << 16 );

        }
        else if (VAR_5 == 0xC5)
        {
            u16_t VAR_9;






            for (VAR_9=1; VAR_9<(VAR_4/4); VAR_9++) {
                VAR_6 = (u8_t *)(VAR_3+VAR_9);

                FUNC_3(VAR_2, 4, VAR_6);
            }
        }
        else if (VAR_5 == 0xC6)
        {
            FUNC_7("\n\n WatchDog interrupt!!! : 0xC6 \n\n");
            if (VAR_1->zfcbHwWatchDogNotify != ((void*)0))
            {
                VAR_1->zfcbHwWatchDogNotify(VAR_2);
            }
        }
        else if (VAR_5 == 0xC8)
        {



            FUNC_6(VAR_2);
        }
        else if (VAR_5 == 0xC9)
        {
            struct zsHpPriv* VAR_10=VAR_1->hpPrivate;

            FUNC_7("##### Tx retransmission 5 times event #####");


            VAR_10->retransmissionEvent = 1;
        }
    }
    else
    {
        FUNC_5(VAR_2, VAR_3, VAR_4);
    }
}
