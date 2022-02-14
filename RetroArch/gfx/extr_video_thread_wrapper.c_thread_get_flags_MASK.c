
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int driver_data; TYPE_1__* poke; } ;
typedef TYPE_2__ thread_video_t ;
struct TYPE_3__ {int (* get_flags ) (int ) ;} ;


 int FUNC_0 (int ) ;

__attribute__((used)) static uint32_t FUNC_1(void *VAR_0)
{
   thread_video_t *VAR_1 = (thread_video_t*)VAR_0;
   if (!VAR_1 || !VAR_1->poke || !VAR_1->poke->get_flags)
      return 0;
   return VAR_1->poke->get_flags(VAR_1->driver_data);
}
