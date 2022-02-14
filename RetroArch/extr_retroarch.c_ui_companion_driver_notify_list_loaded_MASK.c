
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* notify_list_loaded ) (int ,int *,int *) ;} ;
typedef TYPE_1__ ui_companion_driver_t ;
typedef int file_list_t ;


 int FUNC_0 (int ,int *,int *) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

void FUNC_1(file_list_t *VAR_2, file_list_t *VAR_3)
{
   const ui_companion_driver_t *VAR_4 = VAR_0;
   if (VAR_4 && VAR_4->notify_list_loaded)
      VAR_4->notify_list_loaded(VAR_1, VAR_2, VAR_3);
}
