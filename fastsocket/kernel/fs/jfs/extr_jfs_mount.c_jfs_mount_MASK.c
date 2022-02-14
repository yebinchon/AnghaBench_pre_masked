
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct jfs_sb_info {int mntflag; struct inode* ipimap; struct inode* ipaimap2; struct inode* ipbmap; struct inode* ipaimap; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct jfs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,int) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 struct inode* FUNC_6 (struct super_block*,int ,int) ;
 int FUNC_7 (struct inode*,int) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,struct inode*) ;

int FUNC_10(struct super_block *VAR_5)
{
 int VAR_6 = 0;
 struct jfs_sb_info *VAR_7 = FUNC_0(VAR_5);
 struct inode *VAR_8 = ((void*)0);
 struct inode *VAR_9 = ((void*)0);
 struct inode *VAR_10 = ((void*)0);
 struct inode *VAR_11 = ((void*)0);





 if ((VAR_6 = FUNC_1(VAR_5))) {
  goto errout20;
 }

 VAR_8 = FUNC_6(VAR_5, VAR_0, 0);
 if (VAR_8 == ((void*)0)) {
  FUNC_8("jfs_mount: Faild to read AGGREGATE_I");
  VAR_6 = -VAR_2;
  goto errout20;
 }
 VAR_7->ipaimap = VAR_8;

 FUNC_9("jfs_mount: ipaimap:0x%p", VAR_8);




 if ((VAR_6 = FUNC_5(VAR_8))) {
  FUNC_8("jfs_mount: diMount(ipaimap) failed w/rc = %d", VAR_6);
  goto errout21;
 }




 VAR_11 = FUNC_6(VAR_5, VAR_1, 0);
 if (VAR_11 == ((void*)0)) {
  VAR_6 = -VAR_2;
  goto errout22;
 }

 FUNC_9("jfs_mount: ipbmap:0x%p", VAR_11);

 VAR_7->ipbmap = VAR_11;




 if ((VAR_6 = FUNC_2(VAR_11))) {
  FUNC_8("jfs_mount: dbMount failed w/rc = %d", VAR_6);
  goto errout22;
 }
 if ((VAR_7->mntflag & VAR_4) == 0) {
  VAR_9 = FUNC_6(VAR_5, VAR_0, 1);
  if (!VAR_9) {
   FUNC_8("jfs_mount: Faild to read AGGREGATE_I");
   VAR_6 = -VAR_2;
   goto errout35;
  }
  VAR_7->ipaimap2 = VAR_9;

  FUNC_9("jfs_mount: ipaimap2:0x%p", VAR_9);




  if ((VAR_6 = FUNC_5(VAR_9))) {
   FUNC_8("jfs_mount: diMount(ipaimap2) failed, rc = %d",
    VAR_6);
   goto errout35;
  }
 } else

  VAR_7->ipaimap2 = ((void*)0);







 VAR_10 = FUNC_6(VAR_5, VAR_3, 0);
 if (VAR_10 == ((void*)0)) {
  FUNC_8("jfs_mount: Failed to read FILESYSTEM_I");

  VAR_6 = -VAR_2;
  goto errout40;
 }
 FUNC_9("jfs_mount: ipimap:0x%p", VAR_10);


 VAR_7->ipimap = VAR_10;


 if ((VAR_6 = FUNC_5(VAR_10))) {
  FUNC_8("jfs_mount: diMount failed w/rc = %d", VAR_6);
  goto errout41;
 }

 goto out;




      errout41:
 FUNC_4(VAR_10);

      errout40:


 if (VAR_9) {
  FUNC_7(VAR_9, 1);
  FUNC_4(VAR_9);
 }

      errout35:


 FUNC_3(VAR_11, 1);
 FUNC_4(VAR_11);

      errout22:

 FUNC_7(VAR_8, 1);

      errout21:
 FUNC_4(VAR_8);
      errout20:

      out:

 if (VAR_6)
  FUNC_8("Mount JFS Failure: %d", VAR_6);

 return VAR_6;
}
