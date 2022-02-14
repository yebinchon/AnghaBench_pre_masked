
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int count; TYPE_1__* list; } ;
struct TYPE_7__ {TYPE_2__ ts; } ;
typedef TYPE_3__ hb_stream_t ;
struct TYPE_5__ {int pid; } ;



__attribute__((used)) static int FUNC_0(hb_stream_t *VAR_0, int VAR_1)
{
    int VAR_2;

    for ( VAR_2 = 0; VAR_2 < VAR_0->ts.count; ++VAR_2 )
    {
        if ( VAR_1 == VAR_0->ts.list[VAR_2].pid )
        {
            return VAR_2;
        }
    }

    return -1;
}
