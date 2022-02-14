
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {TYPE_1__* mnt_sb; } ;
struct file_system_type {int fs_flags; } ;
struct TYPE_2__ {int s_subtype; } ;


 int VAR_0 ;
 struct vfsmount* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct vfsmount*) ;
 struct vfsmount* FUNC_2 (struct vfsmount*,char const*) ;
 struct file_system_type* FUNC_3 (char const*) ;
 int FUNC_4 (struct file_system_type*) ;
 struct vfsmount* FUNC_5 (struct file_system_type*,int,char const*,void*) ;

struct vfsmount *
FUNC_6(const char *VAR_2, int VAR_3, const char *VAR_4, void *VAR_5)
{
 struct file_system_type *VAR_6 = FUNC_3(VAR_2);
 struct vfsmount *VAR_7;
 if (!VAR_6)
  return FUNC_0(-VAR_0);
 VAR_7 = FUNC_5(VAR_6, VAR_3, VAR_4, VAR_5);
 if (!FUNC_1(VAR_7) && (VAR_6->fs_flags & VAR_1) &&
     !VAR_7->mnt_sb->s_subtype)
  VAR_7 = FUNC_2(VAR_7, VAR_2);
 FUNC_4(VAR_6);
 return VAR_7;
}
