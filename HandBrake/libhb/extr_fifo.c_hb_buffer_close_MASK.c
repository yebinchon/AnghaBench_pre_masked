
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_17__ ;


struct TYPE_22__ {TYPE_3__* p_surface; TYPE_1__* sync; } ;
struct TYPE_24__ {TYPE_4__ out; } ;
typedef TYPE_6__ hb_qsv_stage ;
typedef int hb_qsv_list ;
typedef int hb_fifo_t ;
struct TYPE_23__ {int * qsv_atom; TYPE_8__* ctx; } ;
struct TYPE_25__ {scalar_t__ alloc; scalar_t__ data; struct TYPE_25__* next; TYPE_5__ qsv_details; } ;
typedef TYPE_7__ hb_buffer_t ;
struct TYPE_26__ {int pipes; } ;
struct TYPE_20__ {scalar_t__ Locked; } ;
struct TYPE_21__ {TYPE_2__ Data; } ;
struct TYPE_19__ {scalar_t__ in_use; } ;
struct TYPE_18__ {int lock; int allocated; int alloc_list; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_17__ VAR_0 ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (char*,TYPE_7__*) ;
 scalar_t__ FUNC_5 (int *,TYPE_7__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_7__*) ;
 int FUNC_8 (int ,TYPE_7__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int **) ;
 TYPE_6__* FUNC_11 (int *) ;
 int FUNC_12 (TYPE_8__*,TYPE_6__*) ;
 int FUNC_13 (int ) ;
 int * FUNC_14 (scalar_t__) ;

void FUNC_15( hb_buffer_t ** VAR_1 )
{
    hb_buffer_t * VAR_2 = *VAR_1;

    while( VAR_2 )
    {
        hb_buffer_t * VAR_3 = VAR_2->next;
        hb_fifo_t *VAR_4 = FUNC_14( VAR_2->alloc );

        VAR_2->next = ((void*)0);






        if( VAR_4 && VAR_2->data && !FUNC_6( VAR_4 ) )
        {







            FUNC_7( VAR_4, VAR_2 );
            VAR_2 = VAR_3;
            continue;
        }


        if( VAR_2->data )
        {
            FUNC_1(VAR_2->data);
            FUNC_9(VAR_0.lock);
            VAR_0.allocated -= VAR_2->alloc;
            FUNC_13(VAR_0.lock);
        }
        FUNC_3( VAR_2 );
        VAR_2 = VAR_3;
    }

    *VAR_1 = ((void*)0);
}
