
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__** pool; int alloc_list; scalar_t__ allocated; int lock; } ;
struct TYPE_3__ {int buffer_size; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

void FUNC_3( void )
{
    VAR_3.lock = FUNC_2();
    VAR_3.allocated = 0;
    int VAR_4;



    VAR_3.pool[VAR_0] = FUNC_0(VAR_2*10, 1);
    VAR_3.pool[VAR_0]->buffer_size = 1 << 10;


    for ( VAR_4 = 1; VAR_4 < VAR_0; ++VAR_4 )
    {
        VAR_3.pool[VAR_4] = VAR_3.pool[VAR_0];
    }
    for ( VAR_4 = VAR_0 + 1; VAR_4 <= VAR_1; ++VAR_4 )
    {
        VAR_3.pool[VAR_4] = FUNC_0(VAR_2, 1);
        VAR_3.pool[VAR_4]->buffer_size = 1 << VAR_4;
    }

}
