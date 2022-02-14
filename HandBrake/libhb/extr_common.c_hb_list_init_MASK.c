
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int items_alloc; void* items; } ;
typedef TYPE_1__ hb_list_t ;


 int VAR_0 ;
 void* FUNC_0 (int,int) ;

hb_list_t * FUNC_1()
{
    hb_list_t * VAR_1;

    VAR_1 = FUNC_0( sizeof( hb_list_t ), 1 );
    VAR_1->items = FUNC_0( VAR_0 * sizeof( void * ), 1 );
    VAR_1->items_alloc = VAR_0;

    return VAR_1;
}
