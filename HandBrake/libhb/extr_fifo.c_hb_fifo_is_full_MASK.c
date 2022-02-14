
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ size; scalar_t__ capacity; int lock; } ;
typedef TYPE_1__ hb_fifo_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

int FUNC_2( hb_fifo_t * VAR_0 )
{
    int VAR_1;

    FUNC_0( VAR_0->lock );
    VAR_1 = ( VAR_0->size >= VAR_0->capacity );
    FUNC_1( VAR_0->lock );

    return VAR_1;
}
