
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_state; int i_mapping; } ;
struct gfs2_inode {int i_gl; } ;
struct file {int dummy; } ;
struct dentry {struct inode* d_inode; } ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (struct gfs2_inode*) ;
 int FUNC_4 (struct inode*,int) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_3, struct dentry *VAR_4, int VAR_5)
{
 struct inode *VAR_6 = VAR_4->d_inode;
 int VAR_7 = VAR_6->i_state & VAR_0;
 struct gfs2_inode *VAR_8 = FUNC_0(VAR_6);
 int VAR_9;

 if (!FUNC_3(VAR_8))
  VAR_7 &= ~VAR_1;
 if (VAR_5)
  VAR_7 &= ~VAR_2;

 if (VAR_7) {
  VAR_9 = FUNC_4(VAR_6, 1);
  if (VAR_9)
   return VAR_9;
  if (FUNC_3(VAR_8))
   FUNC_1(VAR_6->i_mapping);
  FUNC_2(VAR_8->i_gl, 1);
 }

 return 0;
}
