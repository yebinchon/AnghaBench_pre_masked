
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* list; } ;
typedef TYPE_2__ file_list_t ;
struct TYPE_5__ {size_t directory_ptr; } ;


 size_t FUNC_0 (TYPE_2__ const*) ;

size_t FUNC_1(const file_list_t *VAR_0)
{
   size_t VAR_1 = FUNC_0(VAR_0);
   return VAR_0->list[VAR_1].directory_ptr;
}
