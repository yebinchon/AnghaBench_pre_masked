
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
 int VAR_4 ;
 struct posix_acl* FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (struct posix_acl*) ;
 int FUNC_3 (struct inode*) ;
 char* VAR_6 ;
 char* VAR_7 ;
 int FUNC_4 (struct inode*,char const*,char*,int) ;
 struct posix_acl* FUNC_5 (struct inode*,int) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int,int ) ;
 struct posix_acl* FUNC_8 (char*,int) ;
 int FUNC_9 (struct inode*,int,struct posix_acl*) ;

__attribute__((used)) static struct posix_acl *FUNC_10(struct inode *VAR_8, int VAR_9)
{
 int VAR_10;
 const char *VAR_11;
 char *VAR_12 = ((void*)0);
 struct posix_acl *VAR_13;

 if (!FUNC_3(VAR_8))
  return ((void*)0);

 VAR_13 = FUNC_5(VAR_8, VAR_9);
 if (VAR_13 != VAR_0)
  return VAR_13;

 switch (VAR_9) {
 case 129:
  VAR_11 = VAR_6;
  break;
 case 128:
  VAR_11 = VAR_7;
  break;
 default:
  FUNC_0();
 }

 VAR_10 = FUNC_4(VAR_8, VAR_11, "", 0);
 if (VAR_10 > 0) {
  VAR_12 = FUNC_7(VAR_10, VAR_5);
  if (!VAR_12)
   return FUNC_1(-VAR_4);
  VAR_10 = FUNC_4(VAR_8, VAR_11, VAR_12, VAR_10);
 }
 if (VAR_10 > 0) {
  VAR_13 = FUNC_8(VAR_12, VAR_10);
 } else if (VAR_10 == -VAR_3 || VAR_10 == -VAR_2 || VAR_10 == 0) {

  VAR_13 = ((void*)0);
 } else {
  VAR_13 = FUNC_1(-VAR_1);
 }
 FUNC_6(VAR_12);

 if (!FUNC_2(VAR_13))
  FUNC_9(VAR_8, VAR_9, VAR_13);

 return VAR_13;
}
