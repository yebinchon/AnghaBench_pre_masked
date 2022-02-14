
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct TYPE_4__ {int driver_data; TYPE_1__* poke; } ;
typedef TYPE_2__ thread_video_t ;
struct TYPE_3__ {int (* set_osd_msg ) (int ,int *,char const*,void const*,void*) ;} ;


 int FUNC_0 (int ,int *,char const*,void const*,void*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0,
      video_frame_info_t *VAR_1,
      const char *VAR_2,
      const void *VAR_3, void *VAR_4)
{
   thread_video_t *VAR_5 = (thread_video_t*)VAR_0;

   if (!VAR_5)
      return;



   if (VAR_5->poke && VAR_5->poke->set_osd_msg)
      VAR_5->poke->set_osd_msg(VAR_5->driver_data, VAR_1, VAR_2, VAR_3, VAR_4);
}
