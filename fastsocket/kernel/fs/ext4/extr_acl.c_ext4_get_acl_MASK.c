
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int i_sb; } ;


 struct posix_acl* VAR_0 ;


 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct posix_acl* FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct posix_acl*) ;
 int VAR_7 ;
 struct posix_acl* FUNC_3 (char*,int) ;
 int FUNC_4 (struct inode*,int,char*,char*,int) ;
 struct posix_acl* FUNC_5 (struct inode*,int) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int,int ) ;
 int FUNC_8 (struct inode*,int,struct posix_acl*) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static struct posix_acl *
FUNC_10(struct inode *VAR_8, int VAR_9)
{
 int VAR_10;
 char *VAR_11 = ((void*)0);
 struct posix_acl *VAR_12;
 int VAR_13;

 if (!FUNC_9(VAR_8->i_sb, VAR_7))
  return ((void*)0);

 VAR_12 = FUNC_5(VAR_8, VAR_9);
 if (VAR_12 != VAR_0)
  return VAR_12;

 switch (VAR_9) {
 case 129:
  VAR_10 = VAR_4;
  break;
 case 128:
  VAR_10 = VAR_5;
  break;
 default:
  FUNC_0();
 }
 VAR_13 = FUNC_4(VAR_8, VAR_10, "", ((void*)0), 0);
 if (VAR_13 > 0) {
  VAR_11 = FUNC_7(VAR_13, VAR_6);
  if (!VAR_11)
   return FUNC_1(-VAR_2);
  VAR_13 = FUNC_4(VAR_8, VAR_10, "", VAR_11, VAR_13);
 }
 if (VAR_13 > 0)
  VAR_12 = FUNC_3(VAR_11, VAR_13);
 else if (VAR_13 == -VAR_1 || VAR_13 == -VAR_3)
  VAR_12 = ((void*)0);
 else
  VAR_12 = FUNC_1(VAR_13);
 FUNC_6(VAR_11);

 if (!FUNC_2(VAR_12))
  FUNC_8(VAR_8, VAR_9, VAR_12);

 return VAR_12;
}
