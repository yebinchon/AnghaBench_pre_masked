
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int alloc; int count; TYPE_3__* list; } ;
struct TYPE_8__ {TYPE_1__ pes; } ;
typedef TYPE_2__ hb_stream_t ;
typedef int hb_pes_stream_t ;
struct TYPE_9__ {int stream_id; int next; } ;


 int FUNC_0 (TYPE_3__*,int ,int) ;
 TYPE_3__* FUNC_1 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_2( hb_stream_t * VAR_0 )
{
    int VAR_1 = VAR_0->pes.alloc;

    if ( VAR_0->pes.count == VAR_0->pes.alloc )
    {
        VAR_1 = VAR_0->pes.alloc ? VAR_0->pes.alloc * 2 : 32;
        VAR_0->pes.list = FUNC_1( VAR_0->pes.list,
                                    sizeof( hb_pes_stream_t ) * VAR_1 );
    }
    int VAR_2;
    for ( VAR_2 = VAR_0->pes.alloc; VAR_2 < VAR_1; VAR_2++ )
    {
        FUNC_0(&VAR_0->pes.list[VAR_2], 0, sizeof( hb_pes_stream_t ));
        VAR_0->pes.list[VAR_2].stream_id = -1;
        VAR_0->pes.list[VAR_2].next = -1;
    }
    VAR_0->pes.alloc = VAR_1;
    VAR_1 = VAR_0->pes.count;
    VAR_0->pes.count++;

    return VAR_1;
}
