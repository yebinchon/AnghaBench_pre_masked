
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
struct TYPE_3__ {int adapterState; void* bChannelScan; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 TYPE_2__* VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

u8_t FUNC_7(zdev_t* VAR_5, u8_t VAR_6)
{
    u8_t VAR_7 = VAR_1;

    FUNC_5(VAR_5);

    FUNC_3();






    switch(VAR_6)
    {
    case 128:
        FUNC_0(VAR_5, VAR_2);


            FUNC_1(VAR_5, VAR_3);
        break;
    case 129:

            FUNC_1(VAR_5, VAR_3);
        break;
    case 130:
        break;
    default:
        break;
    }



        FUNC_4(VAR_5);
        VAR_4->sta.adapterState = VAR_6;
        FUNC_6(VAR_5);

        FUNC_2("change adapter state = ", VAR_6);


    return VAR_7;
}
