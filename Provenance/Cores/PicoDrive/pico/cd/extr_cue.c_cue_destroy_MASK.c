
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int track_count; TYPE_1__* tracks; } ;
typedef TYPE_2__ cue_data_t ;
struct TYPE_5__ {TYPE_2__* fname; } ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(cue_data_t *VAR_0)
{
 int VAR_1;

 if (VAR_0 == ((void*)0)) return;

 for (VAR_1 = VAR_0->track_count; VAR_1 > 0; VAR_1--)
  if (VAR_0->tracks[VAR_1].fname != ((void*)0))
   FUNC_0(VAR_0->tracks[VAR_1].fname);
 FUNC_0(VAR_0);
}
