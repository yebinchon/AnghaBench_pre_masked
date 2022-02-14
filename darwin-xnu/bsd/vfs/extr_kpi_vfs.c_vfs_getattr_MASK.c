
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
struct vfs_attr {int f_create_time; } ;
typedef int mount_t ;


 scalar_t__ FUNC_0 (struct vfs_attr*,int ) ;
 scalar_t__ FUNC_1 (struct vfs_attr*,int ) ;
 int FUNC_2 (struct vfs_attr*,int ,int ) ;
 int FUNC_3 (int ,struct vfs_attr*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_4(mount_t VAR_2, struct vfs_attr *VAR_3, vfs_context_t VAR_4)
{
 int VAR_5;

 if ((VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_4)) != 0)
  return(VAR_5);




  if (FUNC_1(VAR_3, VAR_0)) {
   if (FUNC_0(VAR_3, VAR_1) && !FUNC_1(VAR_3, VAR_1))
    FUNC_2(VAR_3, VAR_1, VAR_3->f_create_time);
  }

 return(0);
}
