
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
struct zsQueue {size_t head; size_t tail; int sizeMask; TYPE_1__* cell; } ;
struct TYPE_2__ {int * buf; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

zbuf_t* FUNC_3(zdev_t* VAR_0, struct zsQueue* VAR_1)
{
    zbuf_t* VAR_2 = ((void*)0);
    FUNC_0();

    FUNC_1(VAR_0);

    if (VAR_1->head != VAR_1->tail)
    {
        VAR_2 = VAR_1->cell[VAR_1->head].buf;
        VAR_1->head = (VAR_1->head+1) & VAR_1->sizeMask;
    }

    FUNC_2(VAR_0);

    return VAR_2;
}
