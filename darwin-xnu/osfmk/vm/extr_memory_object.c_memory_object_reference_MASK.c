
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* memory_object_t ;
struct TYPE_6__ {TYPE_1__* mo_pager_ops; } ;
struct TYPE_5__ {int (* memory_object_reference ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(
 memory_object_t VAR_0)
{
 (VAR_0->mo_pager_ops->memory_object_reference)(
  VAR_0);
}
