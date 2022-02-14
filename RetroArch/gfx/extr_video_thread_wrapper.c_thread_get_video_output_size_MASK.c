
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int driver_data; TYPE_1__* poke; } ;
typedef TYPE_2__ thread_video_t ;
struct TYPE_3__ {int (* get_video_output_size ) (int ,unsigned int*,unsigned int*) ;} ;


 int FUNC_0 (int ,unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0,
      unsigned *VAR_1, unsigned *VAR_2)
{
   thread_video_t *VAR_3 = (thread_video_t*)VAR_0;

   if (!VAR_3)
      return;

   if (VAR_3->poke && VAR_3->poke->get_video_output_size)
      VAR_3->poke->get_video_output_size(VAR_3->driver_data,
            VAR_1,
            VAR_2);
}
