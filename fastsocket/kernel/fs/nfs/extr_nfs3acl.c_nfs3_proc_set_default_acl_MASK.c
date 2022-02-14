
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int i_mode; } ;
typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct posix_acl*) ;
 int FUNC_1 (struct posix_acl*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct posix_acl* FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct inode*,struct posix_acl*,struct posix_acl*) ;
 struct posix_acl* FUNC_5 (struct posix_acl*,int ) ;
 int FUNC_6 (struct posix_acl*,int *) ;
 int FUNC_7 (struct posix_acl*) ;

int FUNC_8(struct inode *VAR_4, struct inode *VAR_5,
  mode_t VAR_6)
{
 struct posix_acl *VAR_7, *VAR_8;
 int VAR_9 = 0;

 VAR_7 = FUNC_3(VAR_4, VAR_0);
 if (FUNC_0(VAR_7)) {
  VAR_9 = FUNC_1(VAR_7);
  return (VAR_9 == -VAR_2) ? 0 : VAR_9;
 }
 if (!VAR_7)
  return 0;
 VAR_8 = FUNC_5(VAR_7, VAR_3);
 VAR_9 = -VAR_1;
 if (!VAR_8)
  goto out_release_dfacl;
 VAR_9 = FUNC_6(VAR_8, &VAR_6);
 if (VAR_9 < 0)
  goto out_release_acl;
 VAR_9 = FUNC_4(VAR_5, VAR_8, FUNC_2(VAR_5->i_mode) ?
            VAR_7 : ((void*)0));
out_release_acl:
 FUNC_7(VAR_8);
out_release_dfacl:
 FUNC_7(VAR_7);
 return VAR_9;
}
