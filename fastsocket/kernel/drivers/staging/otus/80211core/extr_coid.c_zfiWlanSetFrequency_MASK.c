
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u8_t ;
typedef int u32_t ;
typedef void* u16_t ;
struct TYPE_3__ {void* frequency; scalar_t__ autoSetFrequency; } ;
struct TYPE_4__ {TYPE_1__ ws; void* frequency; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int *,void*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(zdev_t* VAR_1, u32_t VAR_2, u8_t VAR_3)
{
    FUNC_3(VAR_1);

    FUNC_1();

    if ( VAR_3 )
    {
        FUNC_2(VAR_1);
        VAR_0->frequency = (u16_t) (VAR_2/1000);
        FUNC_4(VAR_1);
        FUNC_0(VAR_1, VAR_0->frequency);
    }
    else
    {
        FUNC_2(VAR_1);
        if( VAR_2 == 0 )
        {
            VAR_0->ws.autoSetFrequency = 0;
        }
        VAR_0->ws.frequency = (u16_t) (VAR_2/1000);
        FUNC_4(VAR_1);
    }
}
