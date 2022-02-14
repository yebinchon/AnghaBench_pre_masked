
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {struct gfs2_sbd* s_fs_info; } ;
struct inode {int * d_op; } ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_inum_host {int no_addr; int no_formal_ino; } ;
struct dentry {int * d_op; } ;
struct TYPE_2__ {int i_no_formal_ino; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (struct inode*) ;
 int VAR_3 ;
 struct inode* FUNC_5 (struct super_block*,int ,int ) ;
 struct inode* FUNC_6 (struct gfs2_sbd*,int ,int *,int ) ;
 int FUNC_7 (struct inode*) ;

__attribute__((used)) static struct dentry *FUNC_8(struct super_block *VAR_4,
          struct gfs2_inum_host *VAR_5)
{
 struct gfs2_sbd *VAR_6 = VAR_4->s_fs_info;
 struct inode *VAR_7;
 struct dentry *VAR_8;

 VAR_7 = FUNC_5(VAR_4, VAR_5->no_addr, 0);
 if (VAR_7) {
  if (FUNC_2(VAR_7)->i_no_formal_ino != VAR_5->no_formal_ino) {
   FUNC_7(VAR_7);
   return FUNC_1(-VAR_1);
  }
 } else {
  VAR_7 = FUNC_6(VAR_6, VAR_5->no_addr,
         &VAR_5->no_formal_ino,
         VAR_2);
  if (VAR_7 == FUNC_1(-VAR_0))
   VAR_7 = FUNC_5(VAR_4, VAR_5->no_addr, 0);
 }

 if (FUNC_3(VAR_7))
  return FUNC_0(VAR_7);

 VAR_8 = FUNC_4(VAR_7);
 if (!FUNC_3(VAR_8))
  VAR_8->d_op = &VAR_3;
 return VAR_8;
}
