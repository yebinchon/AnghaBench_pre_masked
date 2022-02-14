
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef size_t u16_t ;
struct agg_tid_rx {size_t aid; size_t ac; scalar_t__ sq_behind_count; scalar_t__ sq_exceed_count; scalar_t__ baw_tail; scalar_t__ baw_head; int seq_start; int addBaExchangeStatusCode; } ;
struct aggBaFrameParameter {size_t tid; int ba_start_seq; } ;
struct TYPE_2__ {struct agg_tid_rx** tid_rx; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int* VAR_4 ;
 size_t FUNC_0 (int *,size_t*) ;
 int FUNC_1 (int *,int *,int*,size_t*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 size_t FUNC_6 (int *,int *,size_t) ;

u16_t FUNC_7(zdev_t* VAR_5, zbuf_t* VAR_6, struct aggBaFrameParameter *VAR_7)
{
    u16_t VAR_8, VAR_9, VAR_10, VAR_11;
    u16_t VAR_12[3];
    u16_t VAR_13 = 0;
    u8_t VAR_14;
    struct agg_tid_rx *VAR_15 = ((void*)0);

    FUNC_4(VAR_5);

    FUNC_2();

    VAR_12[0] = FUNC_6(VAR_5, VAR_6, VAR_13+10);
    VAR_12[1] = FUNC_6(VAR_5, VAR_6, VAR_13+12);
    VAR_12[2] = FUNC_6(VAR_5, VAR_6, VAR_13+14);
    VAR_10 = FUNC_0(VAR_5, VAR_12);

    FUNC_1(VAR_5, VAR_6, &VAR_14, &VAR_11);
    VAR_9 = VAR_4[VAR_14&0x7] & 0x3;

    VAR_9 = VAR_7->tid;

    for (VAR_8=0; VAR_8<VAR_1 ; VAR_8++)
    {
        if((VAR_3->tid_rx[VAR_8]->aid == VAR_10) && (VAR_3->tid_rx[VAR_8]->ac == VAR_9))
        {
            VAR_15 = VAR_3->tid_rx[VAR_8];
            break;
        }
    }

    if (!VAR_15)
    {
        for (VAR_8=0; VAR_8<VAR_1; VAR_8++)
        {
            if (VAR_3->tid_rx[VAR_8]->aid == VAR_2)
            {
                VAR_15 = VAR_3->tid_rx[VAR_8];
                break;
            }
        }
        if (!VAR_15)
            return 0;
    }

    FUNC_3(VAR_5);

    VAR_15->aid = VAR_10;
    VAR_15->ac = VAR_9;
    VAR_15->addBaExchangeStatusCode = VAR_0;
    VAR_15->seq_start = VAR_7->ba_start_seq;
    VAR_15->baw_head = VAR_15->baw_tail = 0;
    VAR_15->sq_exceed_count = VAR_15->sq_behind_count = 0;
    FUNC_5(VAR_5);

    return 0;
}
