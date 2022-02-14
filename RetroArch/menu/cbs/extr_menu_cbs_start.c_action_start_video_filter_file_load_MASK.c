
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* path_softfilter_plugin; } ;
struct TYPE_5__ {TYPE_1__ paths; } ;
typedef TYPE_2__ settings_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 TYPE_2__* FUNC_1 () ;

__attribute__((used)) static int FUNC_2(unsigned VAR_1, const char *VAR_2)
{
   settings_t *VAR_3 = FUNC_1();

   if (!VAR_3)
      return -1;

   VAR_3->paths.path_softfilter_plugin[0] = '\0';
   FUNC_0(VAR_0, ((void*)0));
   return 0;
}
