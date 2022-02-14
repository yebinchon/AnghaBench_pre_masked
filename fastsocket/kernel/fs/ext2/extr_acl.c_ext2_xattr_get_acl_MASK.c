
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int i_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct posix_acl*) ;
 int VAR_2 ;
 int FUNC_1 (struct posix_acl*) ;
 struct posix_acl* FUNC_2 (struct inode*,int) ;
 int FUNC_3 (struct posix_acl*) ;
 int FUNC_4 (struct posix_acl*,void*,size_t) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct inode *VAR_3, int VAR_4, void *VAR_5, size_t VAR_6)
{
 struct posix_acl *VAR_7;
 int VAR_8;

 if (!FUNC_5(VAR_3->i_sb, VAR_2))
  return -VAR_1;

 VAR_7 = FUNC_2(VAR_3, VAR_4);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);
 if (VAR_7 == ((void*)0))
  return -VAR_0;
 VAR_8 = FUNC_4(VAR_7, VAR_5, VAR_6);
 FUNC_3(VAR_7);

 return VAR_8;
}
