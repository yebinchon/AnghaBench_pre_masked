
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int dummy; } ;
struct generic_acl_operations {struct posix_acl* (* getacl ) (struct inode*,int) ;} ;




 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*,char const*,size_t) ;
 int FUNC_1 (struct posix_acl*) ;
 int FUNC_2 (char const*) ;
 struct posix_acl* FUNC_3 (struct inode*,int) ;

size_t
FUNC_4(struct inode *VAR_2, struct generic_acl_operations *VAR_3,
   int VAR_4, char *VAR_5, size_t VAR_6)
{
 struct posix_acl *VAR_7;
 const char *VAR_8;
 size_t VAR_9;

 VAR_7 = VAR_3->getacl(VAR_2, VAR_4);
 if (!VAR_7)
  return 0;
 FUNC_1(VAR_7);

 switch(VAR_4) {
  case 129:
   VAR_8 = VAR_0;
   break;

  case 128:
   VAR_8 = VAR_1;
   break;

  default:
   return 0;
 }
 VAR_9 = FUNC_2(VAR_8) + 1;
 if (VAR_5 && VAR_9 <= VAR_6)
  FUNC_0(VAR_5, VAR_8, VAR_9);
 return VAR_9;
}
