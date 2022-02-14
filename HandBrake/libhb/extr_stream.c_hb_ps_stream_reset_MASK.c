
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int scr; scalar_t__ found_scr; } ;
struct TYPE_5__ {int need_keyframe; scalar_t__ errors; scalar_t__ frames; TYPE_1__ pes; } ;
typedef TYPE_2__ hb_stream_t ;


 int VAR_0 ;

void FUNC_0(hb_stream_t *VAR_1)
{
    VAR_1->need_keyframe = 1;

    VAR_1->pes.found_scr = 0;
    VAR_1->pes.scr = VAR_0;

    VAR_1->frames = 0;
    VAR_1->errors = 0;
}
