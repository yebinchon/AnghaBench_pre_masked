
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int i_sb; int i_mode; } ;
typedef struct posix_acl handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct posix_acl*) ;
 int VAR_5 ;
 int FUNC_2 (struct posix_acl*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct posix_acl* FUNC_4 (struct inode*,int ) ;
 struct posix_acl* FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (struct posix_acl*) ;
 int FUNC_7 (struct posix_acl*,struct inode*,int ,struct posix_acl*) ;
 scalar_t__ FUNC_8 (int ,int*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (struct posix_acl*,int ) ;
 struct posix_acl* FUNC_11 (struct posix_acl*,int ) ;
 int FUNC_12 (struct posix_acl*) ;
 int FUNC_13 (int ,int ) ;

int
FUNC_14(struct inode *VAR_6)
{
 struct posix_acl *VAR_7, *VAR_8;
        int VAR_9;

 if (FUNC_3(VAR_6->i_mode))
  return -VAR_3;
 if (!FUNC_13(VAR_6->i_sb, VAR_5))
  return 0;
 VAR_7 = FUNC_4(VAR_6, VAR_0);
 if (FUNC_1(VAR_7) || !VAR_7)
  return FUNC_2(VAR_7);
 VAR_8 = FUNC_11(VAR_7, VAR_4);
 FUNC_12(VAR_7);
 if (!VAR_8)
  return -VAR_1;
 VAR_9 = FUNC_10(VAR_8, VAR_6->i_mode);
 if (!VAR_9) {
  handle_t *VAR_10;
  int VAR_11 = 0;

 retry:
  VAR_10 = FUNC_5(VAR_6,
    FUNC_0(VAR_6->i_sb));
  if (FUNC_1(VAR_10)) {
   VAR_9 = FUNC_2(VAR_10);
   FUNC_9(VAR_6->i_sb, VAR_9);
   goto out;
  }
  VAR_9 = FUNC_7(VAR_10, VAR_6, VAR_0, VAR_8);
  FUNC_6(VAR_10);
  if (VAR_9 == -VAR_2 &&
      FUNC_8(VAR_6->i_sb, &VAR_11))
   goto retry;
 }
out:
 FUNC_12(VAR_8);
 return VAR_9;
}
