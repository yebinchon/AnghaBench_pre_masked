
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* get_string_representation ) (TYPE_1__*,char*,size_t) ;} ;
typedef TYPE_1__ rarch_setting_t ;


 int FUNC_0 (TYPE_1__*,char*,size_t) ;

void FUNC_1(rarch_setting_t *VAR_0, char *VAR_1, size_t VAR_2)
{
   if (!VAR_0 || !VAR_1)
      return;

   if (VAR_0->get_string_representation)
      VAR_0->get_string_representation(VAR_0, VAR_1, VAR_2);
}
