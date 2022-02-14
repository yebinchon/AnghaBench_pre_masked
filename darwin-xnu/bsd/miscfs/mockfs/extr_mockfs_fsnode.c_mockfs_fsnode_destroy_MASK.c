
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* mockfs_mount_t ;
typedef TYPE_3__* mockfs_fsnode_t ;
struct TYPE_10__ {scalar_t__ parent; struct TYPE_10__* child_b; struct TYPE_10__* child_a; scalar_t__ vp; TYPE_1__* mnt; } ;
struct TYPE_9__ {TYPE_3__* mockfs_root; } ;
struct TYPE_8__ {scalar_t__ mnt_data; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (char*,TYPE_3__*,...) ;

int FUNC_3(mockfs_fsnode_t VAR_2)
{
 int VAR_3;

 VAR_3 = 0;





 if (!VAR_2 || (((mockfs_mount_t)VAR_2->mnt->mnt_data)->mockfs_root == VAR_2)) {
  VAR_3 = VAR_0;
  goto done;
 }





 if (VAR_2->vp)
  FUNC_2("mockfs_fsnode_destroy called on node with live vnode; fsnp = %p (in case gdb is screwing with you)", VAR_2);
 if (VAR_2->child_a)
  if ((VAR_3 = FUNC_3(VAR_2->child_a)))
   FUNC_2("mockfs_fsnode_destroy failed on child_a; fsnp = %p (in case gdb is screwing with you), rvalue = %d", VAR_2, VAR_3);

 if (VAR_2->child_b)
  if ((VAR_3 = FUNC_3(VAR_2->child_b)))
   FUNC_2("mockfs_fsnode_destroy failed on child_b; fsnp = %p (in case gdb is screwing with you), rvalue = %d", VAR_2, VAR_3);




 if (VAR_2->parent)
  if ((VAR_3 = FUNC_1(VAR_2)))
   FUNC_2("mockfs_fsnode_orphan failed during destroy; fsnp = %p (in case gdb is screwing with you), rvalue = %d", VAR_2, VAR_3);

 FUNC_0(VAR_2, VAR_1);
done:
 return VAR_3;
}
