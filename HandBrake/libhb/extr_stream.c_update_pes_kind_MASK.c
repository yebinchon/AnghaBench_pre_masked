
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ kind_t ;
struct TYPE_7__ {TYPE_1__* list; } ;
struct TYPE_8__ {TYPE_2__ pes; } ;
typedef TYPE_3__ hb_stream_t ;
struct TYPE_9__ {scalar_t__ kind; } ;
struct TYPE_6__ {size_t stream_type; scalar_t__ stream_kind; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_5__* VAR_2 ;

__attribute__((used)) static void FUNC_0( hb_stream_t * VAR_3, int VAR_4 )
{
    kind_t VAR_5 = VAR_2[VAR_3->pes.list[VAR_4].stream_type].kind;
    if ( VAR_5 != VAR_1 && VAR_5 != VAR_0 )
    {
        VAR_3->pes.list[VAR_4].stream_kind = VAR_5;
    }
}
