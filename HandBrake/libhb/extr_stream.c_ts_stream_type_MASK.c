
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int kind_t ;
struct TYPE_10__ {TYPE_3__* list; } ;
struct TYPE_8__ {TYPE_1__* list; } ;
struct TYPE_11__ {TYPE_4__ ts; TYPE_2__ pes; } ;
typedef TYPE_5__ hb_stream_t ;
struct TYPE_9__ {int pes_list; } ;
struct TYPE_7__ {int stream_type; } ;



__attribute__((used)) static kind_t FUNC_0( hb_stream_t * VAR_0, int VAR_1 )
{
    if ( VAR_0->ts.list[VAR_1].pes_list != -1 )
    {


        return VAR_0->pes.list[VAR_0->ts.list[VAR_1].pes_list].stream_type;
    }
    else
    {
        return 0x00;
    }
}
