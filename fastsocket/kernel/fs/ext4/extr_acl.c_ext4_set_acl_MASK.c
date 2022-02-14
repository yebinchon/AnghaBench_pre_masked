
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
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 void* FUNC_4 (struct posix_acl*,size_t*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int *,struct inode*) ;
 int FUNC_7 (int *,struct inode*,int,char*,void*,size_t,int ) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (struct posix_acl*,int *) ;
 int FUNC_10 (struct inode*,int,struct posix_acl*) ;

__attribute__((used)) static int
FUNC_11(handle_t *VAR_5, struct inode *VAR_6, int VAR_7,
      struct posix_acl *VAR_8)
{
 int VAR_9;
 void *VAR_10 = ((void*)0);
 size_t VAR_11 = 0;
 int VAR_12;

 if (FUNC_3(VAR_6->i_mode))
  return -VAR_2;

 switch (VAR_7) {
 case 129:
  VAR_9 = VAR_3;
  if (VAR_8) {
   mode_t VAR_13 = VAR_6->i_mode;
   VAR_12 = FUNC_9(VAR_8, &VAR_13);
   if (VAR_12 < 0)
    return VAR_12;
   else {
    VAR_6->i_mode = VAR_13;
    VAR_6->i_ctime = FUNC_5(VAR_6);
    FUNC_6(VAR_5, VAR_6);
    if (VAR_12 == 0)
     VAR_8 = ((void*)0);
   }
  }
  break;

 case 128:
  VAR_9 = VAR_4;
  if (!FUNC_2(VAR_6->i_mode))
   return VAR_8 ? -VAR_0 : 0;
  break;

 default:
  return -VAR_1;
 }
 if (VAR_8) {
  VAR_10 = FUNC_4(VAR_8, &VAR_11);
  if (FUNC_0(VAR_10))
   return (int)FUNC_1(VAR_10);
 }

 VAR_12 = FUNC_7(VAR_5, VAR_6, VAR_9, "",
          VAR_10, VAR_11, 0);

 FUNC_8(VAR_10);
 if (!VAR_12)
  FUNC_10(VAR_6, VAR_7, VAR_8);

 return VAR_12;
}
