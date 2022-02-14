
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * renderchain_data; TYPE_1__* renderchain_driver; } ;
typedef TYPE_2__ d3d9_video_t ;
struct TYPE_4__ {int (* chain_free ) (int *) ;} ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(d3d9_video_t *VAR_0)
{
   if (!VAR_0 || !VAR_0->renderchain_driver)
      return;

   if (VAR_0->renderchain_driver->chain_free)
      VAR_0->renderchain_driver->chain_free(VAR_0->renderchain_data);

   VAR_0->renderchain_driver = ((void*)0);
   VAR_0->renderchain_data = ((void*)0);
}
