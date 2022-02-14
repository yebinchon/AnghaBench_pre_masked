
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_root; int mnt_devname; } ;
struct dentry {int dummy; } ;
typedef int ssize_t ;


 char* FUNC_0 (int ,int ,struct dentry const*,char*,int ) ;

__attribute__((used)) static inline char *FUNC_1(const struct vfsmount *VAR_0,
    const struct dentry *VAR_1,
    char *VAR_2, ssize_t VAR_3)
{
 return FUNC_0(VAR_0->mnt_devname, VAR_0->mnt_root,
   VAR_1, VAR_2, VAR_3);
}
