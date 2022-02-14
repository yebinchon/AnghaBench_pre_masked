
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef size_t u16_t ;
struct TYPE_3__ {size_t uniHead; size_t uniTail; size_t* bcmcHead; size_t* bcmcTail; int *** bcmcArray; int ** uniArray; } ;
struct TYPE_4__ {TYPE_1__ ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(zdev_t* VAR_5)
{
    u16_t VAR_6;
    u16_t VAR_7;
    u16_t VAR_8;
    zbuf_t* VAR_9 = ((void*)0);
    FUNC_4(VAR_5);
    FUNC_2();

    VAR_7 = 0;
    VAR_6 = 0;
    while (1)
    {
        VAR_9 = ((void*)0);
        FUNC_3(VAR_5);
        if (VAR_4->ap.uniHead != VAR_4->ap.uniTail)
        {
            VAR_9 = VAR_4->ap.uniArray[VAR_4->ap.uniHead];
            VAR_4->ap.uniHead = (VAR_4->ap.uniHead + 1) & (VAR_3 - 1);
        }
        else
        {
            VAR_6 = 1;
        }
        FUNC_5(VAR_5);

        if (VAR_9 != ((void*)0))
        {
            FUNC_0(VAR_5, VAR_9, VAR_1);
        }
        FUNC_1(VAR_7++ < (VAR_3*2));

        if (VAR_6 != 0)
        {
            break;
        }
    }

    for (VAR_8=0; VAR_8<VAR_2; VAR_8++)
    {
        VAR_7 = 0;
        VAR_6 = 0;
        while (1)
        {
            VAR_9 = ((void*)0);
            FUNC_3(VAR_5);
            if (VAR_4->ap.bcmcHead[VAR_8] != VAR_4->ap.bcmcTail[VAR_8])
            {
                VAR_9 = VAR_4->ap.bcmcArray[VAR_8][VAR_4->ap.bcmcHead[VAR_8]];
                VAR_4->ap.bcmcHead[VAR_8] = (VAR_4->ap.bcmcHead[VAR_8] + 1)
                        & (VAR_0 - 1);
            }
            else
            {
                VAR_6 = 1;
            }
            FUNC_5(VAR_5);

            if (VAR_9 != ((void*)0))
            {
                FUNC_0(VAR_5, VAR_9, VAR_1);
            }
            FUNC_1(VAR_7++ < (VAR_0*2));

            if (VAR_6 != 0)
            {
                break;
            }
        }
    }
    return;
}
