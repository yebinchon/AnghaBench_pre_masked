
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct inode {int i_nlink; int i_ctime; int i_ino; struct super_block* i_sb; } ;
struct dentry {scalar_t__ d_fsdata; struct inode* d_inode; TYPE_1__* d_parent; } ;
struct buffer_head {int dummy; } ;
struct TYPE_4__ {int stype; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 TYPE_2__* FUNC_0 (struct super_block*,struct buffer_head*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 struct buffer_head* FUNC_1 (struct super_block*,int ) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,struct buffer_head*) ;
 int FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct buffer_head*,struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (char*,int ) ;

int
FUNC_14(struct dentry *VAR_3)
{
 struct super_block *VAR_4;
 struct inode *VAR_5, *VAR_6;
 struct buffer_head *VAR_7 = ((void*)0);
 int VAR_8;

 VAR_6 = VAR_3->d_parent->d_inode;
 VAR_4 = VAR_6->i_sb;

 VAR_8 = -VAR_2;
 VAR_5 = VAR_3->d_inode;
 if (!VAR_5)
  goto done;

 FUNC_13("AFFS: remove_header(key=%ld)\n", VAR_5->i_ino);
 VAR_8 = -VAR_1;
 VAR_7 = FUNC_1(VAR_4, (u32)(long)VAR_3->d_fsdata);
 if (!VAR_7)
  goto done;

 FUNC_5(VAR_5);
 FUNC_4(VAR_6);
 switch (FUNC_10(FUNC_0(VAR_4, VAR_7)->stype)) {
 case 128:




  FUNC_4(VAR_5);
  VAR_8 = FUNC_3(VAR_5);
  FUNC_8(VAR_5);
  if (VAR_8)
   goto done_unlock;
  break;
 default:
  break;
 }

 VAR_8 = FUNC_6(VAR_6, VAR_7);
 if (VAR_8)
  goto done_unlock;
 FUNC_11(VAR_7, VAR_5);

 FUNC_8(VAR_6);

 if (VAR_5->i_nlink > 1)
  VAR_8 = FUNC_7(VAR_3);
 else
  VAR_5->i_nlink = 0;
 FUNC_9(VAR_5);
 VAR_5->i_ctime = VAR_0;
 FUNC_12(VAR_5);

done:
 FUNC_2(VAR_7);
 return VAR_8;

done_unlock:
 FUNC_8(VAR_6);
 FUNC_9(VAR_5);
 goto done;
}
