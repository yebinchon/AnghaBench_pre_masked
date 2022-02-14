
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct fuse_conn {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct fuse_conn*,int ,struct file*,int) ;
 int FUNC_1 (struct inode*,struct file*) ;
 int FUNC_2 (struct inode*,struct file*) ;
 struct fuse_conn* FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;

int FUNC_5(struct inode *VAR_0, struct file *VAR_1, bool VAR_2)
{
 struct fuse_conn *VAR_3 = FUNC_3(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_3, FUNC_4(VAR_0), VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;

 FUNC_1(VAR_0, VAR_1);

 return 0;
}
