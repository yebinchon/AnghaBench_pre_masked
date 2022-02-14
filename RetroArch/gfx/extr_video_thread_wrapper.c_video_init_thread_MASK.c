
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int video_info_t ;
typedef int video_driver_t ;
struct TYPE_4__ {int video_thread; int const* driver; } ;
typedef TYPE_1__ thread_video_t ;
typedef int input_driver_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*,int const,int **,void**) ;
 int FUNC_2 (TYPE_1__*,int const*) ;

bool FUNC_3(const video_driver_t **VAR_0,
      void **VAR_1, input_driver_t **VAR_2, void **VAR_3,
      const video_driver_t *VAR_4, const video_info_t VAR_5)
{
   thread_video_t *VAR_6 = (thread_video_t*)FUNC_0(1, sizeof(*VAR_6));
   if (!VAR_6)
      return 0;

   FUNC_2(VAR_6, VAR_4);

   VAR_6->driver = VAR_4;
   *VAR_0 = &VAR_6->video_thread;
   *VAR_1 = VAR_6;
   return FUNC_1(VAR_6, VAR_5, VAR_2, VAR_3);
}
