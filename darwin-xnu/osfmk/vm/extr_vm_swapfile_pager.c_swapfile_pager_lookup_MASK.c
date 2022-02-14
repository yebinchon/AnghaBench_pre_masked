
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* swapfile_pager_t ;
typedef TYPE_2__* memory_object_t ;
struct TYPE_7__ {int * mo_pager_ops; } ;
struct TYPE_6__ {scalar_t__ ref_count; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;

swapfile_pager_t
FUNC_2(
 memory_object_t VAR_1)
{
 swapfile_pager_t VAR_2;

 FUNC_1(VAR_1->mo_pager_ops == &VAR_0);
 FUNC_0(VAR_2 = (swapfile_pager_t) VAR_1);
 FUNC_1(VAR_2->ref_count > 0);
 return VAR_2;
}
