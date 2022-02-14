
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int hb_fifo_t ;
struct TYPE_2__ {int ** pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static hb_fifo_t *FUNC_0( int VAR_3 )
{

    int VAR_4;
    for ( VAR_4 = VAR_0; VAR_4 <= VAR_1; ++VAR_4 )
    {
        if ( VAR_3 <= (1 << VAR_4) )
        {
            return VAR_2.pool[VAR_4];
        }
    }

    return ((void*)0);
}
