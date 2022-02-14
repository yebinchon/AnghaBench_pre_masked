
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int a_count; } ;
struct inode {int i_mode; } ;
struct btrfs_trans_handle {int dummy; } ;
typedef int mode_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct btrfs_trans_handle*,struct inode*,char const*,char*,int,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int,int ) ;
 int FUNC_4 (struct posix_acl*,int *) ;
 int FUNC_5 (struct posix_acl*,char*,int) ;
 int FUNC_6 (struct posix_acl*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct inode*,int,struct posix_acl*) ;

__attribute__((used)) static int FUNC_9(struct btrfs_trans_handle *VAR_5,
    struct inode *VAR_6, struct posix_acl *VAR_7, int VAR_8)
{
 int VAR_9, VAR_10 = 0;
 const char *VAR_11;
 char *VAR_12 = ((void*)0);
 mode_t VAR_13;

 if (VAR_7) {
  VAR_9 = FUNC_6(VAR_7);
  if (VAR_9 < 0)
   return VAR_9;
  VAR_9 = 0;
 }

 switch (VAR_8) {
 case 129:
  VAR_13 = VAR_6->i_mode;
  VAR_11 = VAR_3;
  if (VAR_7) {
   VAR_9 = FUNC_4(VAR_7, &VAR_13);
   if (VAR_9 < 0)
    return VAR_9;
   VAR_6->i_mode = VAR_13;
  }
  VAR_9 = 0;
  break;
 case 128:
  if (!FUNC_0(VAR_6->i_mode))
   return VAR_7 ? -VAR_0 : 0;
  VAR_11 = VAR_4;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_7) {
  VAR_10 = FUNC_7(VAR_7->a_count);
  VAR_12 = FUNC_3(VAR_10, VAR_2);
  if (!VAR_12) {
   VAR_9 = -VAR_1;
   goto out;
  }

  VAR_9 = FUNC_5(VAR_7, VAR_12, VAR_10);
  if (VAR_9 < 0)
   goto out;
 }

 VAR_9 = FUNC_1(VAR_5, VAR_6, VAR_11, VAR_12, VAR_10, 0);
out:
 FUNC_2(VAR_12);

 if (!VAR_9)
  FUNC_8(VAR_6, VAR_8, VAR_7);

 return VAR_9;
}
