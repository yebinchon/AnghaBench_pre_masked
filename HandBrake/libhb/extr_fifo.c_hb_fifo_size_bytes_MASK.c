
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; TYPE_2__* first; } ;
typedef TYPE_1__ hb_fifo_t ;
struct TYPE_5__ {struct TYPE_5__* next; scalar_t__ size; } ;
typedef TYPE_2__ hb_buffer_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

int FUNC_2( hb_fifo_t * VAR_0 )
{
    int VAR_1 = 0;
    hb_buffer_t * VAR_2;

    FUNC_0( VAR_0->lock );
    VAR_2 = VAR_0->first;
    while ( VAR_2 )
    {
        VAR_1 += VAR_2->size;
        VAR_2 = VAR_2->next;
    }
    FUNC_1( VAR_0->lock );

    return VAR_1;
}
