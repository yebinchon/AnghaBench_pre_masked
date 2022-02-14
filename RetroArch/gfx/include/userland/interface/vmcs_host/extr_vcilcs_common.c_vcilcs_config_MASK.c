
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ilcs_mem_unlock; int ilcs_mem_lock; int ilcs_thread_init; int ilcs_common_deinit; int ilcs_common_init; int fns; } ;
typedef TYPE_1__ ILCS_CONFIG_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_0(ILCS_CONFIG_T *VAR_6)
{
   VAR_6->fns = VAR_2;
   VAR_6->ilcs_common_init = VAR_1;
   VAR_6->ilcs_common_deinit = VAR_0;
   VAR_6->ilcs_thread_init = VAR_5;
   VAR_6->ilcs_mem_lock = VAR_3;
   VAR_6->ilcs_mem_unlock = VAR_4;
}
