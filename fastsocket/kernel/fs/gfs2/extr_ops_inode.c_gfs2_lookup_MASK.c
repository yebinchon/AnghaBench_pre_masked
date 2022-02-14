
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nameidata {int dummy; } ;
struct inode {int dummy; } ;
struct gfs2_holder {int dummy; } ;
struct gfs2_glock {int dummy; } ;
struct dentry {int d_name; int * d_op; } ;
struct TYPE_2__ {struct gfs2_glock* i_gl; } ;


 struct dentry* FUNC_0 (struct inode*) ;
 struct dentry* FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct dentry*,struct inode*) ;
 struct dentry* FUNC_5 (struct inode*,struct dentry*) ;
 int VAR_2 ;
 int FUNC_6 (struct gfs2_holder*) ;
 int FUNC_7 (struct gfs2_glock*,int ,int ,struct gfs2_holder*) ;
 struct inode* FUNC_8 (struct inode*,int *,int ) ;
 int FUNC_9 (struct inode*) ;

__attribute__((used)) static struct dentry *FUNC_10(struct inode *VAR_3, struct dentry *VAR_4,
      struct nameidata *VAR_5)
{
 struct inode *VAR_6 = ((void*)0);

 VAR_4->d_op = &VAR_2;

 VAR_6 = FUNC_8(VAR_3, &VAR_4->d_name, 0);
 if (VAR_6 && FUNC_3(VAR_6))
  return FUNC_0(VAR_6);

 if (VAR_6) {
  struct gfs2_glock *VAR_7 = FUNC_2(VAR_6)->i_gl;
  struct gfs2_holder VAR_8;
  int VAR_9;
  VAR_9 = FUNC_7(VAR_7, VAR_1, VAR_0, &VAR_8);
  if (VAR_9) {
   FUNC_9(VAR_6);
   return FUNC_1(VAR_9);
  }
  FUNC_6(&VAR_8);
  return FUNC_5(VAR_6, VAR_4);
 }
 FUNC_4(VAR_4, VAR_6);

 return ((void*)0);
}
