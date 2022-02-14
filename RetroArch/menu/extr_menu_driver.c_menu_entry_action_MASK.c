
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int menu_entry_t ;
typedef enum menu_action { ____Placeholder_menu_action } menu_action ;
struct TYPE_2__ {int (* entry_action ) (int ,int *,size_t,int) ;} ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,size_t,int) ;

int FUNC_1(
      menu_entry_t *VAR_2, size_t VAR_3, enum menu_action VAR_4)
{
   if (VAR_0 && VAR_0->entry_action)
      return VAR_0->entry_action(
            VAR_1, VAR_2, VAR_3, VAR_4);
   return -1;
}
