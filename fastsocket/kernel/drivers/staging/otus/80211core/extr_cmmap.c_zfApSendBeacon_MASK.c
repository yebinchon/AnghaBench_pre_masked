
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u16_t ;
struct TYPE_3__ {scalar_t__ beaconCounter; scalar_t__ vapNumber; int* capab; scalar_t__* hideSsid; scalar_t__* wlanType; int* wpaSupport; int qosMode; } ;
struct TYPE_4__ {int* macAddr; int beaconInterval; int frequency; TYPE_1__ ap; int mmseq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_2__* VAR_8 ;
 int FUNC_0 (int *,int *,int,int) ;
 int FUNC_1 (int *,int *,int,int) ;
 int FUNC_2 (int *,int *,int,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int *,int *,int,int ,int ) ;
 int FUNC_9 (int *,int *,int,int) ;
 int * FUNC_10 (int *,int) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ,char*,int) ;
 int FUNC_13 () ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int *,int ,int ) ;
 int FUNC_18 (int *,int *,int,int) ;

void FUNC_19(zdev_t* VAR_9)
{
    zbuf_t* VAR_10;
    u16_t VAR_11;
    u16_t VAR_12;
    u16_t VAR_13;

    FUNC_15(VAR_9);

    FUNC_13();

    VAR_8->ap.beaconCounter++;
    if (VAR_8->ap.beaconCounter >= VAR_8->ap.vapNumber)
    {
        VAR_8->ap.beaconCounter = 0;
    }
    VAR_12 = VAR_8->ap.beaconCounter;


    FUNC_12(VAR_1, "Send beacon, vap=", VAR_12);


    if ((VAR_10 = FUNC_10(VAR_9, 1024)) == ((void*)0))
    {
        FUNC_11(VAR_0, "Alloc beacon buf Fail!");
        return;
    }

    VAR_11 = 0;



    FUNC_18(VAR_9, VAR_10, VAR_11, 0x0080);
    VAR_11+=2;

    FUNC_18(VAR_9, VAR_10, VAR_11, 0x0000);
    VAR_11+=2;

    FUNC_18(VAR_9, VAR_10, VAR_11, 0xffff);
    VAR_11+=2;
    FUNC_18(VAR_9, VAR_10, VAR_11, 0xffff);
    VAR_11+=2;
    FUNC_18(VAR_9, VAR_10, VAR_11, 0xffff);
    VAR_11+=2;

    FUNC_18(VAR_9, VAR_10, VAR_11, VAR_8->macAddr[0]);
    VAR_11+=2;
    FUNC_18(VAR_9, VAR_10, VAR_11, VAR_8->macAddr[1]);
    VAR_11+=2;



    FUNC_18(VAR_9, VAR_10, VAR_11, (VAR_8->macAddr[2]+(VAR_12<<8)));

    VAR_11+=2;

    FUNC_18(VAR_9, VAR_10, VAR_11, VAR_8->macAddr[0]);
    VAR_11+=2;
    FUNC_18(VAR_9, VAR_10, VAR_11, VAR_8->macAddr[1]);
    VAR_11+=2;



    FUNC_18(VAR_9, VAR_10, VAR_11, (VAR_8->macAddr[2]+(VAR_12<<8)));

    VAR_11+=2;


    FUNC_14(VAR_9);
    VAR_13 = ((VAR_8->mmseq++)<<4);
    FUNC_16(VAR_9);
    FUNC_18(VAR_9, VAR_10, VAR_11, VAR_13);
    VAR_11+=2;


    FUNC_18(VAR_9, VAR_10, VAR_11, 0);
    FUNC_18(VAR_9, VAR_10, VAR_11+2, 0);
    FUNC_18(VAR_9, VAR_10, VAR_11+4, 0);
    FUNC_18(VAR_9, VAR_10, VAR_11+6, 0);
    VAR_11+=8;


    FUNC_18(VAR_9, VAR_10, VAR_11, VAR_8->beaconInterval);
    VAR_11+=2;


    FUNC_18(VAR_9, VAR_10, VAR_11, VAR_8->ap.capab[VAR_12]);
    VAR_11+=2;


    if (VAR_8->ap.hideSsid[VAR_12] == 0)
    {
        VAR_11 = FUNC_0(VAR_9, VAR_10, VAR_11, VAR_12);
    }
    else
    {
        FUNC_17(VAR_9, VAR_10, VAR_11++, VAR_5);
        FUNC_17(VAR_9, VAR_10, VAR_11++, 0);

    }


    if ( VAR_8->frequency < 3000 )
    {
    VAR_11 = FUNC_8(VAR_9, VAR_10, VAR_11,
                                  VAR_6, VAR_2);
    }
    else
    {
        VAR_11 = FUNC_8(VAR_9, VAR_10, VAR_11,
                                  VAR_6, VAR_3);
    }


    VAR_11 = FUNC_6(VAR_9, VAR_10, VAR_11);


    VAR_11 = FUNC_1(VAR_9, VAR_10, VAR_11, VAR_12);


    if (VAR_8->ap.wlanType[VAR_12] != VAR_7)
    {
        if ( VAR_8->frequency < 3000 )
        {

        VAR_11 = FUNC_7(VAR_9, VAR_10, VAR_11);


        VAR_11 = FUNC_8(VAR_9, VAR_10, VAR_11,
                                      VAR_4, VAR_3);
    }
    }



    if (VAR_8->ap.wpaSupport[VAR_12] == 1)
    {
        VAR_11 = FUNC_9(VAR_9, VAR_10, VAR_11, VAR_12);
    }


    if (VAR_8->ap.qosMode == 1)
    {
        VAR_11 = FUNC_2(VAR_9, VAR_10, VAR_11, VAR_12);
    }


    VAR_11 = FUNC_5(VAR_9, VAR_10, VAR_11);


    VAR_11 = FUNC_4(VAR_9, VAR_10, VAR_11);



    FUNC_3(VAR_9, VAR_10, VAR_11);







}
