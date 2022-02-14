
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
struct vnop_getattr_args {struct vnode_attr* a_vap; TYPE_1__* a_vp; } ;
struct vnode_attr {int dummy; } ;
typedef TYPE_2__* mockfs_fsnode_t ;
struct TYPE_4__ {int type; int size; } ;
struct TYPE_3__ {scalar_t__ v_data; } ;


 int FUNC_0 (struct vnode_attr*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct vnode_attr*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_2(struct vnop_getattr_args * VAR_10)
{




 vnode_t VAR_11;
 mockfs_fsnode_t VAR_12;
 struct vnode_attr * VAR_13;

 VAR_11 = VAR_10->a_vp;
 VAR_12 = (mockfs_fsnode_t)VAR_11->v_data;
 VAR_13 = VAR_10->a_vap;
 FUNC_1(VAR_13, sizeof(*VAR_13));
 FUNC_0(VAR_13, VAR_7, 1);
 FUNC_0(VAR_13, VAR_6, VAR_1 | VAR_2 | VAR_0);
 FUNC_0(VAR_13, VAR_5, VAR_12->type);
 FUNC_0(VAR_13, VAR_9, VAR_12->size);
 FUNC_0(VAR_13, VAR_8, VAR_12->size);
 FUNC_0(VAR_13, VAR_4, VAR_12->size);
 FUNC_0(VAR_13, VAR_3, VAR_12->size);

 return (0);
}
