
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ size; scalar_t__ capacity; int wait_full; int lock; int cond_full; } ;
typedef TYPE_1__ hb_fifo_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3( hb_fifo_t * VAR_1 )
{
    int VAR_2;

    FUNC_1( VAR_1->lock );
    if( VAR_1->size >= VAR_1->capacity )
    {
        VAR_1->wait_full = 1;
        FUNC_0( VAR_1->cond_full, VAR_1->lock, VAR_0 );
    }
    VAR_2 = ( VAR_1->size < VAR_1->capacity );
    FUNC_2( VAR_1->lock );
    return VAR_2;
}
