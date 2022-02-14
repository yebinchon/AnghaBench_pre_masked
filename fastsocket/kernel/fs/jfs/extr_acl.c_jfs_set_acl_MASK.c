
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tid_t ;
struct posix_acl {int a_count; } ;
struct inode {int i_mode; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,struct inode*,char*,char*,int,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int,int ) ;
 int FUNC_5 (struct posix_acl*,char*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct inode*,int,struct posix_acl*) ;

__attribute__((used)) static int FUNC_8(tid_t VAR_7, struct inode *VAR_8, int VAR_9,
         struct posix_acl *VAR_10)
{
 char *VAR_11;
 int VAR_12;
 int VAR_13 = 0;
 char *VAR_14 = ((void*)0);

 if (FUNC_1(VAR_8->i_mode))
  return -VAR_3;

 switch(VAR_9) {
  case 129:
   VAR_11 = VAR_5;
   break;
  case 128:
   VAR_11 = VAR_6;
   if (!FUNC_0(VAR_8->i_mode))
    return VAR_10 ? -VAR_0 : 0;
   break;
  default:
   return -VAR_1;
 }
 if (VAR_10) {
  VAR_13 = FUNC_6(VAR_10->a_count);
  VAR_14 = FUNC_4(VAR_13, VAR_4);
  if (!VAR_14)
   return -VAR_2;
  VAR_12 = FUNC_5(VAR_10, VAR_14, VAR_13);
  if (VAR_12 < 0)
   goto out;
 }
 VAR_12 = FUNC_2(VAR_7, VAR_8, VAR_11, VAR_14, VAR_13, 0);
out:
 FUNC_3(VAR_14);

 if (!VAR_12)
  FUNC_7(VAR_8, VAR_9, VAR_10);

 return VAR_12;
}
