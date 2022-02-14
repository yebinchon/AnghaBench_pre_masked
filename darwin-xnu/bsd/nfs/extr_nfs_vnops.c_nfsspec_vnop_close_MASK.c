
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vnode_t ;
struct vnop_close_args {int a_context; int a_vp; } ;
struct vnode_attr {int va_modify_time; int va_access_time; } ;
typedef TYPE_1__* nfsnode_t ;
typedef int mount_t ;
struct TYPE_5__ {int n_flag; int n_mtim; int n_atim; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vnode_attr*) ;
 int FUNC_1 (struct vnode_attr*,int ) ;
 int FUNC_2 (int ,int ,struct vnop_close_args*) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,struct vnode_attr*,int ) ;
 int VAR_6 ;

int
FUNC_11(
 struct vnop_close_args *VAR_7)





{
 vnode_t VAR_8 = VAR_7->a_vp;
 nfsnode_t VAR_9 = FUNC_4(VAR_8);
 struct vnode_attr VAR_10;
 mount_t VAR_11;
 int VAR_12;

 if ((VAR_12 = FUNC_5(VAR_9)))
  return (VAR_12);
 if (VAR_9->n_flag & (VAR_0 | VAR_2)) {
  VAR_9->n_flag |= VAR_1;
  if (!FUNC_8(VAR_8, 0) && (VAR_11 = FUNC_9(VAR_8)) && !FUNC_7(VAR_11)) {
   FUNC_0(&VAR_10);
   if (VAR_9->n_flag & VAR_0) {
    VAR_10.va_access_time = VAR_9->n_atim;
    FUNC_1(&VAR_10, VAR_4);
   }
   if (VAR_9->n_flag & VAR_2) {
    VAR_10.va_modify_time = VAR_9->n_mtim;
    FUNC_1(&VAR_10, VAR_5);
   }
   FUNC_6(VAR_9);
   FUNC_10(VAR_8, &VAR_10, VAR_7->a_context);
  } else {
   FUNC_6(VAR_9);
  }
 } else {
  FUNC_6(VAR_9);
 }
 return (FUNC_2(VAR_3, FUNC_3(VAR_6), VAR_7));
}
