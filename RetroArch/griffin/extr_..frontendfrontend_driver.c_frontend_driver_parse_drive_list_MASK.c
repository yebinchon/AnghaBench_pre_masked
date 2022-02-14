
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* parse_drive_list ) (void*,int) ;} ;
typedef TYPE_1__ frontend_ctx_driver_t ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (void*,int) ;

int FUNC_2(void *VAR_0, bool VAR_1)
{
   frontend_ctx_driver_t *VAR_2 = FUNC_0();

   if (!VAR_2 || !VAR_2->parse_drive_list)
      return -1;
   return VAR_2->parse_drive_list(VAR_0, VAR_1);
}
