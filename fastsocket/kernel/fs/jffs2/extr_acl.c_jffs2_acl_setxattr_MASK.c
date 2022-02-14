
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct posix_acl*) ;
 int FUNC_1 (struct posix_acl*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,int,struct posix_acl*) ;
 struct posix_acl* FUNC_4 (void const*,size_t) ;
 int FUNC_5 (struct posix_acl*) ;
 int FUNC_6 (struct posix_acl*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_1, int VAR_2, const void *VAR_3, size_t VAR_4)
{
 struct posix_acl *VAR_5;
 int VAR_6;

 if (!FUNC_2(VAR_1))
  return -VAR_0;

 if (VAR_3) {
  VAR_5 = FUNC_4(VAR_3, VAR_4);
  if (FUNC_0(VAR_5))
   return FUNC_1(VAR_5);
  if (VAR_5) {
   VAR_6 = FUNC_6(VAR_5);
   if (VAR_6)
    goto out;
  }
 } else {
  VAR_5 = ((void*)0);
 }
 VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_5);
 out:
 FUNC_5(VAR_5);
 return VAR_6;
}
