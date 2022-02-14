
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnop_link_args {struct componentname* a_cnp; struct vnode* a_tdvp; struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_mount; } ;
struct componentname {scalar_t__ cn_namelen; int cn_nameptr; } ;
typedef int devnode_t ;
typedef int devdirent_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_2 (struct vnode*) ;
 int FUNC_3 (int ,int *,int *,int *,int **) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int
FUNC_5(struct vnop_link_args *VAR_4)






{
 struct vnode *VAR_5 = VAR_4->a_vp;
 struct vnode *VAR_6 = VAR_4->a_tdvp;
 struct componentname *VAR_7 = VAR_4->a_cnp;
 devnode_t * VAR_8;
 devnode_t * VAR_9;
 devdirent_t * VAR_10;
 int VAR_11 = 0;




 if (VAR_7->cn_namelen > VAR_1) {
  VAR_11 = VAR_2;
  goto out1;
 }
 VAR_9 = FUNC_2(VAR_6);

 if (VAR_6->v_mount != VAR_5->v_mount) {
  return (VAR_3);
 }
 FUNC_0();

 VAR_8 = FUNC_2(VAR_5);




 FUNC_4(VAR_8, VAR_0);

 if (!VAR_11) {
     VAR_11 = FUNC_3(VAR_7->cn_nameptr, VAR_9, ((void*)0), VAR_8, &VAR_10);
 }
out1:
 FUNC_1();

 return (VAR_11);
}
