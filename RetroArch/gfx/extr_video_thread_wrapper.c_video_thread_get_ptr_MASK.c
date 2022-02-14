
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int video_driver_t ;
struct TYPE_2__ {void* driver_data; int * driver; } ;
typedef TYPE_1__ thread_video_t ;


 scalar_t__ FUNC_0 (int) ;

void *FUNC_1(const video_driver_t **VAR_0)
{
   const thread_video_t *VAR_1 = (const thread_video_t*)
      FUNC_0(1);

   if (VAR_0)
      *VAR_0 = VAR_1->driver;

   if (!VAR_1)
      return ((void*)0);
   return VAR_1->driver_data;
}
