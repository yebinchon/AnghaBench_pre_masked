
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int vfs_context_t ;
struct vnode_attr {scalar_t__ va_uid; } ;
struct componentname {int dummy; } ;
typedef int boolean_t ;
struct TYPE_9__ {scalar_t__ v_type; int v_flag; int * v_mountedhere; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct vnode_attr*) ;
 int FUNC_3 (struct vnode_attr*,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,TYPE_1__*,struct componentname*,char const*) ;
 int VAR_7 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*,struct vnode_attr*,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;

int
FUNC_13(vnode_t VAR_8, vfs_context_t VAR_9, struct componentname *VAR_10, const char *VAR_11, boolean_t VAR_12)
{

#pragma unused(cnp,fsname)

 struct vnode_attr VAR_13;
 int VAR_14;

 if (!VAR_12) {




  FUNC_2(&VAR_13);
  FUNC_3(&VAR_13, VAR_7);
  if ((VAR_14 = FUNC_10(VAR_8, &VAR_13, VAR_9)) ||
    (VAR_13.va_uid != FUNC_6(FUNC_9(VAR_9)) &&
     (!FUNC_8(VAR_9)))) {
   VAR_14 = VAR_3;
   goto out;
  }
 }

 if ( (VAR_14 = FUNC_4(VAR_8, VAR_4, VAR_9)) )
  goto out;

 if ( (VAR_14 = FUNC_5(VAR_8, VAR_0, 0, 0)) )
  goto out;

 if (VAR_8->v_type != VAR_5) {
  VAR_14 = VAR_2;
  goto out;
 }

 if (FUNC_0(VAR_8->v_flag, VAR_6) && (VAR_8->v_mountedhere != ((void*)0))) {
  VAR_14 = VAR_1;
  goto out;
 }
 FUNC_11(VAR_8);
 FUNC_1(VAR_8->v_flag, VAR_6);
 FUNC_12(VAR_8);

out:
 return VAR_14;
}
