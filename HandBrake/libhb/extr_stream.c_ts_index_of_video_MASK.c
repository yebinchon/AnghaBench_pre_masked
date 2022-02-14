
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int count; } ;
struct TYPE_6__ {TYPE_1__ ts; } ;
typedef TYPE_2__ hb_stream_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_1(hb_stream_t *VAR_1)
{
    int VAR_2;

    for ( VAR_2 = 0; VAR_2 < VAR_1->ts.count; ++VAR_2 )
        if ( VAR_0 == FUNC_0( VAR_1, VAR_2 ) )
            return VAR_2;

    return -1;
}
