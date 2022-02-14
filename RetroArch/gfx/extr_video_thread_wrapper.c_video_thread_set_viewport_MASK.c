
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; int driver_data; TYPE_1__* driver; } ;
typedef TYPE_2__ thread_video_t ;
struct TYPE_3__ {int (* set_viewport ) (int ,unsigned int,unsigned int,int,int) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned int,unsigned int,int,int) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, unsigned VAR_1,
      unsigned VAR_2, bool VAR_3, bool VAR_4)
{
   thread_video_t *VAR_5 = (thread_video_t*)VAR_0;
   if (!VAR_5)
      return;

   FUNC_0(VAR_5->lock);

    if (VAR_5->driver && VAR_5->driver->set_viewport)
        VAR_5->driver->set_viewport(VAR_5->driver_data, VAR_1, VAR_2,
                                  VAR_3, VAR_4);

   FUNC_1(VAR_5->lock);
}
