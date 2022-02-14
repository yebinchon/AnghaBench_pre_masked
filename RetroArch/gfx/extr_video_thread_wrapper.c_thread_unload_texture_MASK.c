
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int driver_data; TYPE_1__* poke; } ;
typedef TYPE_2__ thread_video_t ;
struct TYPE_3__ {int (* unload_texture ) (int ,uintptr_t) ;} ;


 int FUNC_0 (int ,uintptr_t) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, uintptr_t VAR_1)
{
   thread_video_t *VAR_2 = (thread_video_t*)VAR_0;

   if (!VAR_2)
      return;

   if (VAR_2->poke && VAR_2->poke->unload_texture)
      VAR_2->poke->unload_texture(VAR_2->driver_data, VAR_1);
}
