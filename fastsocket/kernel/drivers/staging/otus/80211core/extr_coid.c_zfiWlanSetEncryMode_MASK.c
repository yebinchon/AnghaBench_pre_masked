
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef void* u8_t ;
struct TYPE_3__ {scalar_t__ encryMode; } ;
struct TYPE_4__ {scalar_t__ wlanMode; TYPE_1__ ws; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(zdev_t* VAR_4, u8_t VAR_5)
{
    FUNC_2(VAR_4);

    FUNC_0();

    FUNC_1(VAR_4);
    if (VAR_3->wlanMode == VAR_1)
    {

        if ((VAR_3->ws.encryMode != VAR_0) && (VAR_3->ws.encryMode != VAR_2))
            VAR_3->ws.encryMode = VAR_5;
    }
    else
        VAR_3->ws.encryMode = VAR_5;
    FUNC_3(VAR_4);
}
