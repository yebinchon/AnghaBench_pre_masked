
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct nameidata {int dummy; } ;
struct inode {int b_blocknr; struct super_block* i_sb; } ;
struct TYPE_4__ {int name; scalar_t__ len; } ;
struct dentry {int * d_op; void* d_fsdata; TYPE_1__ d_name; } ;
struct buffer_head {int b_blocknr; struct super_block* i_sb; } ;
struct TYPE_6__ {int s_flags; } ;
struct TYPE_5__ {int original; int stype; } ;


 TYPE_3__* FUNC_0 (struct super_block*) ;
 TYPE_2__* FUNC_1 (struct super_block*,struct inode*) ;
 struct dentry* FUNC_2 (struct inode*) ;
 struct dentry* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int VAR_0 ;

 int FUNC_6 (struct inode*) ;
 int VAR_1 ;
 struct inode* FUNC_7 (struct inode*,struct dentry*) ;
 struct inode* FUNC_8 (struct super_block*,int) ;
 int VAR_2 ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct dentry*,struct inode*) ;
 int FUNC_13 (char*,int,int ) ;

struct dentry *
FUNC_14(struct inode *VAR_3, struct dentry *VAR_4, struct nameidata *VAR_5)
{
 struct super_block *VAR_6 = VAR_3->i_sb;
 struct buffer_head *VAR_7;
 struct inode *VAR_8 = ((void*)0);

 FUNC_13("AFFS: lookup(\"%.*s\")\n",(int)VAR_4->d_name.len,VAR_4->d_name.name);

 FUNC_9(VAR_3);
 VAR_7 = FUNC_7(VAR_3, VAR_4);
 FUNC_10(VAR_3);
 if (FUNC_4(VAR_7))
  return FUNC_2(VAR_7);
 if (VAR_7) {
  u32 VAR_9 = VAR_7->b_blocknr;


  VAR_4->d_fsdata = (void *)(long)VAR_9;
  switch (FUNC_11(FUNC_1(VAR_6, VAR_7)->stype)) {


  case 128:
   VAR_9 = FUNC_11(FUNC_1(VAR_6, VAR_7)->original);
  }
  FUNC_6(VAR_7);
  VAR_8 = FUNC_8(VAR_6, VAR_9);
  if (FUNC_4(VAR_8))
   return FUNC_3(FUNC_5(VAR_8));
 }
 VAR_4->d_op = FUNC_0(VAR_6)->s_flags & VAR_0 ? &VAR_2 : &VAR_1;
 FUNC_12(VAR_4, VAR_8);
 return ((void*)0);
}
