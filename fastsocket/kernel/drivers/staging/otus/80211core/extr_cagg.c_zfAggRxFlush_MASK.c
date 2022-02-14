
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u16_t ;
struct zsAdditionInfo {int dummy; } ;
struct agg_tid_rx {size_t baw_tail; size_t baw_head; int seq_start; TYPE_1__* frame; } ;
struct TYPE_4__ {int (* zfcbRecv80211 ) (int *,int *,struct zsAdditionInfo*) ;} ;
struct TYPE_3__ {int * buf; int addInfo; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,struct zsAdditionInfo*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_3 (int *,int *,struct zsAdditionInfo*) ;
 int FUNC_4 (void*,void*,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int) ;

u16_t FUNC_10(zdev_t* VAR_2, u16_t VAR_3, struct agg_tid_rx *VAR_4)
{
    zbuf_t* VAR_5;
    u16_t VAR_6;
    struct zsAdditionInfo VAR_7;
    FUNC_7(VAR_2);
    FUNC_5();

    FUNC_0(VAR_2);

    while (1)
    {
        FUNC_6(VAR_2);
        if (VAR_4->baw_tail == VAR_4->baw_head) {
            FUNC_8(VAR_2);
            break;
        }

        VAR_5 = VAR_4->frame[VAR_4->baw_tail].buf;
        FUNC_4((void*)&VAR_7, (void*)&VAR_4->frame[VAR_4->baw_tail].addInfo, sizeof(struct zsAdditionInfo));
        VAR_4->frame[VAR_4->baw_tail].buf = 0;

        VAR_4->baw_tail = (VAR_4->baw_tail + 1) & VAR_0;
        VAR_4->seq_start = (VAR_4->seq_start + 1) & (4096 - 1);
     FUNC_8(VAR_2);

        if (VAR_5)
        {

            FUNC_1(VAR_2, VAR_5);

            if (VAR_1->zfcbRecv80211 != ((void*)0))
            {
                VAR_6 = FUNC_9(VAR_2, VAR_5, 22) >> 4;


                VAR_1->zfcbRecv80211(VAR_2, VAR_5, &VAR_7);
            }
            else
            {
                VAR_6 = FUNC_9(VAR_2, VAR_5, 22) >> 4;

                FUNC_3(VAR_2, VAR_5, &VAR_7);
            }
        }
    }

    FUNC_6(VAR_2);
    VAR_4->baw_head = VAR_4->baw_tail = 0;
    FUNC_8(VAR_2);
    return 1;
}
