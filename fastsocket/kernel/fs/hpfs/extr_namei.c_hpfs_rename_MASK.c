
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct quad_buffer_head {int dummy; } ;
struct inode {int i_sb; int i_ino; int i_mode; } ;
struct hpfs_dirent {int hidden; int * name; } ;
struct fnode {int len; int * name; int up; } ;
struct TYPE_4__ {int len; scalar_t__ name; } ;
struct dentry {struct inode* d_inode; TYPE_1__ d_name; } ;
struct buffer_head {int dummy; } ;
typedef int dnode_secno ;
struct TYPE_6__ {int i_parent_mutex; int i_mutex; int i_conv; int i_parent_dir; int i_dno; } ;
struct TYPE_5__ {int sb_conv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct hpfs_dirent*,struct hpfs_dirent*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,char*,int,struct hpfs_dirent*,int) ;
 int FUNC_6 (char*,int*) ;
 int FUNC_7 (struct quad_buffer_head*) ;
 int FUNC_8 (char*,int*) ;
 int FUNC_9 (struct inode*,char*,int) ;
 int FUNC_10 (int ,char*) ;
 TYPE_3__* FUNC_11 (struct inode*) ;
 int FUNC_12 (int ) ;
 struct fnode* FUNC_13 (int ,int ,struct buffer_head**) ;
 int FUNC_14 (struct quad_buffer_head*) ;
 int FUNC_15 (struct inode*,int ,struct hpfs_dirent*,struct quad_buffer_head*,int) ;
 TYPE_2__* FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 () ;
 struct hpfs_dirent* FUNC_20 (struct inode*,int ,char*,int,int *,struct quad_buffer_head*) ;
 int FUNC_21 (struct buffer_head*) ;
 int FUNC_22 (int *,char*,int) ;
 int FUNC_23 (int *,int ,int) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 () ;

__attribute__((used)) static int FUNC_27(struct inode *VAR_4, struct dentry *VAR_5,
  struct inode *VAR_6, struct dentry *VAR_7)
{
 char *VAR_8 = (char *)VAR_5->d_name.name;
 int VAR_9 = VAR_5->d_name.len;
 char *VAR_10 = (char *)VAR_7->d_name.name;
 int VAR_11 = VAR_7->d_name.len;
 struct inode *VAR_12 = VAR_5->d_inode;
 struct inode *VAR_13 = VAR_7->d_inode;
 struct quad_buffer_head VAR_14, VAR_15;
 struct hpfs_dirent *VAR_16, *VAR_17;
 struct hpfs_dirent VAR_18;
 dnode_secno VAR_19;
 int VAR_20;
 struct buffer_head *VAR_21;
 struct fnode *VAR_22;
 int VAR_23;
 if ((VAR_23 = FUNC_8((char *)VAR_10, &VAR_11))) return VAR_23;
 VAR_23 = 0;
 FUNC_6((char *)VAR_8, &VAR_9);

 FUNC_19();

 FUNC_24(&FUNC_11(VAR_12)->i_parent_mutex);
 if (VAR_13)
  FUNC_24(&FUNC_11(VAR_13)->i_parent_mutex);
 FUNC_24(&FUNC_11(VAR_4)->i_mutex);
 if (VAR_6 != VAR_4)
  FUNC_24(&FUNC_11(VAR_6)->i_mutex);


 if (VAR_13 && FUNC_0(VAR_13->i_mode)) {
  VAR_23 = -VAR_1;
  goto end1;
 }

 if (!(VAR_16 = FUNC_20(VAR_4, FUNC_11(VAR_4)->i_dno, (char *)VAR_8, VAR_9, &VAR_19, &VAR_14))) {
  FUNC_10(VAR_12->i_sb, "lookup succeeded but map dirent failed");
  VAR_23 = -VAR_2;
  goto end1;
 }
 FUNC_3(&VAR_18, VAR_16);
 VAR_18.hidden = VAR_10[0] == '.';

 if (VAR_13) {
  int VAR_24;
  if ((VAR_24 = FUNC_15(VAR_4, VAR_19, VAR_16, &VAR_14, 1)) != 2) {
   if ((VAR_17 = FUNC_20(VAR_6, FUNC_11(VAR_6)->i_dno, (char *)VAR_10, VAR_11, ((void*)0), &VAR_15))) {
    FUNC_2(VAR_13);
    FUNC_3(VAR_17, &VAR_18);
    FUNC_22(VAR_17->name, VAR_10, VAR_11);
    FUNC_14(&VAR_15);
    FUNC_7(&VAR_15);
    goto end;
   }
   FUNC_10(VAR_6->i_sb, "hpfs_rename: could not find dirent");
   VAR_23 = -VAR_0;
   goto end1;
  }
  VAR_23 = VAR_24 == 2 ? -VAR_3 : VAR_24 == 1 ? -VAR_0 : 0;
  goto end1;
 }

 if (VAR_6 == VAR_4) FUNC_7(&VAR_14);

 FUNC_12(VAR_12->i_sb);
 if ((VAR_20 = FUNC_5(VAR_6, VAR_10, VAR_11, &VAR_18, 1))) {
  FUNC_17(VAR_12->i_sb);
  if (VAR_20 == -1) FUNC_10(VAR_6->i_sb, "hpfs_rename: dirent already exists!");
  VAR_23 = VAR_20 == 1 ? -VAR_3 : -VAR_0;
  if (VAR_6 != VAR_4) FUNC_7(&VAR_14);
  goto end1;
 }

 if (VAR_6 == VAR_4)
  if (!(VAR_16 = FUNC_20(VAR_4, FUNC_11(VAR_4)->i_dno, (char *)VAR_8, VAR_9, &VAR_19, &VAR_14))) {
   FUNC_17(VAR_12->i_sb);
   FUNC_10(VAR_12->i_sb, "lookup succeeded but map dirent failed at #2");
   VAR_23 = -VAR_2;
   goto end1;
  }

 if ((VAR_20 = FUNC_15(VAR_4, VAR_19, VAR_16, &VAR_14, 0))) {
  FUNC_17(VAR_12->i_sb);
  FUNC_10(VAR_12->i_sb, "hpfs_rename: could not remove dirent");
  VAR_23 = VAR_20 == 2 ? -VAR_3 : -VAR_0;
  goto end1;
 }
 FUNC_17(VAR_12->i_sb);

 end:
 FUNC_11(VAR_12)->i_parent_dir = VAR_6->i_ino;
 if (FUNC_0(VAR_12->i_mode)) {
  FUNC_18(VAR_6);
  FUNC_4(VAR_4);
 }
 if ((VAR_22 = FUNC_13(VAR_12->i_sb, VAR_12->i_ino, &VAR_21))) {
  VAR_22->up = VAR_6->i_ino;
  VAR_22->len = VAR_11;
  FUNC_22(VAR_22->name, VAR_10, VAR_11>15?15:VAR_11);
  if (VAR_11 < 15) FUNC_23(&VAR_22->name[VAR_11], 0, 15 - VAR_11);
  FUNC_21(VAR_21);
  FUNC_1(VAR_21);
 }
 FUNC_11(VAR_12)->i_conv = FUNC_16(VAR_12->i_sb)->sb_conv;
 FUNC_9(VAR_12, (char *)VAR_10, VAR_11);
end1:
 if (VAR_4 != VAR_6)
  FUNC_25(&FUNC_11(VAR_6)->i_mutex);
 FUNC_25(&FUNC_11(VAR_4)->i_mutex);
 FUNC_25(&FUNC_11(VAR_12)->i_parent_mutex);
 if (VAR_13)
  FUNC_25(&FUNC_11(VAR_13)->i_parent_mutex);
 FUNC_26();
 return VAR_23;
}
