
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
struct TYPE_5__ {scalar_t__ stream_kind; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(hb_stream_t *VAR_1)
{
    int VAR_2;

    for ( VAR_2 = 0; VAR_2 < VAR_1->pes.count; ++VAR_2 )
        if ( VAR_0 == VAR_1->pes.list[VAR_2].stream_kind )
            return VAR_2;

    return -1;
}
