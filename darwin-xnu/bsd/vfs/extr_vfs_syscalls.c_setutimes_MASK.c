
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int vfs_context_t ;
struct vnode_attr {int va_vaflags; } ;
struct timespec {int dummy; } ;
typedef scalar_t__ kauth_action_t ;
struct TYPE_9__ {int v_flag; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct vnode_attr*) ;
 int FUNC_2 (struct vnode_attr*,int ,struct timespec const) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,TYPE_1__*,struct timespec const,struct timespec const) ;
 int FUNC_4 (int ,TYPE_1__*,struct timespec const,struct timespec const) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (TYPE_1__*,struct vnode_attr*,scalar_t__*,int ) ;
 int FUNC_6 (TYPE_1__*,int *,scalar_t__,int ) ;
 int FUNC_7 (TYPE_1__*,struct vnode_attr*,int ) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_8(vfs_context_t VAR_8, vnode_t VAR_9, const struct timespec *VAR_10,
 int VAR_11)
{
 int VAR_12;
 struct vnode_attr VAR_13;
 kauth_action_t VAR_14;

 FUNC_0(VAR_7, VAR_9, VAR_0);

 FUNC_1(&VAR_13);
 FUNC_2(&VAR_13, VAR_5, VAR_10[0]);
 FUNC_2(&VAR_13, VAR_6, VAR_10[1]);
 if (VAR_11)
  VAR_13.va_vaflags |= VAR_3;
 if ((VAR_12 = FUNC_5(VAR_9, &VAR_13, &VAR_14, VAR_8)) != 0) {
  if (!VAR_11 && VAR_12 == VAR_1)
   VAR_12 = VAR_2;
  goto out;
 }


 if ((VAR_14 != 0) && ((VAR_12 = FUNC_6(VAR_9, ((void*)0), VAR_14, VAR_8)) != 0)) {
  if (!VAR_11 && VAR_12 == VAR_1)
   VAR_12 = VAR_2;
  goto out;
 }
 VAR_12 = FUNC_7(VAR_9, &VAR_13, VAR_8);






out:
 return VAR_12;
}
