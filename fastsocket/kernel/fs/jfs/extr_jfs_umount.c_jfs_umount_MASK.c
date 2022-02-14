
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct jfs_sb_info {TYPE_1__* direct_inode; struct inode* ipimap; struct inode* ipaimap; struct inode* ipaimap2; struct jfs_log* log; struct inode* ipbmap; } ;
struct jfs_log {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int i_mapping; } ;


 int VAR_0 ;
 struct jfs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct jfs_log*,int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (struct super_block*) ;
 int FUNC_8 (struct super_block*,int ) ;

int FUNC_9(struct super_block *VAR_1)
{
 struct jfs_sb_info *VAR_2 = FUNC_0(VAR_1);
 struct inode *VAR_3 = VAR_2->ipbmap;
 struct inode *VAR_4 = VAR_2->ipimap;
 struct inode *VAR_5 = VAR_2->ipaimap;
 struct inode *VAR_6 = VAR_2->ipaimap2;
 struct jfs_log *VAR_7;
 int VAR_8 = 0;

 FUNC_6("UnMount JFS: sb:0x%p", VAR_1);






 if ((VAR_7 = VAR_2->log))



  FUNC_5(VAR_7, 1);




 FUNC_3(VAR_4, 0);

 FUNC_2(VAR_4);
 VAR_2->ipimap = ((void*)0);




 VAR_6 = VAR_2->ipaimap2;
 if (VAR_6) {
  FUNC_3(VAR_6, 0);
  FUNC_2(VAR_6);
  VAR_2->ipaimap2 = ((void*)0);
 }




 VAR_5 = VAR_2->ipaimap;
 FUNC_3(VAR_5, 0);
 FUNC_2(VAR_5);
 VAR_2->ipaimap = ((void*)0);




 FUNC_1(VAR_3, 0);

 FUNC_2(VAR_3);
 VAR_2->ipimap = ((void*)0);





 FUNC_4(VAR_2->direct_inode->i_mapping);
 if (VAR_7) {
  FUNC_8(VAR_1, VAR_0);






  VAR_8 = FUNC_7(VAR_1);
 }
 FUNC_6("UnMount JFS Complete: rc = %d", VAR_8);
 return VAR_8;
}
