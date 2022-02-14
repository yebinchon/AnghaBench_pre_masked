
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int display_name; } ;
typedef TYPE_1__ core_info_t ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(const core_info_t *VAR_0,
      const core_info_t *VAR_1)
{
   if (!VAR_0 || !VAR_1)
      return 0;

   if (FUNC_1(VAR_0->display_name) || FUNC_1(VAR_1->display_name))
      return 0;

   return FUNC_0(VAR_0->display_name, VAR_1->display_name);
}
