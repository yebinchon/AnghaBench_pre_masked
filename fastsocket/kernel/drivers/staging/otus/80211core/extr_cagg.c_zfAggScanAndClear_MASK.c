
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u32_t ;
typedef size_t u16_t ;
struct TYPE_6__ {scalar_t__ state; int tick; TYPE_2__** aggQPool; } ;
struct TYPE_5__ {int aggQEnabled; size_t aggHead; size_t aggTail; int clearFlag; scalar_t__ lastArrival; int size; TYPE_1__* aggvtxq; } ;
struct TYPE_4__ {scalar_t__ arrivalTime; } ;
typedef TYPE_2__* TID_TX ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_3__* VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int *,size_t,size_t) ;
 int FUNC_6 (int ,char*,scalar_t__) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

u16_t FUNC_11(zdev_t* VAR_7, u32_t VAR_8)
{
    u16_t VAR_9;
    u16_t VAR_10;
    u16_t VAR_11;
    u32_t VAR_12;
    u32_t VAR_13;

    TID_TX VAR_14;

    FUNC_9(VAR_7);

    FUNC_7();

    if(!(VAR_6->state == VAR_5)) return 0;
    FUNC_3(VAR_7, 1);
    VAR_12 = FUNC_4();
    for (VAR_9=0; VAR_9<VAR_2; VAR_9++)
    {
        if (!VAR_6->aggQPool[VAR_9]) return 0;
        if (1 == VAR_6->aggQPool[VAR_9]->aggQEnabled)
        {
            VAR_14 = VAR_6->aggQPool[VAR_9];
            FUNC_8(VAR_7);

            VAR_10 = VAR_14->aggHead;
            VAR_11 = VAR_14->aggTail;

            VAR_13 = (u32_t)VAR_14->aggvtxq[VAR_14->aggTail].arrivalTime;


            if((VAR_12 - VAR_13) <= VAR_0)
            {

            }
            else if((VAR_14->size = FUNC_5(VAR_7, VAR_14->aggHead, VAR_14->aggTail)) > 0)
            {

                VAR_14->clearFlag = 1;
            }

            if (VAR_14->size == 0)
            {



                if (VAR_12 - VAR_14->lastArrival > VAR_1)
                {
                    FUNC_6(VAR_3, "delete queue, idle for n sec. n = ", VAR_1/10);


                    FUNC_10(VAR_7);
                    FUNC_2(VAR_7, VAR_9);
                    FUNC_8(VAR_7);
                }
            }

            FUNC_10(VAR_7);
        }
    }

        FUNC_1(VAR_7, VAR_8);







    return VAR_4;
}
