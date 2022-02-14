
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct inode {int i_ino; int i_nlink; int i_count; struct super_block* i_sb; } ;
struct TYPE_4__ {int name; scalar_t__ len; } ;
struct dentry {void* d_fsdata; TYPE_1__ d_name; } ;
struct buffer_head {int b_blocknr; } ;
typedef int s32 ;
typedef void* __be32 ;
struct TYPE_6__ {void* key; void* ptype; } ;
struct TYPE_5__ {void* link_chain; void* original; void* parent; void* stype; int name; } ;


 TYPE_3__* FUNC_0 (struct buffer_head*) ;
 TYPE_2__* FUNC_1 (struct super_block*,struct buffer_head*) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_2 (struct buffer_head*,scalar_t__) ;
 int FUNC_3 (struct inode*,int) ;
 struct buffer_head* FUNC_4 (struct super_block*,int) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (int ,struct dentry*) ;
 int FUNC_7 (struct super_block*,struct buffer_head*) ;
 int FUNC_8 (struct super_block*,int) ;
 struct buffer_head* FUNC_9 (struct super_block*,int) ;
 int FUNC_10 (struct inode*,struct buffer_head*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (void*) ;
 void* FUNC_17 (int) ;
 int FUNC_18 (struct dentry*,struct inode*) ;
 int FUNC_19 (struct buffer_head*,struct inode*) ;
 int FUNC_20 (char*,int,int,int,int ,int) ;

int
FUNC_21(struct inode *VAR_3, struct inode *VAR_4, struct dentry *VAR_5, s32 VAR_6)
{
 struct super_block *VAR_7 = VAR_3->i_sb;
 struct buffer_head *VAR_8 = ((void*)0);
 struct buffer_head *VAR_9 = ((void*)0);
 u32 VAR_10 = 0;
 int VAR_11;

 FUNC_20("AFFS: add_entry(dir=%u, inode=%u, \"%*s\", type=%d)\n", (u32)VAR_3->i_ino,
          (u32)VAR_4->i_ino, (int)VAR_5->d_name.len, VAR_5->d_name.name, VAR_6);

 VAR_11 = -VAR_0;
 VAR_9 = FUNC_4(VAR_7, VAR_4->i_ino);
 if (!VAR_9)
  goto done;

 FUNC_12(VAR_4);
 switch (VAR_6) {
 case 128:
 case 129:
  VAR_11 = -VAR_1;
  VAR_10 = FUNC_3(VAR_3, VAR_3->i_ino);
  if (!VAR_10)
   goto err;
  VAR_11 = -VAR_0;
  VAR_8 = VAR_9;
  VAR_9 = FUNC_9(VAR_7, VAR_10);
  if (!VAR_9)
   goto err;
  break;
 default:
  break;
 }

 FUNC_0(VAR_9)->ptype = FUNC_17(VAR_2);
 FUNC_0(VAR_9)->key = FUNC_17(VAR_9->b_blocknr);
 FUNC_6(FUNC_1(VAR_7, VAR_9)->name, VAR_5);
 FUNC_1(VAR_7, VAR_9)->stype = FUNC_17(VAR_6);
 FUNC_1(VAR_7, VAR_9)->parent = FUNC_17(VAR_3->i_ino);

 if (VAR_8) {
  __be32 VAR_12;
         VAR_12 = FUNC_1(VAR_7, VAR_8)->link_chain;
  FUNC_1(VAR_7, VAR_9)->original = FUNC_17(VAR_4->i_ino);
  FUNC_1(VAR_7, VAR_9)->link_chain = VAR_12;
  FUNC_1(VAR_7, VAR_8)->link_chain = FUNC_17(VAR_10);
  FUNC_2(VAR_8, VAR_10 - FUNC_16(VAR_12));
  FUNC_19(VAR_8, VAR_4);
  VAR_4->i_nlink = 2;
  FUNC_15(&VAR_4->i_count);
 }
 FUNC_7(VAR_7, VAR_9);
 FUNC_19(VAR_9, VAR_4);
 VAR_5->d_fsdata = (void *)(long)VAR_9->b_blocknr;

 FUNC_11(VAR_3);
 VAR_11 = FUNC_10(VAR_3, VAR_9);
 FUNC_19(VAR_9, VAR_4);
 FUNC_13(VAR_3);
 FUNC_14(VAR_4);

 FUNC_18(VAR_5, VAR_4);
done:
 FUNC_5(VAR_8);
 FUNC_5(VAR_9);
 return VAR_11;
err:
 if (VAR_10)
  FUNC_8(VAR_7, VAR_10);
 FUNC_14(VAR_4);
 goto done;
}
