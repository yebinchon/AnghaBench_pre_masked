
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct quad_buffer_head {int dummy; } ;
struct inode {int i_mode; int i_sb; } ;
struct iattr {int ia_valid; int ia_size; } ;
struct hpfs_dirent {int fnode; scalar_t__ directory; scalar_t__ first; } ;
struct TYPE_3__ {char* name; unsigned int len; } ;
struct dentry {int d_lock; int d_count; struct inode* d_inode; TYPE_1__ d_name; } ;
typedef int fnode_secno ;
typedef int dnode_secno ;
struct TYPE_4__ {int i_parent_mutex; int i_mutex; int i_dno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,int ,int *) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (char*,unsigned int*) ;
 int FUNC_8 (struct quad_buffer_head*) ;
 int FUNC_9 (int ,char*) ;
 TYPE_2__* FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*,int ,struct hpfs_dirent*,struct quad_buffer_head*,int) ;
 int FUNC_12 () ;
 struct hpfs_dirent* FUNC_13 (struct inode*,int ,char*,unsigned int,int *,struct quad_buffer_head*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct dentry*,struct iattr*) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 () ;

__attribute__((used)) static int FUNC_21(struct inode *VAR_8, struct dentry *VAR_9)
{
 const char *VAR_10 = VAR_9->d_name.name;
 unsigned VAR_11 = VAR_9->d_name.len;
 struct quad_buffer_head VAR_12;
 struct hpfs_dirent *VAR_13;
 struct inode *VAR_14 = VAR_9->d_inode;
 dnode_secno VAR_15;
 fnode_secno VAR_16;
 int VAR_17;
 int VAR_18 = 0;
 int VAR_19;

 FUNC_12();
 FUNC_7((char *)VAR_10, &VAR_11);
again:
 FUNC_14(&FUNC_10(VAR_14)->i_parent_mutex);
 FUNC_14(&FUNC_10(VAR_8)->i_mutex);
 VAR_19 = -VAR_4;
 VAR_13 = FUNC_13(VAR_8, FUNC_10(VAR_8)->i_dno, (char *)VAR_10, VAR_11, &VAR_15, &VAR_12);
 if (!VAR_13)
  goto out;

 VAR_19 = -VAR_6;
 if (VAR_13->first)
  goto out1;

 VAR_19 = -VAR_3;
 if (VAR_13->directory)
  goto out1;

 VAR_16 = VAR_13->fnode;
 VAR_17 = FUNC_11(VAR_8, VAR_15, VAR_13, &VAR_12, 1);
 switch (VAR_17) {
 case 1:
  FUNC_9(VAR_8->i_sb, "there was error when removing dirent");
  VAR_19 = -VAR_2;
  break;
 case 2:

  VAR_19 = -VAR_5;
  if (VAR_18++)
   break;

  FUNC_15(&FUNC_10(VAR_8)->i_mutex);
  FUNC_15(&FUNC_10(VAR_14)->i_parent_mutex);
  FUNC_2(VAR_9);
  FUNC_18(&VAR_9->d_lock);
  if (FUNC_1(&VAR_9->d_count) > 1 ||
      FUNC_5(VAR_14, VAR_7, ((void*)0)) ||
      !FUNC_0(VAR_14->i_mode) ||
      FUNC_6(VAR_14)) {
   FUNC_19(&VAR_9->d_lock);
   FUNC_3(VAR_9);
  } else {
   struct iattr VAR_20;
   FUNC_19(&VAR_9->d_lock);

   VAR_20.ia_size = 0;
   VAR_20.ia_valid = VAR_1 | VAR_0;
   VAR_19 = FUNC_16(VAR_9, &VAR_20);
   FUNC_17(VAR_14);
   if (!VAR_19)
    goto again;
  }
  FUNC_20();
  return -VAR_5;
 default:
  FUNC_4(VAR_14);
  VAR_19 = 0;
 }
 goto out;

out1:
 FUNC_8(&VAR_12);
out:
 FUNC_15(&FUNC_10(VAR_8)->i_mutex);
 FUNC_15(&FUNC_10(VAR_14)->i_parent_mutex);
 FUNC_20();
 return VAR_19;
}
