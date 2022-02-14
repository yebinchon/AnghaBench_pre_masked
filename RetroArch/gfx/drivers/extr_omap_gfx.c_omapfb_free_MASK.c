
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int fd; void* fb_mem; TYPE_4__* current_state; TYPE_4__* saved_state; scalar_t__ sync; } ;
typedef TYPE_2__ omapfb_data_t ;
struct TYPE_6__ {int enabled; int size; } ;
struct TYPE_8__ {struct TYPE_8__* mem; TYPE_1__ si; TYPE_1__ mi; TYPE_1__ pi; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int,int ,...) ;
 int FUNC_3 (void*,TYPE_4__*,int ) ;
 void* FUNC_4 (int ,int ,int,int ,int,int ) ;
 int FUNC_5 (void*,int ) ;

void FUNC_6(omapfb_data_t *VAR_8)
{
   if (VAR_8->sync)
      FUNC_2(VAR_8->fd, VAR_5);


   if (VAR_8->fb_mem)
   {
      FUNC_5(VAR_8->fb_mem, VAR_8->current_state->mi.size);
      VAR_8->fb_mem = ((void*)0);
   }


   if (VAR_8->saved_state)
   {
      void *VAR_9;
      int VAR_10 = VAR_8->saved_state->pi.enabled;


      VAR_8->saved_state->pi.enabled = 0;
      FUNC_2(VAR_8->fd, VAR_4, &VAR_8->saved_state->pi);
      FUNC_2(VAR_8->fd, VAR_3, &VAR_8->saved_state->mi);

      if (VAR_10)
      {
         VAR_8->saved_state->pi.enabled = VAR_10;
         FUNC_2(VAR_8->fd, VAR_4, &VAR_8->saved_state->pi);
      }


      VAR_9 = FUNC_4(0, VAR_8->saved_state->mi.size, VAR_7|VAR_6,
            VAR_2, VAR_8->fd, 0);

      if (VAR_9 != VAR_1)
      {
         FUNC_3(VAR_9, VAR_8->saved_state->mem, VAR_8->saved_state->mi.size);
         FUNC_5(VAR_9, VAR_8->saved_state->mi.size);
      }


      FUNC_2(VAR_8->fd, VAR_0, &VAR_8->saved_state->si);

      FUNC_1(VAR_8->saved_state->mem);
      VAR_8->saved_state->mem = ((void*)0);

      FUNC_1(VAR_8->saved_state);
      VAR_8->saved_state = ((void*)0);
   }

   FUNC_1(VAR_8->current_state);
   VAR_8->current_state = ((void*)0);

   FUNC_0(VAR_8->fd);
   VAR_8->fd = -1;
}
