
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {char* mnt_devname; int mnt_root; } ;
struct dentry {int dummy; } ;
typedef int ssize_t ;


 char* FUNC_0 (char const*,int ,struct dentry const*,char*,int ) ;
 char* FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static char *FUNC_3(const struct vfsmount *VAR_0,
         const struct dentry *VAR_1,
         char *VAR_2, ssize_t VAR_3)
{
 const char *VAR_4;
 const char *VAR_5 = VAR_0->mnt_devname;
 const char *VAR_6 = (VAR_5 + FUNC_2(VAR_5));

 VAR_4 = FUNC_1(VAR_5, VAR_6);
 if (!VAR_4)
  VAR_4 = VAR_0->mnt_devname;

 return FUNC_0(VAR_4, VAR_0->mnt_root, VAR_1, VAR_2, VAR_3);
}
