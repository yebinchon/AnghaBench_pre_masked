
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u32_t ;
struct zsQueue {size_t head; size_t tail; int sizeMask; TYPE_1__* cell; } ;
struct TYPE_2__ {int tick; int * buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(zdev_t* VAR_2, struct zsQueue* VAR_3, u32_t VAR_4, u32_t VAR_5)
{
    zbuf_t* VAR_6;
    u32_t VAR_7;
    FUNC_2();

    while (1)
    {
        VAR_6 = ((void*)0);
        FUNC_3(VAR_2);

        if (VAR_3->head != VAR_3->tail)
        {
            VAR_7 = VAR_3->cell[VAR_3->head].tick;
            if (((VAR_4 - VAR_7)*VAR_1) > VAR_5)
            {
                VAR_6 = VAR_3->cell[VAR_3->head].buf;
                VAR_3->head = (VAR_3->head+1) & VAR_3->sizeMask;
            }
        }

        FUNC_4(VAR_2);

        if (VAR_6 != ((void*)0))
        {
            FUNC_1(VAR_0, "Age frame in queue!");
            FUNC_0(VAR_2, VAR_6, 0);
        }
        else
        {
            break;
        }
    }
    return;
}
