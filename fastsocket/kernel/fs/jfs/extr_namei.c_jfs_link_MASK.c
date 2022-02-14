
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tid_t ;
struct inode {scalar_t__ i_nlink; int i_count; void* i_mtime; void* i_ctime; int i_ino; int i_sb; } ;
struct TYPE_3__ {int name; } ;
struct dentry {TYPE_1__ d_name; struct inode* d_inode; } ;
struct component_name {int dummy; } ;
struct btstack {int dummy; } ;
typedef int ino_t ;
struct TYPE_4__ {int commit_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 int FUNC_3 (int ,struct inode*,struct component_name*,int *,struct btstack*) ;
 int FUNC_4 (struct inode*,struct component_name*,int *,struct btstack*,int ) ;
 int FUNC_5 (struct component_name*) ;
 int FUNC_6 (struct component_name*,struct dentry*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (char*,int,...) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int,struct inode**,int ) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct dentry *VAR_7,
      struct inode *VAR_8, struct dentry *VAR_9)
{
 int VAR_10;
 tid_t VAR_11;
 struct inode *VAR_12 = VAR_7->d_inode;
 ino_t VAR_13;
 struct component_name VAR_14;
 struct btstack VAR_15;
 struct inode *VAR_16[2];

 FUNC_9("jfs_link: %s %s", VAR_7->d_name.name,
   VAR_9->d_name.name);

 if (VAR_12->i_nlink == VAR_6)
  return -VAR_3;

 if (VAR_12->i_nlink == 0)
  return -VAR_4;

 VAR_11 = FUNC_13(VAR_12->i_sb, 0);

 FUNC_11(&FUNC_0(VAR_8)->commit_mutex, VAR_1);
 FUNC_11(&FUNC_0(VAR_12)->commit_mutex, VAR_0);




 if ((VAR_10 = FUNC_6(&VAR_14, VAR_9)))
  goto out;

 if ((VAR_10 = FUNC_4(VAR_8, &VAR_14, &VAR_13, &VAR_15, VAR_5)))
  goto free_dname;




 VAR_13 = VAR_12->i_ino;
 if ((VAR_10 = FUNC_3(VAR_11, VAR_8, &VAR_14, &VAR_13, &VAR_15)))
  goto free_dname;


 FUNC_7(VAR_12);
 VAR_12->i_ctime = VAR_2;
 VAR_8->i_ctime = VAR_8->i_mtime = VAR_2;
 FUNC_10(VAR_8);
 FUNC_1(&VAR_12->i_count);

 VAR_16[0] = VAR_12;
 VAR_16[1] = VAR_8;
 VAR_10 = FUNC_14(VAR_11, 2, &VAR_16[0], 0);

 if (VAR_10) {
  VAR_12->i_nlink--;
  FUNC_8(VAR_12);
 } else
  FUNC_2(VAR_9, VAR_12);

      free_dname:
 FUNC_5(&VAR_14);

      out:
 FUNC_15(VAR_11);

 FUNC_12(&FUNC_0(VAR_12)->commit_mutex);
 FUNC_12(&FUNC_0(VAR_8)->commit_mutex);

 FUNC_9("jfs_link: rc:%d", VAR_10);
 return VAR_10;
}
