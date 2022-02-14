
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int i_mode; } ;
struct dentry {struct inode* d_inode; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct posix_acl*) ;
 int FUNC_1 (struct posix_acl*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct posix_acl* FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct posix_acl*) ;

ssize_t FUNC_6(struct dentry *VAR_3, char *VAR_4, size_t VAR_5)
{
 struct inode *VAR_6 = VAR_3->d_inode;
 struct posix_acl *VAR_7;
 int VAR_8=0, VAR_9=0;
 VAR_7 = FUNC_3(VAR_6, VAR_0);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);
 if (VAR_7) {
  do { if (VAR_8 + sizeof("system.posix_acl_access") <= VAR_5) { memcpy(VAR_4 + VAR_8, "system.posix_acl_access", sizeof("system.posix_acl_access")); VAR_8 += sizeof("system.posix_acl_access"); } VAR_9 += sizeof("system.posix_acl_access"); } while(0);
  FUNC_5(VAR_7);
 }

 if (FUNC_2(VAR_6->i_mode)) {
  VAR_7 = FUNC_3(VAR_6, VAR_1);
  if (FUNC_0(VAR_7))
   return FUNC_1(VAR_7);
  if (VAR_7) {
   do { if (VAR_8 + sizeof("system.posix_acl_default") <= VAR_5) { FUNC_0(VAR_4 + VAR_8, "system.posix_acl_default", sizeof("system.posix_acl_default")); VAR_8 += sizeof("system.posix_acl_default"); } VAR_9 += sizeof("system.posix_acl_default"); } while(0);
   FUNC_5(VAR_7);
  }
 }



 if (!VAR_4 || VAR_9 <= VAR_5)
  return VAR_9;
 return -VAR_2;
}
