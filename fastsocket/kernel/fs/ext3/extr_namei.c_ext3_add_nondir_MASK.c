
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;
typedef int handle_t ;


 int FUNC_0 (struct dentry*,struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int *,struct dentry*,struct inode*) ;
 int FUNC_3 (int *,struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;

__attribute__((used)) static int FUNC_6(handle_t *VAR_0,
  struct dentry *VAR_1, struct inode *VAR_2)
{
 int VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (!VAR_3) {
  FUNC_3(VAR_0, VAR_2);
  FUNC_0(VAR_1, VAR_2);
  FUNC_5(VAR_2);
  return 0;
 }
 FUNC_1(VAR_2);
 FUNC_5(VAR_2);
 FUNC_4(VAR_2);
 return VAR_3;
}
