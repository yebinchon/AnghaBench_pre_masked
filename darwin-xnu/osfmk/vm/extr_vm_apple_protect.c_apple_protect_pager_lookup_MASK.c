
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* memory_object_t ;
typedef TYPE_2__* apple_protect_pager_t ;
struct TYPE_6__ {scalar_t__ ref_count; } ;
struct TYPE_5__ {int * mo_pager_ops; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

apple_protect_pager_t
FUNC_1(
 memory_object_t VAR_1)
{
 apple_protect_pager_t VAR_2;

 FUNC_0(VAR_1->mo_pager_ops == &VAR_0);
 VAR_2 = (apple_protect_pager_t)(uintptr_t) VAR_1;
 FUNC_0(VAR_2->ref_count > 0);
 return VAR_2;
}
