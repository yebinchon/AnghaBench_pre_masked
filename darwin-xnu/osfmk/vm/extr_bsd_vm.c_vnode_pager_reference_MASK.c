
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vnode_pager_t ;
typedef int memory_object_t ;
struct TYPE_3__ {int ref_count; } ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int *,int) ;
 TYPE_1__* FUNC_2 (int ) ;

void
FUNC_3(
 memory_object_t VAR_0)
{
 vnode_pager_t VAR_1;
 unsigned int VAR_2;

 VAR_1 = FUNC_2(VAR_0);
 VAR_2 = FUNC_1(&VAR_1->ref_count, 1);
 FUNC_0(VAR_2 > 1);
}
