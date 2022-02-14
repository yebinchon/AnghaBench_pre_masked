
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int i_mode; } ;




 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct posix_acl*) ;
 int FUNC_1 (struct posix_acl*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct posix_acl* FUNC_3 (struct inode*,int const) ;
 int FUNC_4 (struct inode*,struct posix_acl*,struct posix_acl*) ;
 struct posix_acl* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct posix_acl*) ;

int FUNC_7(struct inode *VAR_2, int VAR_3, struct posix_acl *VAR_4)
{
 struct posix_acl *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
 int VAR_7;

 if (FUNC_2(VAR_2->i_mode)) {
  switch(VAR_3) {
   case 129:
    VAR_5 = VAR_6 = FUNC_3(VAR_2,
      128);
    if (FUNC_0(VAR_5))
     goto fail;
    break;

   case 128:
    VAR_6 = VAR_4;
    VAR_5 = VAR_4 = FUNC_3(VAR_2,
      129);
    if (FUNC_0(VAR_5))
     goto fail;
    break;

   default:
    return -VAR_0;
  }
 } else if (VAR_3 != 129)
   return -VAR_0;

 if (VAR_4 == ((void*)0)) {
  VAR_5 = VAR_4 = FUNC_5(VAR_2->i_mode, VAR_1);
  if (FUNC_0(VAR_5))
   goto fail;
 }
 VAR_7 = FUNC_4(VAR_2, VAR_4, VAR_6);
 FUNC_6(VAR_5);
 return VAR_7;

fail:
 return FUNC_1(VAR_5);
}
