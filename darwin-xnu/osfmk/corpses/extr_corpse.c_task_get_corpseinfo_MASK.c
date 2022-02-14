
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
typedef int * kcdata_descriptor_t ;
struct TYPE_3__ {int * corpse_info; } ;



kcdata_descriptor_t FUNC_0(task_t VAR_0)
{
 kcdata_descriptor_t VAR_1 = ((void*)0);
 if (VAR_0 != ((void*)0)){
  VAR_1 = VAR_0->corpse_info;
 }
 return VAR_1;
}
