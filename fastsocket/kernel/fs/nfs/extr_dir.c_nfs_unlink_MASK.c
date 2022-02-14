
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_ino; TYPE_1__* i_sb; } ;
struct TYPE_4__ {int name; } ;
struct dentry {int d_lock; int d_inode; int d_count; TYPE_2__ d_name; } ;
struct TYPE_3__ {int s_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int VAR_2 ;
 int FUNC_4 (int ,char*,int ,int ,int ) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct dentry*,int ) ;
 int FUNC_8 (struct inode*,struct dentry*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_3, struct dentry *VAR_4)
{
 int VAR_5;
 int VAR_6 = 0;

 FUNC_4(VAR_1, "NFS: unlink(%s/%ld, %s)\n", VAR_3->i_sb->s_id,
  VAR_3->i_ino, VAR_4->d_name.name);

 FUNC_9(&VAR_2);
 FUNC_9(&VAR_4->d_lock);
 if (FUNC_1(&VAR_4->d_count) > 1) {
  FUNC_10(&VAR_4->d_lock);
  FUNC_10(&VAR_2);

  FUNC_11(VAR_4->d_inode, 0);
  VAR_5 = FUNC_8(VAR_3, VAR_4);
  return VAR_5;
 }
 if (!FUNC_3(VAR_4)) {
  FUNC_0(VAR_4);
  VAR_6 = 1;
 }
 FUNC_10(&VAR_4->d_lock);
 FUNC_10(&VAR_2);
 VAR_5 = FUNC_5(VAR_4);
 if (!VAR_5 || VAR_5 == -VAR_0) {
  FUNC_7(VAR_4, FUNC_6(VAR_3));
 } else if (VAR_6)
  FUNC_2(VAR_4);
 return VAR_5;
}
