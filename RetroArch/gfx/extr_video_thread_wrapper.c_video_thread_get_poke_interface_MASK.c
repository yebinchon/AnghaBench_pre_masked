
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int video_poke_interface_t ;
struct TYPE_4__ {int poke; int driver_data; TYPE_1__* driver; } ;
typedef TYPE_2__ thread_video_t ;
struct TYPE_3__ {int (* poke_interface ) (int ,int *) ;} ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(
      void *VAR_1,
      const video_poke_interface_t **VAR_2)
{
   thread_video_t *VAR_3 = (thread_video_t*)VAR_1;

   if (VAR_3->driver->poke_interface)
   {
      *VAR_2 = &VAR_0;
      VAR_3->driver->poke_interface(VAR_3->driver_data, &VAR_3->poke);
   }
   else
      *VAR_2 = ((void*)0);
}
