
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ smooth; } ;
struct TYPE_5__ {int filter_chain; TYPE_1__ video_info; int ctx_driver; } ;
typedef TYPE_2__ gl_core_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(gl_core_t *VAR_2)
{
   if (!VAR_2->ctx_driver)
      return 0;

   VAR_2->filter_chain = FUNC_1(
         VAR_2->video_info.smooth ?
         VAR_0 : VAR_1);

   if (!VAR_2->filter_chain)
   {
      FUNC_0("Failed to create filter chain.\n");
      return 0;
   }

   return 1;
}
