
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vnode_t ;
typedef int vfs_context_t ;
struct vnode_attr {scalar_t__ va_parentid; } ;
typedef TYPE_1__* mount_t ;
typedef int ino64_t ;
struct TYPE_4__ {int mnt_kern_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vnode_attr*) ;
 int FUNC_1 (struct vnode_attr*,int ) ;
 int FUNC_2 (struct vnode_attr*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,scalar_t__*,int ) ;
 int VAR_2 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,struct vnode_attr*,int ) ;
 TYPE_1__* FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

__attribute__((used)) static int
FUNC_8(vnode_t VAR_3, vnode_t * VAR_4, vfs_context_t VAR_5)
{
 int VAR_6 = 0;
 struct vnode_attr VAR_7;
 mount_t VAR_8 = FUNC_6(VAR_3);
 vnode_t VAR_9 = FUNC_7(VAR_3);

 if (VAR_9) {
  VAR_6 = FUNC_4(VAR_9);
  goto end;
 }

 VAR_6 = VAR_0;
 if (!(VAR_8->mnt_kern_flag & VAR_1)) {
  goto end;
 }

 FUNC_0(&VAR_7);
 FUNC_2(&VAR_7, VAR_2);

 VAR_6 = FUNC_5(VAR_3, &VAR_7, VAR_5);

 if (VAR_6 || !FUNC_1(&VAR_7, VAR_2)) {
  goto end;
 }

 VAR_6 = FUNC_3(VAR_8, (ino64_t)VAR_7.va_parentid, &VAR_9, VAR_5);

end:
 if (VAR_6 == 0) {
  *VAR_4 = VAR_9;
 }
 return VAR_6;
}
