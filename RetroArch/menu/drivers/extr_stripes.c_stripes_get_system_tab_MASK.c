
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int system_tab_end; int* tabs; } ;
typedef TYPE_1__ stripes_handle_t ;


 int VAR_0 ;

__attribute__((used)) static unsigned FUNC_0(stripes_handle_t *VAR_1, unsigned VAR_2)
{
   if (VAR_2 <= VAR_1->system_tab_end)
   {
      return VAR_1->tabs[VAR_2];
   }
   return VAR_0;
}
