
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_cookie {int lock; int fscache; } ;
struct p9_fid {int dummy; } ;
struct inode {int dummy; } ;
struct file {int f_flags; struct p9_fid* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 struct v9fs_cookie* FUNC_4 (struct inode*) ;

void FUNC_5(struct inode *VAR_2, struct file *VAR_3)
{
 struct v9fs_cookie *VAR_4 = FUNC_4(VAR_2);
 struct p9_fid *VAR_5;

 if (!VAR_4->fscache)
  return;

 FUNC_0(&VAR_4->lock);
 VAR_5 = VAR_3->private_data;
 if ((VAR_3->f_flags & VAR_0) != VAR_1)
  FUNC_2(VAR_2);
 else
  FUNC_3(VAR_2);

 FUNC_1(&VAR_4->lock);
}
