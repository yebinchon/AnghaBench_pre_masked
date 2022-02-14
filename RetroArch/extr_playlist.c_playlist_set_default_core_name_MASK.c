
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int modified; scalar_t__ default_core_name; } ;
typedef TYPE_1__ playlist_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (scalar_t__,char const*) ;

void FUNC_4(playlist_t *VAR_0, const char *VAR_1)
{
   if (!VAR_0 || FUNC_2(VAR_1))
      return;

   if (!FUNC_3(VAR_0->default_core_name, VAR_1))
   {
      if (VAR_0->default_core_name)
         FUNC_0(VAR_0->default_core_name);
      VAR_0->default_core_name = FUNC_1(VAR_1);
      VAR_0->modified = 1;
   }
}
