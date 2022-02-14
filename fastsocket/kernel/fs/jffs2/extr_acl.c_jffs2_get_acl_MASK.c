
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int dummy; } ;


 struct posix_acl* VAR_0 ;


 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct posix_acl* FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (struct posix_acl*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct inode*,int,char*,char*,int) ;
 struct posix_acl* FUNC_4 (struct inode*,int) ;
 struct posix_acl* FUNC_5 (char*,int) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int,int ) ;
 int FUNC_8 (struct inode*,int,struct posix_acl*) ;

__attribute__((used)) static struct posix_acl *FUNC_9(struct inode *VAR_7, int VAR_8)
{
 struct posix_acl *VAR_9;
 char *VAR_10 = ((void*)0);
 int VAR_11, VAR_12;

 VAR_9 = FUNC_4(VAR_7, VAR_8);
 if (VAR_9 != VAR_0)
  return VAR_9;

 switch (VAR_8) {
 case 129:
  VAR_12 = VAR_5;
  break;
 case 128:
  VAR_12 = VAR_6;
  break;
 default:
  FUNC_0();
 }
 VAR_11 = FUNC_3(VAR_7, VAR_12, "", ((void*)0), 0);
 if (VAR_11 > 0) {
  VAR_10 = FUNC_7(VAR_11, VAR_4);
  if (!VAR_10)
   return FUNC_1(-VAR_2);
  VAR_11 = FUNC_3(VAR_7, VAR_12, "", VAR_10, VAR_11);
 }
 if (VAR_11 > 0) {
  VAR_9 = FUNC_5(VAR_10, VAR_11);
 } else if (VAR_11 == -VAR_1 || VAR_11 == -VAR_3) {
  VAR_9 = ((void*)0);
 } else {
  VAR_9 = FUNC_1(VAR_11);
 }
 if (VAR_10)
  FUNC_6(VAR_10);
 if (!FUNC_2(VAR_9))
  FUNC_8(VAR_7, VAR_8, VAR_9);
 return VAR_9;
}
