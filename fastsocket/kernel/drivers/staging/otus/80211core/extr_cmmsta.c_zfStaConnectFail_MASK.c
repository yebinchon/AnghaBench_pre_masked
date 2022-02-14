
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u16_t ;
struct TYPE_3__ {scalar_t__ bAutoReconnect; } ;
struct TYPE_4__ {TYPE_1__ sta; int (* zfcbConnectNotify ) (int *,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int *) ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;

void FUNC_7(zdev_t* VAR_3, u16_t VAR_4, u16_t* VAR_5, u8_t VAR_6)
{
    FUNC_6(VAR_3);


    FUNC_1(VAR_3, VAR_1);





    if (VAR_2->zfcbConnectNotify != ((void*)0))
    {
        VAR_2->zfcbConnectNotify(VAR_3, VAR_4, VAR_5);
    }


    FUNC_4(VAR_3, (u8_t *)VAR_5, VAR_6);


    if ( VAR_2->sta.bAutoReconnect )
    {
        FUNC_5("Start internal scan...");
        FUNC_3(VAR_3, VAR_0);
        FUNC_2(VAR_3, VAR_0);
    }
}
