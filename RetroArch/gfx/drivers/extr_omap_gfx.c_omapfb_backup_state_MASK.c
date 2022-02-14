
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int omapfb_state_t ;
struct TYPE_5__ {TYPE_4__* saved_state; int fd; } ;
typedef TYPE_1__ omapfb_data_t ;
struct TYPE_6__ {int size; } ;
struct TYPE_7__ {TYPE_3__ mi; int * mem; TYPE_3__ si; TYPE_3__ pi; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 TYPE_4__* FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_3__*) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,void*,int ) ;
 void* FUNC_5 (int *,int ,int,int ,int ,int ) ;
 int FUNC_6 (void*,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(omapfb_data_t *VAR_7)
{
   void* VAR_8 = ((void*)0);

   FUNC_7(VAR_7->saved_state == ((void*)0));

   VAR_7->saved_state = FUNC_1(1, sizeof(omapfb_state_t));
   if (!VAR_7->saved_state) return -1;

   if (FUNC_2(VAR_7->fd, VAR_4, &VAR_7->saved_state->pi) != 0)
   {
      FUNC_0("[video_omap]: backup layer (plane) failed\n");
      return -1;
   }

   if (FUNC_2(VAR_7->fd, VAR_3, &VAR_7->saved_state->mi) != 0)
   {
      FUNC_0("[video_omap]: backup layer (mem) failed\n");
      return -1;
   }

   if (FUNC_2(VAR_7->fd, VAR_0, &VAR_7->saved_state->si) != 0)
   {
      FUNC_0("[video_omap]: backup layer (screeninfo) failed\n");
      return -1;
   }

   VAR_7->saved_state->mem = FUNC_3(VAR_7->saved_state->mi.size);
   VAR_8 = FUNC_5(((void*)0), VAR_7->saved_state->mi.size, VAR_6|VAR_5,
         VAR_2, VAR_7->fd, 0);
   if (VAR_7->saved_state->mem == ((void*)0) || VAR_8 == VAR_1)
   {
      FUNC_0("[video_omap]: backup layer (mem backup) failed\n");
      FUNC_6(VAR_8, VAR_7->saved_state->mi.size);
      return -1;
   }
   FUNC_4(VAR_7->saved_state->mem, VAR_8, VAR_7->saved_state->mi.size);
   FUNC_6(VAR_8, VAR_7->saved_state->mi.size);

   return 0;
}
