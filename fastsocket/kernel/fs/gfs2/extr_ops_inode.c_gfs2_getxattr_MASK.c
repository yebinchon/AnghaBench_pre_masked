
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct gfs2_inode {int i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct dentry {struct inode* d_inode; } ;
typedef int ssize_t ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct dentry*,char const*,void*,size_t) ;
 int FUNC_2 (struct gfs2_holder*) ;
 int FUNC_3 (struct gfs2_holder*) ;
 int FUNC_4 (int ,int ,int ,struct gfs2_holder*) ;
 int FUNC_5 (struct gfs2_holder*) ;

__attribute__((used)) static ssize_t FUNC_6(struct dentry *VAR_2, const char *VAR_3,
        void *VAR_4, size_t VAR_5)
{
 struct inode *VAR_6 = VAR_2->d_inode;
 struct gfs2_inode *VAR_7 = FUNC_0(VAR_6);
 struct gfs2_holder VAR_8;
 int VAR_9;

 FUNC_4(VAR_7->i_gl, VAR_1, VAR_0, &VAR_8);
 VAR_9 = FUNC_3(&VAR_8);
 if (VAR_9 == 0) {
  VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
  FUNC_2(&VAR_8);
 }
 FUNC_5(&VAR_8);
 return VAR_9;
}
