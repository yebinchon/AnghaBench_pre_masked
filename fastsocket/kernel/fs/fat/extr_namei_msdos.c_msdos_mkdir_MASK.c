
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct super_block {int dummy; } ;
struct inode {int i_nlink; struct timespec i_ctime; struct timespec i_atime; struct timespec i_mtime; struct super_block* i_sb; } ;
struct fat_slot_info {int bh; int i_pos; int de; } ;
struct TYPE_3__ {char* name; int len; } ;
struct dentry {TYPE_1__ d_name; } ;
struct TYPE_4__ {int options; } ;


 struct timespec VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct dentry*,struct inode*) ;
 int FUNC_5 (struct inode*,struct timespec*) ;
 struct inode* FUNC_6 (struct super_block*,int ,int ) ;
 int FUNC_7 (struct super_block*,struct inode*,struct inode*) ;
 int FUNC_8 (struct inode*,int) ;
 int FUNC_9 (struct inode*,unsigned char*,struct fat_slot_info*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct super_block*) ;
 int FUNC_12 (struct inode*,unsigned char*,int,int,int,struct timespec*,struct fat_slot_info*) ;
 int FUNC_13 (char*,int ,unsigned char*,int *) ;
 int FUNC_14 (struct super_block*) ;

__attribute__((used)) static int FUNC_15(struct inode *VAR_3, struct dentry *VAR_4, int VAR_5)
{
 struct super_block *VAR_6 = VAR_3->i_sb;
 struct fat_slot_info VAR_7;
 struct inode *VAR_8;
 unsigned char VAR_9[VAR_2];
 struct timespec VAR_10;
 int VAR_11, VAR_12, VAR_13;

 FUNC_11(VAR_6);

 VAR_11 = FUNC_13(VAR_4->d_name.name, VAR_4->d_name.len,
    VAR_9, &FUNC_1(VAR_6)->options);
 if (VAR_11)
  goto out;
 VAR_12 = (VAR_4->d_name.name[0] == '.') && (VAR_9[0] != '.');

 if (!FUNC_9(VAR_3, VAR_9, &VAR_7)) {
  FUNC_3(VAR_7.bh);
  VAR_11 = -VAR_1;
  goto out;
 }

 VAR_10 = VAR_0;
 VAR_13 = FUNC_5(VAR_3, &VAR_10);
 if (VAR_13 < 0) {
  VAR_11 = VAR_13;
  goto out;
 }
 VAR_11 = FUNC_12(VAR_3, VAR_9, 1, VAR_12, VAR_13, &VAR_10, &VAR_7);
 if (VAR_11)
  goto out_free;
 FUNC_10(VAR_3);

 VAR_8 = FUNC_6(VAR_6, VAR_7.de, VAR_7.i_pos);
 FUNC_3(VAR_7.bh);
 if (FUNC_0(VAR_8)) {
  VAR_11 = FUNC_2(VAR_8);

  goto out;
 }
 VAR_8->i_nlink = 2;
 VAR_8->i_mtime = VAR_8->i_atime = VAR_8->i_ctime = VAR_10;


 FUNC_4(VAR_4, VAR_8);

 FUNC_14(VAR_6);
 FUNC_7(VAR_6, VAR_3, VAR_8);
 return 0;

out_free:
 FUNC_8(VAR_3, VAR_13);
out:
 FUNC_14(VAR_6);
 return VAR_11;
}
