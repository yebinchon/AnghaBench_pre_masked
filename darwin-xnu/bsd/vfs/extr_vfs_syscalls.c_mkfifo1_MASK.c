
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vnode_t ;
typedef int vfs_context_t ;
typedef int user_addr_t ;
struct vnode_attr {int dummy; } ;
struct nameidata {int ni_cnd; int * ni_vp; int * ni_dvp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nameidata*,int ,int ,int,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct vnode_attr*,int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct nameidata*) ;
 int FUNC_3 (struct nameidata*) ;
 int VAR_7 ;
 int FUNC_4 (int *,int *,struct vnode_attr*,int ,int *) ;
 int FUNC_5 (int *,int **,struct nameidata*,struct vnode_attr*,int ,int ,int *,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(vfs_context_t VAR_8, user_addr_t VAR_9, struct vnode_attr *VAR_10)
{
 vnode_t VAR_11, VAR_12;
 int VAR_13;
 struct nameidata VAR_14;

 FUNC_0(&VAR_14, VAR_1, VAR_4, VAR_3 | VAR_0,
  VAR_5, VAR_9, VAR_8);
 VAR_13 = FUNC_2(&VAR_14);
 if (VAR_13)
  return (VAR_13);
 VAR_12 = VAR_14.ni_dvp;
 VAR_11 = VAR_14.ni_vp;


    if (VAR_11 != ((void*)0)) {
     VAR_13 = VAR_2;
     goto out;
    }
    FUNC_1(VAR_10, VAR_7, VAR_6);

 if ((VAR_13 = FUNC_4(VAR_12, &VAR_14.ni_cnd, VAR_10, VAR_8, ((void*)0))) != 0)
  goto out;

   VAR_13 = FUNC_5(VAR_12, &VAR_11, &VAR_14, VAR_10, 0, 0, ((void*)0), VAR_8);
out:




 FUNC_3(&VAR_14);

 if (VAR_11)
         FUNC_6(VAR_11);
 FUNC_6(VAR_12);

 return VAR_13;
}
