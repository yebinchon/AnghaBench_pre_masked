
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
struct TYPE_2__ {scalar_t__ wlanMode; int tick; int swSniffer; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(zdev_t* VAR_2)
{
    FUNC_6(VAR_2);


    if (VAR_1->wlanMode != VAR_0 && !VAR_1->swSniffer)
    {
        if ( VAR_1->tick & 1 )
        {
            FUNC_5(VAR_2);
        }

        FUNC_3(VAR_2);
        FUNC_4(VAR_2);
        FUNC_2(VAR_2);
        FUNC_1(VAR_2);
    }







}
