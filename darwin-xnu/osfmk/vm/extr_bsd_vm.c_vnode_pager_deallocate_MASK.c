
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vnode_pager_t ;
typedef int memory_object_t ;
struct TYPE_4__ {int * vnode_handle; int ref_count; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int ,TYPE_1__*) ;

void
FUNC_5(
 memory_object_t VAR_2)
{
 vnode_pager_t VAR_3;

 FUNC_0(VAR_0, ("vnode_pager_deallocate: %p\n", VAR_2));

 VAR_3 = FUNC_2(VAR_2);

 if (FUNC_1(&VAR_3->ref_count, 1) == 0) {
  if (VAR_3->vnode_handle != ((void*)0)) {
   FUNC_3(VAR_3->vnode_handle);
  }
  FUNC_4(VAR_1, VAR_3);
 }
 return;
}
