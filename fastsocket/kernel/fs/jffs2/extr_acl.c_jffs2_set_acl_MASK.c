
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int i_mode; } ;
struct iattr {int ia_mode; int ia_valid; } ;
typedef int mode_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,int,struct posix_acl*) ;
 int FUNC_3 (struct inode*,struct iattr*) ;
 int FUNC_4 (struct posix_acl*,int *) ;
 int FUNC_5 (struct inode*,int,struct posix_acl*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_6, int VAR_7, struct posix_acl *VAR_8)
{
 int VAR_9, VAR_10;

 if (FUNC_1(VAR_6->i_mode))
  return -VAR_3;

 switch (VAR_7) {
 case 129:
  VAR_10 = VAR_4;
  if (VAR_8) {
   mode_t VAR_11 = VAR_6->i_mode;
   VAR_9 = FUNC_4(VAR_8, &VAR_11);
   if (VAR_9 < 0)
    return VAR_9;
   if (VAR_6->i_mode != VAR_11) {
    struct iattr VAR_12;

    VAR_12.ia_valid = VAR_0;
    VAR_12.ia_mode = VAR_11;
    VAR_9 = FUNC_3(VAR_6, &VAR_12);
    if (VAR_9 < 0)
     return VAR_9;
   }
   if (VAR_9 == 0)
    VAR_8 = ((void*)0);
  }
  break;
 case 128:
  VAR_10 = VAR_5;
  if (!FUNC_0(VAR_6->i_mode))
   return VAR_8 ? -VAR_1 : 0;
  break;
 default:
  return -VAR_2;
 }
 VAR_9 = FUNC_2(VAR_6, VAR_10, VAR_8);
 if (!VAR_9)
  FUNC_5(VAR_6, VAR_7, VAR_8);
 return VAR_9;
}
