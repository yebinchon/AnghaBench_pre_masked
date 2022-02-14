
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct inode {scalar_t__ i_ino; int i_nlink; struct super_block* i_sb; } ;
struct dentry {scalar_t__ d_fsdata; struct inode* d_inode; } ;
struct buffer_head {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {int link_chain; int stype; int name; int parent; } ;


 TYPE_1__* FUNC_0 (struct super_block*,struct buffer_head*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;


 int FUNC_3 (struct buffer_head*,scalar_t__) ;
 struct buffer_head* FUNC_4 (struct super_block*,scalar_t__) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct dentry*,scalar_t__) ;
 int FUNC_7 (struct super_block*,scalar_t__) ;
 struct inode* FUNC_8 (struct super_block*,scalar_t__) ;
 int FUNC_9 (struct inode*,struct buffer_head*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*,struct buffer_head*) ;
 int FUNC_12 (struct inode*) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct buffer_head*,struct inode*) ;
 int FUNC_16 (int ,int ,int) ;
 int FUNC_17 (char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_18(struct dentry *VAR_2)
{
 struct inode *VAR_3, *VAR_4 = VAR_2->d_inode;
 struct super_block *VAR_5 = VAR_4->i_sb;
 struct buffer_head *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 u32 VAR_8, VAR_9;
 int VAR_10;

 FUNC_17("AFFS: remove_link(key=%ld)\n", VAR_4->i_ino);
 VAR_10 = -VAR_0;
 VAR_6 = FUNC_4(VAR_5, VAR_4->i_ino);
 if (!VAR_6)
  goto done;

 VAR_8 = (u32)(long)VAR_2->d_fsdata;
 if (VAR_4->i_ino == VAR_8) {



  VAR_8 = FUNC_13(FUNC_0(VAR_5, VAR_6)->link_chain);
  VAR_7 = FUNC_4(VAR_5, VAR_8);
  if (!VAR_7)
   goto done;

  VAR_3 = FUNC_8(VAR_5, FUNC_13(FUNC_0(VAR_5, VAR_7)->parent));
  if (FUNC_1(VAR_3)) {
   VAR_10 = FUNC_2(VAR_3);
   goto done;
  }

  FUNC_10(VAR_3);
  FUNC_6(VAR_2, VAR_8);
  VAR_10 = FUNC_11(VAR_3, VAR_7);
  if (VAR_10) {
   FUNC_12(VAR_3);
   goto done;
  }
  FUNC_15(VAR_7, VAR_4);

  FUNC_16(FUNC_0(VAR_5, VAR_6)->name, FUNC_0(VAR_5, VAR_7)->name, 32);
  VAR_10 = FUNC_9(VAR_3, VAR_6);
  if (VAR_10) {
   FUNC_12(VAR_3);
   goto done;
  }
  FUNC_15(VAR_6, VAR_4);

  FUNC_12(VAR_3);
  FUNC_14(VAR_3);
 } else {
  VAR_7 = FUNC_4(VAR_5, VAR_8);
  if (!VAR_7)
   goto done;
 }

 while ((VAR_9 = FUNC_13(FUNC_0(VAR_5, VAR_6)->link_chain)) != 0) {
  if (VAR_9 == VAR_8) {
   __be32 VAR_11 = FUNC_0(VAR_5, VAR_7)->link_chain;
   FUNC_0(VAR_5, VAR_6)->link_chain = VAR_11;
   FUNC_3(VAR_6, FUNC_13(VAR_11) - VAR_8);
   FUNC_15(VAR_6, VAR_4);
   VAR_10 = 0;

   switch (FUNC_13(FUNC_0(VAR_5, VAR_6)->stype)) {
   case 129:
   case 128:
    break;
   default:
    if (!FUNC_0(VAR_5, VAR_6)->link_chain)
     VAR_4->i_nlink = 1;
   }
   FUNC_7(VAR_5, VAR_8);
   goto done;
  }
  FUNC_5(VAR_6);
  VAR_6 = FUNC_4(VAR_5, VAR_9);
  if (!VAR_6)
   goto done;
 }
 VAR_10 = -VAR_1;
done:
 FUNC_5(VAR_7);
 FUNC_5(VAR_6);
 return VAR_10;
}
