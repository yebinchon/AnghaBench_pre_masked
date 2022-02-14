
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
struct TYPE_7__ {int stream_kind; } ;


 int VAR_0 ;

__attribute__((used)) static kind_t FUNC_0( hb_stream_t * VAR_1, int VAR_2 )
{
    if ( VAR_1->ts.list[VAR_2].pes_list != -1 )
    {


        return VAR_1->pes.list[VAR_1->ts.list[VAR_2].pes_list].stream_kind;
    }
    else
    {
        return VAR_0;
    }
}
