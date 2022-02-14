
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ctl_addr; int fad_start; } ;
typedef TYPE_1__ track_info_struct ;
struct TYPE_5__ {int track_num; int fad_end; TYPE_1__* track; } ;
typedef TYPE_2__ session_info_struct ;
struct TYPE_6__ {TYPE_2__* session; } ;


 TYPE_3__ VAR_0 ;
 int* VAR_1 ;

void FUNC_0()
{
   int VAR_2;
   session_info_struct *VAR_3=&VAR_0.session[0];

   for (VAR_2 = 0; VAR_2 < VAR_3->track_num; VAR_2++)
   {
      track_info_struct *VAR_4=&VAR_0.session[0].track[VAR_2];
      VAR_1[VAR_2] = (VAR_4->ctl_addr << 24) | VAR_4->fad_start;
   }

   VAR_1[99] = (VAR_1[0] & 0xFF000000) | 0x010000;
   VAR_1[100] = (VAR_1[VAR_3->track_num - 1] & 0xFF000000) | (VAR_3->track_num << 16);
   VAR_1[101] = (VAR_1[VAR_3->track_num - 1] & 0xFF000000) | VAR_3->fad_end;
}
