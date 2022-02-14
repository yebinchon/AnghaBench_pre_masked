
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int i_mode; int i_ctime; } ;
typedef int mode_t ;
typedef int handle_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 void* FUNC_4 (struct posix_acl*,size_t*) ;
 int FUNC_5 (int *,struct inode*) ;
 int FUNC_6 (int *,struct inode*,int,char*,void*,size_t,int ) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (struct posix_acl*,int *) ;
 int FUNC_9 (struct inode*,int,struct posix_acl*) ;

__attribute__((used)) static int
FUNC_10(handle_t *VAR_6, struct inode *VAR_7, int VAR_8,
      struct posix_acl *VAR_9)
{
 int VAR_10;
 void *VAR_11 = ((void*)0);
 size_t VAR_12 = 0;
 int VAR_13;

 if (FUNC_3(VAR_7->i_mode))
  return -VAR_3;

 switch(VAR_8) {
  case 129:
   VAR_10 = VAR_4;
   if (VAR_9) {
    mode_t VAR_14 = VAR_7->i_mode;
    VAR_13 = FUNC_8(VAR_9, &VAR_14);
    if (VAR_13 < 0)
     return VAR_13;
    else {
     VAR_7->i_mode = VAR_14;
     VAR_7->i_ctime = VAR_0;
     FUNC_5(VAR_6, VAR_7);
     if (VAR_13 == 0)
      VAR_9 = ((void*)0);
    }
   }
   break;

  case 128:
   VAR_10 = VAR_5;
   if (!FUNC_2(VAR_7->i_mode))
    return VAR_9 ? -VAR_1 : 0;
   break;

  default:
   return -VAR_2;
 }
 if (VAR_9) {
  VAR_11 = FUNC_4(VAR_9, &VAR_12);
  if (FUNC_0(VAR_11))
   return (int)FUNC_1(VAR_11);
 }

 VAR_13 = FUNC_6(VAR_6, VAR_7, VAR_10, "",
          VAR_11, VAR_12, 0);

 FUNC_7(VAR_11);

 if (!VAR_13)
  FUNC_9(VAR_7, VAR_8, VAR_9);

 return VAR_13;
}
