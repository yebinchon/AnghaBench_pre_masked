
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u32_t ;
typedef int u16_t ;
struct zsQueue {int tail; int sizeMask; int head; TYPE_1__* cell; } ;
struct TYPE_2__ {int tick; int * buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;

u16_t FUNC_1(zdev_t* VAR_3, struct zsQueue* VAR_4, zbuf_t* VAR_5, u32_t VAR_6)
{
    u16_t VAR_7 = VAR_0;

    FUNC_0(VAR_1, "zfQueuePutNcs()");

    if (((VAR_4->tail+1)&VAR_4->sizeMask) != VAR_4->head)
    {
        VAR_4->cell[VAR_4->tail].buf = VAR_5;
        VAR_4->cell[VAR_4->tail].tick = VAR_6;
        VAR_4->tail = (VAR_4->tail+1) & VAR_4->sizeMask;
        VAR_7 = VAR_2;
    }

    return VAR_7;
}
