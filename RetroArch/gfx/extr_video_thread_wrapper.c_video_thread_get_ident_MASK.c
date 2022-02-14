
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* driver; } ;
typedef TYPE_2__ thread_video_t ;
struct TYPE_3__ {char const* ident; } ;


 scalar_t__ FUNC_0 (int) ;

const char *FUNC_1(void)
{
   const thread_video_t *VAR_0 = (const thread_video_t*)
      FUNC_0(1);

   if (!VAR_0 || !VAR_0->driver)
      return ((void*)0);
   return VAR_0->driver->ident;
}
