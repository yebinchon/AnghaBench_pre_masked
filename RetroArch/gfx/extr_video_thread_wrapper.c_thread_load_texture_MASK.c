
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int driver_data; TYPE_1__* poke; } ;
typedef TYPE_2__ thread_video_t ;
typedef enum texture_filter_type { ____Placeholder_texture_filter_type } texture_filter_type ;
struct TYPE_3__ {uintptr_t (* load_texture ) (int ,void*,int,int) ;} ;


 uintptr_t FUNC_0 (int ,void*,int,int) ;

__attribute__((used)) static uintptr_t FUNC_1(void *VAR_0, void *VAR_1,
      bool VAR_2, enum texture_filter_type VAR_3)
{
   thread_video_t *VAR_4 = (thread_video_t*)VAR_0;

   if (!VAR_4 || !VAR_4->poke || !VAR_4->poke->load_texture)
      return 0;

   return VAR_4->poke->load_texture(VAR_4->driver_data, VAR_1, VAR_2, VAR_3);
}
