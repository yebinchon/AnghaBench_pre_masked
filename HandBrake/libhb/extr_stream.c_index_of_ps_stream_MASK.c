
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int count; TYPE_1__* list; } ;
struct TYPE_7__ {TYPE_2__ pes; } ;
typedef TYPE_3__ hb_stream_t ;
struct TYPE_5__ {int stream_id; int stream_id_ext; } ;



__attribute__((used)) static int FUNC_0(hb_stream_t *VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3;

    for ( VAR_3 = 0; VAR_3 < VAR_0->pes.count; ++VAR_3 )
    {
        if ( VAR_1 == VAR_0->pes.list[VAR_3].stream_id &&
             VAR_2 == VAR_0->pes.list[VAR_3].stream_id_ext )
        {
            return VAR_3;
        }
    }


    for ( VAR_3 = 0; VAR_3 < VAR_0->pes.count; ++VAR_3 )
    {
        if ( VAR_1 == VAR_0->pes.list[VAR_3].stream_id &&
             0 == VAR_0->pes.list[VAR_3].stream_id_ext )
        {
            return VAR_3;
        }
    }

    return -1;
}
