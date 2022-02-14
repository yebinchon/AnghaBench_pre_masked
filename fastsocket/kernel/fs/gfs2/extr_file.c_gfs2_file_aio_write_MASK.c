
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {struct file* ki_filp; } ;
struct iovec {int dummy; } ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_inode {int i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct file {int f_flags; struct dentry* f_dentry; TYPE_1__* f_mapping; } ;
struct dentry {int d_inode; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int host; } ;


 struct gfs2_inode* FUNC_0 (int ) ;
 struct gfs2_sbd* FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct kiocb*,struct iovec const*,unsigned long,int ) ;
 int FUNC_3 (struct gfs2_holder*) ;
 int FUNC_4 (int ,int ,int ,struct gfs2_holder*) ;
 int FUNC_5 (struct gfs2_inode*) ;
 int FUNC_6 (int ,int ,size_t) ;
 size_t FUNC_7 (struct iovec const*,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_8(struct kiocb *VAR_2, const struct iovec *VAR_3,
       unsigned long VAR_4, loff_t VAR_5)
{
 struct file *VAR_6 = VAR_2->ki_filp;
 size_t VAR_7 = FUNC_7(VAR_3, VAR_4);
 struct dentry *VAR_8 = VAR_6->f_dentry;
 struct gfs2_inode *VAR_9 = FUNC_0(VAR_8->d_inode);
 struct gfs2_sbd *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_1(VAR_6->f_mapping->host);
 VAR_11 = FUNC_5(VAR_9);
 if (VAR_11)
  return VAR_11;

 FUNC_6(VAR_6->f_dentry->d_inode, VAR_5, VAR_7);
 if (VAR_6->f_flags & VAR_1) {
  struct gfs2_holder VAR_12;

  VAR_11 = FUNC_4(VAR_9->i_gl, VAR_0, 0, &VAR_12);
  if (VAR_11)
   return VAR_11;
  FUNC_3(&VAR_12);
 }

 return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
}
