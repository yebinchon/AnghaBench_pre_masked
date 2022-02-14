
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ menu_is_alive; } ;
typedef TYPE_1__ video_frame_info_t ;
struct TYPE_6__ {int (* frame ) (int ,TYPE_1__*) ;} ;


 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*) ;

void FUNC_1(video_frame_info_t *VAR_2)
{
   if (VAR_2->menu_is_alive && VAR_0->frame)
      VAR_0->frame(VAR_1, VAR_2);
}
