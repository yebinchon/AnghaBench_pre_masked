
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ smooth; } ;
struct TYPE_5__ {int filter_chain; TYPE_1__ video_info; } ;
typedef TYPE_2__ gl_core_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*,int ) ;

__attribute__((used)) static bool FUNC_2(gl_core_t *VAR_2, const char *VAR_3)
{
   VAR_2->filter_chain = FUNC_1(
         VAR_3,
         VAR_2->video_info.smooth ?
         VAR_0 : VAR_1);

   if (!VAR_2->filter_chain)
   {
      FUNC_0("[GLCore]: Failed to create preset: \"%s\".\n", VAR_3);
      return 0;
   }

   return 1;
}
