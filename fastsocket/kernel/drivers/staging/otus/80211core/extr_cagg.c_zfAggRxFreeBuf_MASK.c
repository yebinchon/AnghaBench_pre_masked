
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef size_t u16_t ;
struct baw_enabler {int dummy; } ;
struct agg_tid_rx {size_t baw_head; size_t baw_tail; int aggQEnabled; int (* disable ) (int *,TYPE_3__*) ;int aid; scalar_t__ seq_start; TYPE_1__* frame; } ;
struct aggQueue {int dummy; } ;
struct TYPE_7__ {scalar_t__ enabled; } ;
struct TYPE_6__ {struct agg_tid_rx** tid_rx; struct agg_tid_rx** aggQPool; } ;
struct TYPE_5__ {int * buf; } ;
typedef struct agg_tid_rx* TID_TX ;


 struct agg_tid_rx* VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int *,TYPE_3__*) ;
 TYPE_3__* VAR_7 ;
 TYPE_2__* VAR_8 ;
 int * FUNC_1 (int *,struct agg_tid_rx*) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,struct agg_tid_rx*,int) ;
 int FUNC_4 (int ,char*,size_t) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

u16_t FUNC_9(zdev_t* VAR_9, u16_t VAR_10)
{
    u16_t VAR_11;
    zbuf_t* VAR_12;
    struct agg_tid_rx *VAR_13;

    TID_TX VAR_14;


    FUNC_7(VAR_9);
    FUNC_5();

    for (VAR_11=0; VAR_11<VAR_3; VAR_11++)
    {
        u16_t VAR_15;

        VAR_13 = VAR_8->tid_rx[VAR_11];

        for(VAR_15=0; VAR_15 <= VAR_2; VAR_15++)
        {
            FUNC_6(VAR_9);
            VAR_12 = VAR_13->frame[VAR_15].buf;
            VAR_13->frame[VAR_15].buf = 0;
            FUNC_8(VAR_9);

            if (VAR_12)
            {
                FUNC_2(VAR_9, VAR_12, 0);
            }
        }
        FUNC_6(VAR_9);
        VAR_13->seq_start = 0;
        VAR_13->baw_head = VAR_13->baw_tail = 0;
        VAR_13->aid = VAR_5;
        FUNC_8(VAR_9);
        if (1 == VAR_8->aggQPool[VAR_11]->aggQEnabled) {
            VAR_14 = VAR_8->aggQPool[VAR_11];
            VAR_12 = FUNC_1(VAR_9, VAR_14);
            while (VAR_12) {
                FUNC_2(VAR_9, VAR_12, 0);
                VAR_12 = FUNC_1(VAR_9, VAR_14);
            }
        }

        if(VAR_10) {
            FUNC_3(VAR_9, VAR_8->aggQPool[VAR_11], sizeof(struct aggQueue));
            FUNC_3(VAR_9, VAR_8->tid_rx[VAR_11], sizeof(struct agg_tid_rx));
        }
    }





    return VAR_6;
}
