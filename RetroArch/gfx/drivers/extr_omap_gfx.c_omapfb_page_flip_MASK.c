
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* old_page; TYPE_3__* current_state; int fd; TYPE_2__* cur_page; scalar_t__ sync; } ;
typedef TYPE_5__ omapfb_data_t ;
struct TYPE_10__ {int yoffset; } ;
struct TYPE_9__ {TYPE_4__ si; } ;
struct TYPE_8__ {int yoffset; } ;
struct TYPE_7__ {int used; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,...) ;

__attribute__((used)) static void FUNC_1(omapfb_data_t *VAR_2)
{
   if (VAR_2->sync)
      FUNC_0(VAR_2->fd, VAR_1);



   VAR_2->current_state->si.yoffset = VAR_2->cur_page->yoffset;
   FUNC_0(VAR_2->fd, VAR_0, &VAR_2->current_state->si);

   if (VAR_2->old_page)
      VAR_2->old_page->used = 0;
}
