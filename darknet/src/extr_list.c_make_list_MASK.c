
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ back; scalar_t__ front; scalar_t__ size; } ;
typedef TYPE_1__ list ;


 TYPE_1__* FUNC_0 (int) ;

list *FUNC_1()
{
 list *VAR_0 = FUNC_0(sizeof(list));
 VAR_0->size = 0;
 VAR_0->front = 0;
 VAR_0->back = 0;
 return VAR_0;
}
