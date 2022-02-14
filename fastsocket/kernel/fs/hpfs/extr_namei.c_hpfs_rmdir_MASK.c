
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct quad_buffer_head {int dummy; } ;
struct inode {int i_sb; } ;
struct hpfs_dirent {int fnode; int directory; scalar_t__ first; } ;
struct TYPE_3__ {char* name; unsigned int len; } ;
struct dentry {struct inode* d_inode; TYPE_1__ d_name; } ;
typedef int fnode_secno ;
typedef int dnode_secno ;
struct TYPE_4__ {int i_parent_mutex; int i_mutex; int i_dno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (char*,unsigned int*) ;
 int FUNC_3 (struct quad_buffer_head*) ;
 int FUNC_4 (int ,int ,int *,int *,int*) ;
 int FUNC_5 (int ,char*) ;
 TYPE_2__* FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*,int ,struct hpfs_dirent*,struct quad_buffer_head*,int) ;
 int FUNC_8 () ;
 struct hpfs_dirent* FUNC_9 (struct inode*,int ,char*,unsigned int,int *,struct quad_buffer_head*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 () ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_6, struct dentry *VAR_7)
{
 const char *VAR_8 = VAR_7->d_name.name;
 unsigned VAR_9 = VAR_7->d_name.len;
 struct quad_buffer_head VAR_10;
 struct hpfs_dirent *VAR_11;
 struct inode *VAR_12 = VAR_7->d_inode;
 dnode_secno VAR_13;
 fnode_secno VAR_14;
 int VAR_15 = 0;
 int VAR_16;
 int VAR_17;

 FUNC_2((char *)VAR_8, &VAR_9);
 FUNC_8();
 FUNC_10(&FUNC_6(VAR_12)->i_parent_mutex);
 FUNC_10(&FUNC_6(VAR_6)->i_mutex);
 VAR_16 = -VAR_1;
 VAR_11 = FUNC_9(VAR_6, FUNC_6(VAR_6)->i_dno, (char *)VAR_8, VAR_9, &VAR_13, &VAR_10);
 if (!VAR_11)
  goto out;

 VAR_16 = -VAR_5;
 if (VAR_11->first)
  goto out1;

 VAR_16 = -VAR_3;
 if (!VAR_11->directory)
  goto out1;

 FUNC_4(VAR_6->i_sb, FUNC_6(VAR_12)->i_dno, ((void*)0), ((void*)0), &VAR_15);
 VAR_16 = -VAR_4;
 if (VAR_15)
  goto out1;

 VAR_14 = VAR_11->fnode;
 VAR_17 = FUNC_7(VAR_6, VAR_13, VAR_11, &VAR_10, 1);
 switch (VAR_17) {
 case 1:
  FUNC_5(VAR_6->i_sb, "there was error when removing dirent");
  VAR_16 = -VAR_0;
  break;
 case 2:
  VAR_16 = -VAR_2;
  break;
 default:
  FUNC_1(VAR_6);
  FUNC_0(VAR_12);
  VAR_16 = 0;
 }
 goto out;
out1:
 FUNC_3(&VAR_10);
out:
 FUNC_11(&FUNC_6(VAR_6)->i_mutex);
 FUNC_11(&FUNC_6(VAR_12)->i_parent_mutex);
 FUNC_12();
 return VAR_16;
}
