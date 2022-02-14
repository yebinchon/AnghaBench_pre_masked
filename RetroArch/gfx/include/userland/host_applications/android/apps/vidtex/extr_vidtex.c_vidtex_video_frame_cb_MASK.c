
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * video_frame; int sem_drawn; int sem_decoded; } ;
typedef TYPE_1__ VIDTEX_T ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, void *VAR_1)
{
   if (VAR_1)
   {
      VIDTEX_T *VAR_2 = VAR_0;

      VAR_2->video_frame = VAR_1;
      FUNC_0(&VAR_2->sem_decoded);
      FUNC_1(&VAR_2->sem_drawn);
      VAR_2->video_frame = ((void*)0);
   }
}
