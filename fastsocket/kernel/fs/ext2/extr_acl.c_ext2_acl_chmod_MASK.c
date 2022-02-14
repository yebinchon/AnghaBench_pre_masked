
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int i_mode; int i_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct posix_acl*) ;
 int VAR_4 ;
 int FUNC_1 (struct posix_acl*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct posix_acl* FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct inode*,int ,struct posix_acl*) ;
 int FUNC_5 (struct posix_acl*,int ) ;
 struct posix_acl* FUNC_6 (struct posix_acl*,int ) ;
 int FUNC_7 (struct posix_acl*) ;
 int FUNC_8 (int ,int ) ;

int
FUNC_9(struct inode *VAR_5)
{
 struct posix_acl *VAR_6, *VAR_7;
        int VAR_8;

 if (!FUNC_8(VAR_5->i_sb, VAR_4))
  return 0;
 if (FUNC_2(VAR_5->i_mode))
  return -VAR_2;
 VAR_6 = FUNC_3(VAR_5, VAR_0);
 if (FUNC_0(VAR_6) || !VAR_6)
  return FUNC_1(VAR_6);
 VAR_7 = FUNC_6(VAR_6, VAR_3);
 FUNC_7(VAR_6);
 if (!VAR_7)
  return -VAR_1;
 VAR_8 = FUNC_5(VAR_7, VAR_5->i_mode);
 if (!VAR_8)
  VAR_8 = FUNC_4(VAR_5, VAR_0, VAR_7);
 FUNC_7(VAR_7);
 return VAR_8;
}
