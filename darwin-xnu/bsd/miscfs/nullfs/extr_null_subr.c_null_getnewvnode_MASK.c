
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode_fsparam {int vnfs_vtype; char* vnfs_str; int vnfs_markroot; int vnfs_flags; struct componentname* vnfs_cnp; scalar_t__ vnfs_filesize; scalar_t__ vnfs_rdev; scalar_t__ vnfs_marksystem; int vnfs_vops; void* vnfs_fsnode; struct vnode* vnfs_dvp; struct mount* vnfs_mp; } ;
struct vnode {int dummy; } ;
struct null_node {int null_myvid; struct vnode* null_vnode; } ;
struct mount {int dummy; } ;
struct componentname {int dummy; } ;
typedef enum vtype { ____Placeholder_vtype } vtype ;


 int VAR_0 ;
 int FUNC_0 (struct null_node*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct null_node* FUNC_1 (struct vnode*) ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,struct vnode_fsparam*,struct vnode**) ;
 int FUNC_3 (struct vnode*,int ) ;
 int FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct vnode*) ;

int
FUNC_6(
    struct mount * VAR_8, struct vnode * VAR_9, struct vnode * VAR_10, struct vnode ** VAR_11, struct componentname * VAR_12, int VAR_13)
{
 struct vnode_fsparam VAR_14;
 int VAR_15 = 0;
 enum vtype VAR_16 = VAR_3;
 struct null_node * VAR_17 = FUNC_1(VAR_9);

 if (VAR_17 == ((void*)0)) {
  return VAR_0;
 }

 if (VAR_9) {
  VAR_16 = FUNC_5(VAR_9);
 }

 VAR_14.vnfs_mp = VAR_8;
 VAR_14.vnfs_vtype = VAR_16;
 VAR_14.vnfs_str = "nullfs";
 VAR_14.vnfs_dvp = VAR_10;
 VAR_14.vnfs_fsnode = (void *)VAR_17;
 VAR_14.vnfs_vops = VAR_7;
 VAR_14.vnfs_markroot = VAR_13;
 VAR_14.vnfs_marksystem = 0;
 VAR_14.vnfs_rdev = 0;
 VAR_14.vnfs_filesize = 0;
 VAR_14.vnfs_cnp = VAR_12;
 VAR_14.vnfs_flags = VAR_5;

 VAR_15 = FUNC_2(VAR_4, VAR_2, &VAR_14, VAR_11);
 if (VAR_15 == 0) {
  VAR_17->null_vnode = *VAR_11;
  VAR_17->null_myvid = FUNC_4(*VAR_11);
  FUNC_3(*VAR_11, VAR_6);
 } else {
  FUNC_0(VAR_17, VAR_1);
 }
 return VAR_15;
}
