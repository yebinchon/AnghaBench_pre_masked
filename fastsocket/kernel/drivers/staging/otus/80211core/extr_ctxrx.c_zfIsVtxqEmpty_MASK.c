
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
struct TYPE_2__ {scalar_t__ vmmqHead; scalar_t__ vmmqTail; scalar_t__* vtxqHead; scalar_t__* vtxqTail; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

u8_t FUNC_4(zdev_t* VAR_3)
{
    u8_t VAR_4 = VAR_1;
    u8_t VAR_5;

    FUNC_2(VAR_3);

    FUNC_0();

    FUNC_1(VAR_3);

    if (VAR_2->vmmqHead != VAR_2->vmmqTail)
    {
        VAR_4 = VAR_0;
        goto check_done;
    }

    for(VAR_5=0; VAR_5 < 4; VAR_5++)
    {
        if (VAR_2->vtxqHead[VAR_5] != VAR_2->vtxqTail[VAR_5])
        {
            VAR_4 = VAR_0;
            goto check_done;
        }
    }

check_done:
    FUNC_3(VAR_3);
    return VAR_4;
}
