
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef size_t u16_t ;
struct zsQueue {size_t head; size_t tail; size_t sizeMask; TYPE_1__* cell; } ;
struct TYPE_2__ {int * buf; int tick; } ;


 scalar_t__ FUNC_0 (int *,int *,int*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

zbuf_t* FUNC_4(zdev_t* VAR_0, struct zsQueue* VAR_1, u8_t* VAR_2, u8_t* VAR_3)
{
    zbuf_t* VAR_4;
    zbuf_t* VAR_5 = ((void*)0);
    u16_t VAR_6, VAR_7;
    FUNC_1();

    *VAR_3 = 0;

    FUNC_2(VAR_0);

    VAR_6 = VAR_1->head;

    while (1)
    {
        if (VAR_6 != VAR_1->tail)
        {
            VAR_4 = VAR_1->cell[VAR_6].buf;


            if (FUNC_0(VAR_0, VAR_4, VAR_2) == 0)
            {
                VAR_5 = VAR_4;

                while ((VAR_7 =((VAR_6+1)&VAR_1->sizeMask)) != VAR_1->tail)
                {
                    VAR_1->cell[VAR_6].buf = VAR_1->cell[VAR_7].buf;
                    VAR_1->cell[VAR_6].tick = VAR_1->cell[VAR_7].tick;

                    if ((*VAR_3 == 0) && (FUNC_0(VAR_0,
                            VAR_1->cell[VAR_7].buf, VAR_2) == 0))
                    {
                        *VAR_3 = 1;
                    }

                    VAR_6 = VAR_7;
                }
                VAR_1->tail = (VAR_1->tail-1) & VAR_1->sizeMask;

                FUNC_3(VAR_0);
                return VAR_5;
            }
            VAR_6 = (VAR_6 + 1) & VAR_1->sizeMask;
        }
        else
        {
            break;
        }
    }

    FUNC_3(VAR_0);

    return VAR_5;

}
