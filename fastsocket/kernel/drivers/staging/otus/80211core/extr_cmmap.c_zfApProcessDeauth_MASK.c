
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u16_t ;
struct TYPE_5__ {TYPE_1__* staTable; } ;
struct TYPE_6__ {int (* zfcbDisAsocNotify ) (int *,int *,int) ;TYPE_2__ ap; } ;
struct TYPE_4__ {scalar_t__ valid; } ;


 int FUNC_0 (int *,int *,int) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(zdev_t* VAR_1, zbuf_t* VAR_2, u16_t* VAR_3, u16_t VAR_4)
{
    u16_t VAR_5;
    FUNC_4(VAR_1);
    FUNC_2();

    FUNC_3(VAR_1);

    if ((VAR_5 = FUNC_1(VAR_1, VAR_3)) != 0xffff)
    {

        VAR_0->ap.staTable[VAR_5].valid = 0;
        if (VAR_0->zfcbDisAsocNotify != ((void*)0))
        {
            VAR_0->zfcbDisAsocNotify(VAR_1, (u8_t*)VAR_3, VAR_4);
        }
    }
    FUNC_5(VAR_1);

}
