
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u16_t ;
struct TYPE_3__ {int vapNumber; int apBitmap; } ;
struct TYPE_4__ {int beaconInterval; int* macAddr; int gRateBasic; int bRateBasic; TYPE_1__ ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (int *,int ,int,int,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int*,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;

void FUNC_6(zdev_t* VAR_4)
{
    u16_t VAR_5;

    FUNC_5(VAR_4);

    FUNC_0(VAR_4, VAR_2, (VAR_3->beaconInterval/VAR_3->ap.vapNumber), 1, 0);


    FUNC_1(VAR_4, VAR_0);



    if (VAR_3->ap.vapNumber >= 2)
    {
        for (VAR_5=1; VAR_5<VAR_1; VAR_5++)
        {
            if (((VAR_3->ap.apBitmap >> VAR_5) & 0x1) != 0)
            {
                u16_t VAR_6[3];
                VAR_6[0] = VAR_3->macAddr[0];
                VAR_6[1] = VAR_3->macAddr[1];



                VAR_6[2] = VAR_3->macAddr[2] + (VAR_5<<8);

                FUNC_3(VAR_4, VAR_6, VAR_5);

            }
        }
    }


    FUNC_2(VAR_4, VAR_3->bRateBasic, VAR_3->gRateBasic);


    FUNC_4(VAR_4, 1);

    return;
}
