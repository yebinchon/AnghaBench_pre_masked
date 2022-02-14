
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct gfs2_inode {int i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct dentry {struct inode* d_inode; } ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct dentry*,char const*,void const*,size_t,int) ;
 int FUNC_2 (struct gfs2_holder*) ;
 int FUNC_3 (struct gfs2_holder*) ;
 int FUNC_4 (int ,int ,int ,struct gfs2_holder*) ;
 int FUNC_5 (struct gfs2_holder*) ;
 int FUNC_6 (struct gfs2_inode*) ;

__attribute__((used)) static int FUNC_7(struct dentry *VAR_1, const char *VAR_2,
    const void *VAR_3, size_t VAR_4, int VAR_5)
{
 struct inode *VAR_6 = VAR_1->d_inode;
 struct gfs2_inode *VAR_7 = FUNC_0(VAR_6);
 struct gfs2_holder VAR_8;
 int VAR_9;

 FUNC_4(VAR_7->i_gl, VAR_0, 0, &VAR_8);
 VAR_9 = FUNC_3(&VAR_8);
 if (VAR_9 == 0) {
  VAR_9 = FUNC_6(VAR_7);
  if (VAR_9 == 0)
   VAR_9 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
  FUNC_2(&VAR_8);
 }
 FUNC_5(&VAR_8);
 return VAR_9;
}
