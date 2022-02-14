
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef size_t u8_t ;
typedef size_t u16_t ;
struct zsQueue {size_t head; size_t tail; size_t sizeMask; TYPE_1__* cell; } ;
struct TYPE_7__ {TYPE_2__* staTable; } ;
struct TYPE_8__ {TYPE_3__ ap; } ;
struct TYPE_6__ {scalar_t__ psMode; int qosInfo; } ;
struct TYPE_5__ {int * buf; } ;


 TYPE_4__* VAR_0 ;
 size_t FUNC_0 (int *,size_t*) ;
 int FUNC_1 (int *,struct zsQueue*,size_t,size_t*) ;
 int FUNC_2 (int *,int *,int ) ;
 size_t FUNC_3 (int *,int *,size_t) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(zdev_t* VAR_1, struct zsQueue* VAR_2,
        u8_t* VAR_3, u16_t* VAR_4)
{
    zbuf_t* VAR_5;
    u8_t VAR_6[6];
    u16_t VAR_7, VAR_8, VAR_9, VAR_10;
    u16_t VAR_11;
    u16_t VAR_12;
    FUNC_6(VAR_1);
    FUNC_4();

    FUNC_5(VAR_1);

    VAR_9 = VAR_2->head;

    while (VAR_9 != VAR_2->tail)
    {
        VAR_5 = VAR_2->cell[VAR_9].buf;
        for (VAR_10=0; VAR_10<6; VAR_10++)
        {
            VAR_6[VAR_10] = FUNC_3(VAR_1, VAR_5, VAR_10);
        }

        if (((VAR_7 = FUNC_0(VAR_1, (u16_t*)VAR_6)) != 0xffff)
                && (VAR_0->ap.staTable[VAR_7].psMode != 0))
        {

            if ((VAR_0->ap.staTable[VAR_7].qosInfo & 0xf) == 0xf)
            {
                VAR_8 = VAR_7 + 1;
                VAR_11 = (1 << (VAR_8 & 0x7));
                VAR_12 = (VAR_8 >> 3);
                VAR_3[VAR_12] |= VAR_11;

                if (VAR_12>*VAR_4)
                {
                    *VAR_4 = VAR_12;
                }
            }
            VAR_9 = (VAR_9+1) & VAR_2->sizeMask;
        }
        else
        {

            FUNC_1(VAR_1, VAR_2, VAR_9, VAR_6);
            FUNC_2(VAR_1, VAR_5, 0);
        }
    }
    FUNC_7(VAR_1);

    return;
}
