
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* mockfs_fsnode_t ;
struct TYPE_4__ {struct TYPE_4__* parent; struct TYPE_4__* child_b; struct TYPE_4__* child_a; scalar_t__ vp; } ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_1__*) ;

int FUNC_1(mockfs_fsnode_t VAR_1)
{
 int VAR_2;
 mockfs_fsnode_t VAR_3;

 VAR_2 = 0;

 if (!VAR_1 || !VAR_1->parent) {
  VAR_2 = VAR_0;
  goto done;
 }




 if (VAR_1->vp)
  FUNC_0("mockfs_fsnode_orphan called on node with live vnode; fsnp = %p (in case gdb is screwing with you)", VAR_1);

 VAR_3 = VAR_1->parent;

 if (VAR_3->child_a == VAR_1) {
  VAR_3->child_a = ((void*)0);
  VAR_1->parent = ((void*)0);
 }
 else if (VAR_3->child_b == VAR_1) {
  VAR_3->child_b = ((void*)0);
  VAR_1->parent = ((void*)0);
 }
 else
  FUNC_0("mockfs_fsnode_orphan insanity, fsnp->parent != parent->child; fsnp = %p (in case gdb is screwing with you)", VAR_1);

done:
 return VAR_2;
}
