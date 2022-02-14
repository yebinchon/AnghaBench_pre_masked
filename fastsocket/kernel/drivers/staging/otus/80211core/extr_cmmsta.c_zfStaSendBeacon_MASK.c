
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u16_t ;
struct TYPE_5__ {int* bssid; scalar_t__ authMode; scalar_t__ ibssAdditionalIESize; int * capability; } ;
struct TYPE_4__ {scalar_t__ bIbssGMode; } ;
struct TYPE_6__ {int* macAddr; int beaconInterval; scalar_t__ frequency; int supportMode; scalar_t__ wlanMode; TYPE_2__ sta; TYPE_1__ wfc; scalar_t__ erpElement; int mmseq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_3__* VAR_10 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int *,int,int ,int ) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int *,int *,int) ;
 int * FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int *,int,int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int *,int ,int ) ;
 int FUNC_17 (int *,int *,int,int) ;

void FUNC_18(zdev_t* VAR_11)
{
    zbuf_t* VAR_12;
    u16_t VAR_13, VAR_14;

    FUNC_14(VAR_11);

    FUNC_12();




    if ((VAR_12 = FUNC_9(VAR_11, 1024)) == ((void*)0))
    {
        FUNC_11("Allocate beacon buffer failed");
        return;
    }

    VAR_13 = 0;


    FUNC_17(VAR_11, VAR_12, VAR_13, 0x0080);
    VAR_13+=2;

    FUNC_17(VAR_11, VAR_12, VAR_13, 0x0000);
    VAR_13+=2;

    FUNC_17(VAR_11, VAR_12, VAR_13, 0xffff);
    VAR_13+=2;
    FUNC_17(VAR_11, VAR_12, VAR_13, 0xffff);
    VAR_13+=2;
    FUNC_17(VAR_11, VAR_12, VAR_13, 0xffff);
    VAR_13+=2;

    FUNC_17(VAR_11, VAR_12, VAR_13, VAR_10->macAddr[0]);
    VAR_13+=2;
    FUNC_17(VAR_11, VAR_12, VAR_13, VAR_10->macAddr[1]);
    VAR_13+=2;
    FUNC_17(VAR_11, VAR_12, VAR_13, VAR_10->macAddr[2]);
    VAR_13+=2;

    FUNC_17(VAR_11, VAR_12, VAR_13, VAR_10->sta.bssid[0]);
    VAR_13+=2;
    FUNC_17(VAR_11, VAR_12, VAR_13, VAR_10->sta.bssid[1]);
    VAR_13+=2;
    FUNC_17(VAR_11, VAR_12, VAR_13, VAR_10->sta.bssid[2]);
    VAR_13+=2;


    FUNC_13(VAR_11);
    VAR_14 = ((VAR_10->mmseq++)<<4);
    FUNC_15(VAR_11);
    FUNC_17(VAR_11, VAR_12, VAR_13, VAR_14);
    VAR_13+=2;


    VAR_13+=8;


    FUNC_17(VAR_11, VAR_12, VAR_13, VAR_10->beaconInterval);
    VAR_13+=2;


    FUNC_16(VAR_11, VAR_12, VAR_13++, VAR_10->sta.capability[0]);
    FUNC_16(VAR_11, VAR_12, VAR_13++, VAR_10->sta.capability[1]);


    VAR_13 = FUNC_8(VAR_11, VAR_12, VAR_13);

    if(VAR_10->frequency <= VAR_1)
    {


     VAR_13 = FUNC_5(VAR_11, VAR_12, VAR_13,
                                    VAR_8, VAR_3);


     VAR_13 = FUNC_3(VAR_11, VAR_12, VAR_13);

     VAR_13 = FUNC_7(VAR_11, VAR_12, VAR_13);

        if( VAR_10->wfc.bIbssGMode
            && (VAR_10->supportMode & (VAR_5|VAR_6)) )
        {

            VAR_10->erpElement = 0;
            VAR_13 = FUNC_4(VAR_11, VAR_12, VAR_13);
        }



        if ( VAR_10->sta.authMode == VAR_0 )
        {
            VAR_13 = FUNC_10(VAR_11, VAR_12, VAR_13, VAR_9);
        }

        if( VAR_10->wfc.bIbssGMode
            && (VAR_10->supportMode & (VAR_5|VAR_6)) )
        {


            VAR_13 = FUNC_5(VAR_11, VAR_12, VAR_13,
                                         VAR_7, VAR_4);
     }
    }
    else
    {

     VAR_13 = FUNC_5(VAR_11, VAR_12, VAR_13,
                                     VAR_8, VAR_4);


     VAR_13 = FUNC_3(VAR_11, VAR_12, VAR_13);

     VAR_13 = FUNC_7(VAR_11, VAR_12, VAR_13);



        if ( VAR_10->sta.authMode == VAR_0 )
        {
            VAR_13 = FUNC_10(VAR_11, VAR_12, VAR_13, VAR_9);
        }
    }

    if ( VAR_10->wlanMode != VAR_2 )
    {


        VAR_13 = FUNC_2(VAR_11, VAR_12, VAR_13);


        VAR_13 = FUNC_1(VAR_11, VAR_12, VAR_13);
    }

    if ( VAR_10->sta.ibssAdditionalIESize )
        VAR_13 = FUNC_6(VAR_11, VAR_12, VAR_13);



    FUNC_0(VAR_11, VAR_12, VAR_13);



}
