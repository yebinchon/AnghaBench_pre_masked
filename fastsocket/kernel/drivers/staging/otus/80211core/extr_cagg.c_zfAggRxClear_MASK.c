
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u32_t ;
typedef size_t u16_t ;
struct agg_tid_rx {scalar_t__ baw_head; scalar_t__ baw_tail; TYPE_1__* frame; } ;
struct TYPE_4__ {struct agg_tid_rx** tid_rx; } ;
struct TYPE_3__ {int arrivalTime; int buf; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_0 (int *,int ,struct agg_tid_rx*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

u16_t FUNC_6(zdev_t* VAR_6, u32_t VAR_7)
{
    u16_t VAR_8;
    struct agg_tid_rx *VAR_9;

    FUNC_4(VAR_6);

    FUNC_2();

    for (VAR_8=0; VAR_8<VAR_2; VAR_8++)
    {
        FUNC_3(VAR_6);
        VAR_9 = VAR_5->tid_rx[VAR_8];
        if (VAR_9->baw_head != VAR_9->baw_tail)
        {
            u16_t VAR_10 = VAR_9->baw_tail;
            while ((VAR_10 != VAR_9->baw_head) && !VAR_9->frame[VAR_10].buf) {
             VAR_10 = (VAR_10 + 1) & VAR_0;
            }
            if ((VAR_10 != VAR_9->baw_head) && (VAR_7 - VAR_9->frame[VAR_10].arrivalTime) >
                    (VAR_1 - 5))
            {
                FUNC_5(VAR_6);
                FUNC_1(VAR_3, "queue RxFlush by RxClear");
                FUNC_0(VAR_6, 0, VAR_9);
                FUNC_3(VAR_6);
            }
        }
        FUNC_5(VAR_6);
    }

    return VAR_4;
}
