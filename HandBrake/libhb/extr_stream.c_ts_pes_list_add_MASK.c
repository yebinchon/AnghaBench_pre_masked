
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* list; } ;
struct TYPE_10__ {TYPE_3__* list; } ;
struct TYPE_11__ {TYPE_2__ pes; TYPE_4__ ts; } ;
typedef TYPE_5__ hb_stream_t ;
struct TYPE_9__ {int pes_list; } ;
struct TYPE_7__ {int next; } ;



__attribute__((used)) static void FUNC_0( hb_stream_t *VAR_0, int VAR_1, int VAR_2 )
{
    int VAR_3 = VAR_0->ts.list[VAR_1].pes_list;
    if ( VAR_3 == -1 )
    {
        VAR_0->ts.list[VAR_1].pes_list = VAR_2;
        return;
    }

    int VAR_4;
    while ( VAR_3 != -1 )
    {
        if ( VAR_3 == VAR_2 )
            return;
        VAR_4 = VAR_3;
        VAR_3 = VAR_0->pes.list[VAR_3].next;
    }
    VAR_0->pes.list[VAR_4].next = VAR_2;
}
