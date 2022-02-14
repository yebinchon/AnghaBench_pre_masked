
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct nameidata {int dummy; } ;
struct inode {int i_mode; scalar_t__ i_nlink; TYPE_2__* i_mapping; int * i_fop; int * i_op; int i_ino; struct super_block* i_sb; } ;
struct TYPE_4__ {int name; scalar_t__ len; } ;
struct dentry {TYPE_1__ d_name; } ;
struct TYPE_6__ {int s_flags; } ;
struct TYPE_5__ {int * a_ops; } ;


 TYPE_3__* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inode*,struct inode*,struct dentry*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct inode* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (char*,int ,int,int ,int) ;

int
FUNC_7(struct inode *VAR_7, struct dentry *VAR_8, int VAR_9, struct nameidata *VAR_10)
{
 struct super_block *VAR_11 = VAR_7->i_sb;
 struct inode *VAR_12;
 int VAR_13;

 FUNC_6("AFFS: create(%lu,\"%.*s\",0%o)\n",VAR_7->i_ino,(int)VAR_8->d_name.len,
   VAR_8->d_name.name,VAR_9);

 VAR_12 = FUNC_2(VAR_7);
 if (!VAR_12)
  return -VAR_0;

 VAR_12->i_mode = VAR_9;
 FUNC_5(VAR_12);
 FUNC_4(VAR_12);

 VAR_12->i_op = &VAR_5;
 VAR_12->i_fop = &VAR_6;
 VAR_12->i_mapping->a_ops = (FUNC_0(VAR_11)->s_flags & VAR_1) ? &VAR_4 : &VAR_3;
 VAR_13 = FUNC_1(VAR_7, VAR_12, VAR_8, VAR_2);
 if (VAR_13) {
  VAR_12->i_nlink = 0;
  FUNC_3(VAR_12);
  return VAR_13;
 }
 return 0;
}
