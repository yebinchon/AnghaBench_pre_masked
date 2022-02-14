
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int count; void* last_timestamp; void* pcr; scalar_t__ found_pcr; TYPE_2__* list; } ;
struct TYPE_9__ {int need_keyframe; int last_error_frame; scalar_t__ last_error_count; scalar_t__ errors; scalar_t__ frames; TYPE_3__ ts; } ;
typedef TYPE_4__ hb_stream_t ;
struct TYPE_7__ {int skipbad; int continuity; scalar_t__ pes_info_valid; TYPE_1__* buf; } ;
struct TYPE_6__ {scalar_t__ size; } ;


 void* VAR_0 ;

void FUNC_0(hb_stream_t *VAR_1)
{
    int VAR_2;

    for (VAR_2=0; VAR_2 < VAR_1->ts.count; VAR_2++)
    {
        if ( VAR_1->ts.list[VAR_2].buf )
            VAR_1->ts.list[VAR_2].buf->size = 0;
        VAR_1->ts.list[VAR_2].skipbad = 1;
        VAR_1->ts.list[VAR_2].continuity = -1;
        VAR_1->ts.list[VAR_2].pes_info_valid = 0;
    }

    VAR_1->need_keyframe = 1;

    VAR_1->ts.found_pcr = 0;
    VAR_1->ts.pcr = VAR_0;
    VAR_1->ts.last_timestamp = VAR_0;

    VAR_1->frames = 0;
    VAR_1->errors = 0;
    VAR_1->last_error_frame = -10000;
    VAR_1->last_error_count = 0;
}
