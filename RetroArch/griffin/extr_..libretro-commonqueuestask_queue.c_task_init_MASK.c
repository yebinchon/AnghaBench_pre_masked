
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ident; } ;
typedef TYPE_1__ retro_task_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;

retro_task_t *FUNC_1(void)
{
   retro_task_t *VAR_1 = (retro_task_t*)FUNC_0(1, sizeof(*VAR_1));

   VAR_1->ident = VAR_0++;

   return VAR_1;
}
