
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;
struct fuse_conn {int inst_mutex; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct dentry* FUNC_1 (struct dentry*,struct inode*) ;
 struct fuse_conn* FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct dentry *FUNC_5(struct dentry *VAR_0,
           struct inode *VAR_1)
{
 struct dentry *VAR_2;

 if (VAR_1 && FUNC_0(VAR_1->i_mode)) {
  struct fuse_conn *VAR_3 = FUNC_2(VAR_1);

  FUNC_3(&VAR_3->inst_mutex);
  VAR_2 = FUNC_1(VAR_0, VAR_1);
  FUNC_4(&VAR_3->inst_mutex);
 } else {
  VAR_2 = FUNC_1(VAR_0, VAR_1);
 }

 return VAR_2;
}
