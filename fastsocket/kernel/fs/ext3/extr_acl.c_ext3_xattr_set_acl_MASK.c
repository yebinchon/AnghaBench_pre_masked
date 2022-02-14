
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int i_sb; } ;
typedef struct posix_acl handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct posix_acl*) ;
 int VAR_3 ;
 int FUNC_2 (struct posix_acl*) ;
 struct posix_acl* FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct posix_acl*) ;
 int FUNC_5 (struct posix_acl*,struct inode*,int,struct posix_acl*) ;
 scalar_t__ FUNC_6 (int ,int*) ;
 int FUNC_7 (struct inode*) ;
 struct posix_acl* FUNC_8 (void const*,size_t) ;
 int FUNC_9 (struct posix_acl*) ;
 int FUNC_10 (struct posix_acl*) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static int
FUNC_12(struct inode *VAR_4, int VAR_5, const void *VAR_6,
     size_t VAR_7)
{
 handle_t *VAR_8;
 struct posix_acl *VAR_9;
 int VAR_10, VAR_11 = 0;

 if (!FUNC_11(VAR_4->i_sb, VAR_3))
  return -VAR_1;
 if (!FUNC_7(VAR_4))
  return -VAR_2;

 if (VAR_6) {
  VAR_9 = FUNC_8(VAR_6, VAR_7);
  if (FUNC_1(VAR_9))
   return FUNC_2(VAR_9);
  else if (VAR_9) {
   VAR_10 = FUNC_10(VAR_9);
   if (VAR_10)
    goto release_and_out;
  }
 } else
  VAR_9 = ((void*)0);

retry:
 VAR_8 = FUNC_3(VAR_4, FUNC_0(VAR_4->i_sb));
 if (FUNC_1(VAR_8))
  return FUNC_2(VAR_8);
 VAR_10 = FUNC_5(VAR_8, VAR_4, VAR_5, VAR_9);
 FUNC_4(VAR_8);
 if (VAR_10 == -VAR_0 && FUNC_6(VAR_4->i_sb, &VAR_11))
  goto retry;

release_and_out:
 FUNC_9(VAR_9);
 return VAR_10;
}
