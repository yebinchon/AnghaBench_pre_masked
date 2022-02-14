
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (struct inode*,int ,char const*,char*,int,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int,int ) ;
 int FUNC_5 (struct posix_acl*,char*,int) ;
 int FUNC_6 (struct inode*,int,struct posix_acl*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_3, int VAR_4, struct posix_acl *VAR_5)
{
 int VAR_6;
 int VAR_7;
 char *VAR_8;
 const char *VAR_9 = FUNC_1(VAR_4);

 FUNC_0(VAR_9 == ((void*)0));
 VAR_7 = FUNC_5(VAR_5, ((void*)0), 0);
 if (VAR_7 == 0)
  return 0;
 VAR_8 = FUNC_4(VAR_7, VAR_1);
 if (VAR_8 == ((void*)0))
  return -VAR_0;
 VAR_6 = FUNC_5(VAR_5, VAR_8, VAR_7);
 if (VAR_6 < 0)
  goto out;
 VAR_6 = FUNC_2(VAR_3, VAR_2, VAR_9, VAR_8, VAR_7, 0);
 if (!VAR_6)
  FUNC_6(VAR_3, VAR_4, VAR_5);
out:
 FUNC_3(VAR_8);
 return VAR_6;
}
