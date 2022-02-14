
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tid_t ;
struct posix_acl {int dummy; } ;
struct inode {int i_sb; int i_mode; } ;
struct TYPE_2__ {int commit_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct posix_acl*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct posix_acl*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct posix_acl* FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (int ,struct inode*,int ,struct posix_acl*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct posix_acl*,int ) ;
 struct posix_acl* FUNC_9 (struct posix_acl*,int ) ;
 int FUNC_10 (struct posix_acl*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int,struct inode**,int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_4)
{
 struct posix_acl *VAR_5, *VAR_6;
 int VAR_7;

 if (FUNC_3(VAR_4->i_mode))
  return -VAR_2;

 VAR_5 = FUNC_4(VAR_4, VAR_0);
 if (FUNC_0(VAR_5) || !VAR_5)
  return FUNC_2(VAR_5);

 VAR_6 = FUNC_9(VAR_5, VAR_3);
 FUNC_10(VAR_5);
 if (!VAR_6)
  return -VAR_1;

 VAR_7 = FUNC_8(VAR_6, VAR_4->i_mode);
 if (!VAR_7) {
  tid_t VAR_8 = FUNC_11(VAR_4->i_sb, 0);
  FUNC_6(&FUNC_1(VAR_4)->commit_mutex);
  VAR_7 = FUNC_5(VAR_8, VAR_4, VAR_0, VAR_6);
  if (!VAR_7)
   VAR_7 = FUNC_12(VAR_8, 1, &VAR_4, 0);
  FUNC_13(VAR_8);
  FUNC_7(&FUNC_1(VAR_4)->commit_mutex);
 }

 FUNC_10(VAR_6);
 return VAR_7;
}
