
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int (* get_string_representation ) (TYPE_2__*,char*,size_t) ;} ;
typedef TYPE_2__ rarch_setting_t ;
struct TYPE_9__ {TYPE_1__* list; } ;
typedef TYPE_3__ file_list_t ;
struct TYPE_7__ {int label; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,char*,size_t) ;

void FUNC_2(file_list_t *VAR_0, char *VAR_1,
      size_t VAR_2, unsigned *VAR_3, unsigned VAR_4,
      const char *VAR_5, unsigned VAR_6)
{
   rarch_setting_t *VAR_7 = ((void*)0);
   if (!VAR_0)
      return;

   VAR_7 = FUNC_0(VAR_0->list[VAR_6].label);

   if (VAR_7 && VAR_7->get_string_representation)
      VAR_7->get_string_representation(VAR_7, VAR_1, VAR_2);
}
