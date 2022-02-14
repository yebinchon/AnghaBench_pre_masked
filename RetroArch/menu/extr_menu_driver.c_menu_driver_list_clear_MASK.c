
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int file_list_t ;
struct TYPE_2__ {int (* list_clear ) (int *) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *) ;

bool FUNC_1(file_list_t *VAR_1)
{
   if (!VAR_1)
      return 0;
   if (VAR_0->list_clear)
      VAR_0->list_clear(VAR_1);
   return 1;
}
