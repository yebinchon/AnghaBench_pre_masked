
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tid_t ;
struct super_block {int dummy; } ;
struct jfs_superblock {int s_flag; } ;
struct inode {int i_size; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int s64 ;
struct TYPE_2__ {int mntflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (struct super_block*,int ,int) ;
 int FUNC_5 (struct inode*,scalar_t__) ;
 int FUNC_6 (struct buffer_head*) ;
 scalar_t__ FUNC_7 (struct super_block*,struct buffer_head**) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (struct super_block*,int ) ;
 int FUNC_11 (int ,int,struct inode**,int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ,struct inode*,int ,int ,int,int *,int ) ;

__attribute__((used)) static void FUNC_14(struct super_block *VAR_4, s64 VAR_5,
       int VAR_6, s64 *VAR_7)
{
 struct jfs_superblock *VAR_8;
 struct buffer_head *VAR_9;
 struct inode *VAR_10;
 tid_t VAR_11;


 if (FUNC_0(VAR_4)->mntflag & VAR_2)
  return;
 VAR_10 = FUNC_4(VAR_4, VAR_1, 1);
 if (VAR_10 == ((void*)0)) {
  FUNC_0(VAR_4)->mntflag |= VAR_2;
  if (FUNC_7(VAR_4, &VAR_9))
   return;
  VAR_8 = (struct jfs_superblock *)VAR_9->b_data;
  VAR_8->s_flag |= FUNC_2(VAR_2);

  FUNC_6(VAR_9);
  FUNC_8(VAR_9);
  FUNC_1(VAR_9);
  return;
 }


 VAR_11 = FUNC_10(VAR_4, VAR_0);

 if (FUNC_13(VAR_11, VAR_10, 0, VAR_5, VAR_6, VAR_7, 0)) {
  FUNC_0(VAR_4)->mntflag |= VAR_2;
  FUNC_9(VAR_11, 1);
  goto cleanup;

 }

 VAR_10->i_size += VAR_3;
 FUNC_5(VAR_10, VAR_3);
 FUNC_11(VAR_11, 1, &VAR_10, VAR_0);
      cleanup:
 FUNC_12(VAR_11);
 FUNC_3(VAR_10);
}
