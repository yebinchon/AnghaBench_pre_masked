
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* list; } ;
struct TYPE_8__ {TYPE_1__* list; } ;
struct TYPE_11__ {TYPE_4__ ts; TYPE_2__ pes; } ;
typedef TYPE_5__ hb_stream_t ;
struct TYPE_9__ {int pes_list; int pid; } ;
struct TYPE_7__ {int next; scalar_t__ stream_id; } ;



__attribute__((used)) static int FUNC_0(hb_stream_t *VAR_0, int VAR_1)
{
    int VAR_2;

    if ( VAR_0->ts.list[VAR_1].pid < 0 )
        return 1;

    for ( VAR_2 = VAR_0->ts.list[VAR_1].pes_list; VAR_2 != -1;
          VAR_2 = VAR_0->pes.list[VAR_2].next )
    {
        if ( VAR_0->pes.list[VAR_2].stream_id >= 0 )
            return 0;
    }
    VAR_0->ts.list[VAR_1].pid = -VAR_0->ts.list[VAR_1].pid;
    return 1;
}
