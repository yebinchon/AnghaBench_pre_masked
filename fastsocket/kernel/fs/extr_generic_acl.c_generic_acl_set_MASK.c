
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int i_mode; } ;
struct generic_acl_operations {int (* setacl ) (struct inode*,int,struct posix_acl*) ;} ;
typedef int mode_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct posix_acl*) ;
 int FUNC_1 (struct posix_acl*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct posix_acl*,int *) ;
 struct posix_acl* FUNC_6 (void const*,size_t) ;
 int FUNC_7 (struct posix_acl*) ;
 int FUNC_8 (struct posix_acl*) ;
 int FUNC_9 (struct inode*,int,struct posix_acl*) ;

int
FUNC_10(struct inode *VAR_3, struct generic_acl_operations *VAR_4,
  int VAR_5, const void *VAR_6, size_t VAR_7)
{
 struct posix_acl *VAR_8 = ((void*)0);
 int VAR_9;

 if (FUNC_3(VAR_3->i_mode))
  return -VAR_1;
 if (!FUNC_4(VAR_3))
  return -VAR_2;
 if (VAR_6) {
  VAR_8 = FUNC_6(VAR_6, VAR_7);
  if (FUNC_0(VAR_8))
   return FUNC_1(VAR_8);
 }
 if (VAR_8) {
  mode_t VAR_10;

  VAR_9 = FUNC_8(VAR_8);
  if (VAR_9)
   goto failed;
  switch(VAR_5) {
   case 129:
    VAR_10 = VAR_3->i_mode;
    VAR_9 = FUNC_5(VAR_8, &VAR_10);
    if (VAR_9 < 0)
     goto failed;
    VAR_3->i_mode = VAR_10;
    if (VAR_9 == 0) {
     FUNC_7(VAR_8);
     VAR_8 = ((void*)0);
    }
    break;

   case 128:
    if (!FUNC_2(VAR_3->i_mode)) {
     VAR_9 = -VAR_0;
     goto failed;
    }
    break;
  }
 }
 VAR_4->setacl(VAR_3, VAR_5, VAR_8);
 VAR_9 = 0;
failed:
 FUNC_7(VAR_8);
 return VAR_9;
}
