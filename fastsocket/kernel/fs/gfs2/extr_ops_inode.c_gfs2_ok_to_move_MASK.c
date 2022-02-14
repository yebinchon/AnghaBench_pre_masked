
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {TYPE_1__* s_root; } ;
struct inode {struct super_block* i_sb; } ;
struct gfs2_inode {struct inode i_inode; } ;
struct TYPE_2__ {struct inode* d_inode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct inode*,int *,int) ;
 int VAR_1 ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;

__attribute__((used)) static int FUNC_5(struct gfs2_inode *VAR_2, struct gfs2_inode *VAR_3)
{
 struct inode *VAR_4 = &VAR_3->i_inode;
 struct super_block *VAR_5 = VAR_4->i_sb;
 struct inode *VAR_6;
 int VAR_7 = 0;

 FUNC_3(VAR_4);

 for (;;) {
  if (VAR_4 == &VAR_2->i_inode) {
   VAR_7 = -VAR_0;
   break;
  }
  if (VAR_4 == VAR_5->s_root->d_inode) {
   VAR_7 = 0;
   break;
  }

  VAR_6 = FUNC_2(VAR_4, &VAR_1, 1);
  if (FUNC_0(VAR_6)) {
   VAR_7 = FUNC_1(VAR_6);
   break;
  }

  FUNC_4(VAR_4);
  VAR_4 = VAR_6;
 }

 FUNC_4(VAR_4);

 return VAR_7;
}
