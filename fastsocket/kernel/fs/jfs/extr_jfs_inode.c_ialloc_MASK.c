
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int umode_t ;
struct super_block {int dummy; } ;
struct jfs_inode_info {int mode2; scalar_t__ xtlid; scalar_t__ atltail; scalar_t__ atlhead; scalar_t__ blid; scalar_t__ bxflag; scalar_t__ btindex; scalar_t__ btorder; scalar_t__ acltype; scalar_t__ next_index; int ea; int acl; scalar_t__ cflag; int otime; int saved_gid; int saved_uid; } ;
struct TYPE_4__ {int tv_sec; } ;
struct inode {int i_mode; scalar_t__ i_nlink; int i_flags; scalar_t__ i_generation; TYPE_2__ i_ctime; TYPE_2__ i_atime; TYPE_2__ i_mtime; scalar_t__ i_blocks; int i_gid; int i_uid; struct super_block* i_sb; } ;
typedef int dxd_t ;
struct TYPE_3__ {int gengen; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct inode* FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct jfs_inode_info* FUNC_1 (struct inode*) ;
 TYPE_1__* FUNC_2 (struct super_block*) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_12 ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_13 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct inode*,scalar_t__,struct inode*) ;
 scalar_t__ FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (char*,struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (int *,int ,int) ;
 struct inode* FUNC_15 (struct super_block*) ;
 int FUNC_16 (struct inode*) ;
 scalar_t__ FUNC_17 (struct inode*) ;
 int FUNC_18 (struct inode*) ;

struct inode *FUNC_19(struct inode *VAR_14, umode_t VAR_15)
{
 struct super_block *VAR_16 = VAR_14->i_sb;
 struct inode *VAR_17;
 struct jfs_inode_info *VAR_18;
 int VAR_19;

 VAR_17 = FUNC_15(VAR_16);
 if (!VAR_17) {
  FUNC_12("ialloc: new_inode returned NULL!");
  VAR_19 = -VAR_4;
  goto fail;
 }

 VAR_18 = FUNC_1(VAR_17);

 VAR_19 = FUNC_7(VAR_14, FUNC_3(VAR_15), VAR_17);
 if (VAR_19) {
  FUNC_12("ialloc: diAlloc returned %d!", VAR_19);
  if (VAR_19 == -VAR_3)
   FUNC_13(VAR_17);
  goto fail_put;
 }

 if (FUNC_8(VAR_17) < 0) {
  VAR_19 = -VAR_2;
  goto fail_unlock;
 }

 VAR_17->i_uid = FUNC_6();
 if (VAR_14->i_mode & VAR_12) {
  VAR_17->i_gid = VAR_14->i_gid;
  if (FUNC_3(VAR_15))
   VAR_15 |= VAR_12;
 } else
  VAR_17->i_gid = FUNC_5();





 VAR_18->saved_uid = VAR_17->i_uid;
 VAR_18->saved_gid = VAR_17->i_gid;




 if (FUNC_17(VAR_17)) {
  VAR_19 = -VAR_1;
  goto fail_drop;
 }

 VAR_17->i_mode = VAR_15;

 VAR_18->mode2 = FUNC_1(VAR_14)->mode2 & VAR_10;

 if (FUNC_3(VAR_15)) {
  VAR_18->mode2 |= VAR_5;
  VAR_18->mode2 &= ~VAR_9;
 }
 else {
  VAR_18->mode2 |= VAR_6 | VAR_7;
  if (FUNC_4(VAR_15))
   VAR_18->mode2 &= ~(VAR_11|VAR_8);
 }
 VAR_18->mode2 |= VAR_15;

 VAR_17->i_blocks = 0;
 VAR_17->i_mtime = VAR_17->i_atime = VAR_17->i_ctime = VAR_0;
 VAR_18->otime = VAR_17->i_ctime.tv_sec;
 VAR_17->i_generation = FUNC_2(VAR_16)->gengen++;

 VAR_18->cflag = 0;


 FUNC_14(&VAR_18->acl, 0, sizeof(dxd_t));
 FUNC_14(&VAR_18->ea, 0, sizeof(dxd_t));
 VAR_18->next_index = 0;
 VAR_18->acltype = 0;
 VAR_18->btorder = 0;
 VAR_18->btindex = 0;
 VAR_18->bxflag = 0;
 VAR_18->blid = 0;
 VAR_18->atlhead = 0;
 VAR_18->atltail = 0;
 VAR_18->xtlid = 0;
 FUNC_11(VAR_17);

 FUNC_10("ialloc returns inode = 0x%p\n", VAR_17);

 return VAR_17;

fail_drop:
 FUNC_18(VAR_17);
 VAR_17->i_flags |= VAR_13;
fail_unlock:
 VAR_17->i_nlink = 0;
 FUNC_16(VAR_17);
fail_put:
 FUNC_9(VAR_17);
fail:
 return FUNC_0(VAR_19);
}
