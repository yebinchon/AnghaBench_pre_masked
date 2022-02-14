
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct posix_acl*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct posix_acl*) ;
 int FUNC_3 (int *,struct inode*,struct posix_acl*,int) ;
 int FUNC_4 (struct inode*) ;
 struct posix_acl* FUNC_5 (void const*,size_t) ;
 int FUNC_6 (struct posix_acl*) ;
 int FUNC_7 (struct posix_acl*) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_2, int VAR_3,
          const void *VAR_4, size_t VAR_5)
{
 int VAR_6;
 struct posix_acl *VAR_7 = ((void*)0);

 if (!FUNC_4(VAR_2))
  return -VAR_1;

 if (!FUNC_1(VAR_2))
  return -VAR_0;

 if (VAR_4) {
  VAR_7 = FUNC_5(VAR_4, VAR_5);
  if (FUNC_0(VAR_7))
   return FUNC_2(VAR_7);

  if (VAR_7) {
   VAR_6 = FUNC_7(VAR_7);
   if (VAR_6)
    goto out;
  }
 }

 VAR_6 = FUNC_3(((void*)0), VAR_2, VAR_7, VAR_3);
out:
 FUNC_6(VAR_7);

 return VAR_6;
}
