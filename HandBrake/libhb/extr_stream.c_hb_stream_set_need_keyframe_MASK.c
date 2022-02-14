
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ hb_stream_type; int need_keyframe; int has_IDRs; } ;
typedef TYPE_1__ hb_stream_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_0(hb_stream_t *VAR_2, int VAR_3)
{
    if ( VAR_2->hb_stream_type == VAR_1 ||
         VAR_2->hb_stream_type == VAR_0 )
    {

        VAR_2->need_keyframe = !!VAR_3 & !!VAR_2->has_IDRs;
    }
    else
    {
        VAR_2->need_keyframe = VAR_3;
    }
}
