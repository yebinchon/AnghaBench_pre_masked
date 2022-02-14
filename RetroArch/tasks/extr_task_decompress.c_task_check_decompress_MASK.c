
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* userdata; int func; } ;
typedef TYPE_1__ task_finder_data_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

bool FUNC_1(const char *VAR_1)
{
   task_finder_data_t VAR_2;


   VAR_2.func = VAR_0;
   VAR_2.userdata = (void *)VAR_1;


   return FUNC_0(&VAR_2);
}
