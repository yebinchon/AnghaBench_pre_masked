
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kiocb {struct file* ki_filp; } ;
struct iovec {int dummy; } ;
struct inode {TYPE_1__* i_sb; } ;
struct gfs2_inode {int i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct file {TYPE_2__* f_mapping; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_4__ {struct inode* host; } ;
struct TYPE_3__ {int s_bdev; } ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int,struct kiocb*,struct inode*,int ,struct iovec const*,int ,unsigned long,int ,int *) ;
 int VAR_1 ;
 int FUNC_2 (struct gfs2_holder*) ;
 int FUNC_3 (struct gfs2_holder*) ;
 int FUNC_4 (int ,int ,int ,struct gfs2_holder*) ;
 int FUNC_5 (struct gfs2_holder*) ;
 int FUNC_6 (struct gfs2_inode*,int,int ) ;

__attribute__((used)) static ssize_t FUNC_7(int VAR_2, struct kiocb *VAR_3,
         const struct iovec *VAR_4, loff_t VAR_5,
         unsigned long VAR_6)
{
 struct file *VAR_7 = VAR_3->ki_filp;
 struct inode *VAR_8 = VAR_7->f_mapping->host;
 struct gfs2_inode *VAR_9 = FUNC_0(VAR_8);
 struct gfs2_holder VAR_10;
 int VAR_11;
 FUNC_4(VAR_9->i_gl, VAR_0, 0, &VAR_10);
 VAR_11 = FUNC_3(&VAR_10);
 if (VAR_11)
  return VAR_11;
 VAR_11 = FUNC_6(VAR_9, VAR_2, VAR_5);
 if (VAR_11 != 1)
  goto out;

 VAR_11 = FUNC_1(VAR_2, VAR_3, VAR_8, VAR_8->i_sb->s_bdev,
        VAR_4, VAR_5, VAR_6,
        VAR_1, ((void*)0));
out:
 FUNC_2(&VAR_10);
 FUNC_5(&VAR_10);
 return VAR_11;
}
