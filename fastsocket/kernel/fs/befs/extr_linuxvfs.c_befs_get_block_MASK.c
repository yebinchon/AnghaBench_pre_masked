
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ulong ;
struct super_block {int dummy; } ;
struct inode {int i_ino; struct super_block* i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int sector_t ;
typedef int befs_data_stream ;
typedef int befs_block_run ;
struct TYPE_3__ {int ds; } ;
struct TYPE_4__ {TYPE_1__ i_data; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct super_block*,char*,int ,int ,...) ;
 int FUNC_2 (struct super_block*,char*,int ,int ) ;
 int FUNC_3 (struct super_block*,int *,int ,int *) ;
 scalar_t__ FUNC_4 (struct super_block*,int *) ;
 int FUNC_5 (struct buffer_head*,struct super_block*,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct inode *VAR_5, sector_t VAR_6,
        struct buffer_head *VAR_7, int VAR_8)
{
 struct super_block *VAR_9 = VAR_5->i_sb;
 befs_data_stream *VAR_10 = &FUNC_0(VAR_5)->i_data.ds;
 befs_block_run VAR_11 = VAR_0;
 int VAR_12 = 0;
 ulong VAR_13;

 FUNC_1(VAR_9, "---> befs_get_block() for inode %lu, block %ld",
     VAR_5->i_ino, VAR_6);

 if (VAR_6 < 0) {
  FUNC_2(VAR_9, "befs_get_block() was asked for a block "
      "number less than zero: block %ld in inode %lu",
      VAR_6, VAR_5->i_ino);
  return -VAR_3;
 }

 if (VAR_8) {
  FUNC_2(VAR_9, "befs_get_block() was asked to write to "
      "block %ld in inode %lu", VAR_6, VAR_5->i_ino);
  return -VAR_4;
 }

 VAR_12 = FUNC_3(VAR_9, VAR_10, VAR_6, &VAR_11);
 if (VAR_12 != VAR_1) {
  FUNC_2(VAR_9,
      "<--- befs_get_block() for inode %lu, block "
      "%ld ERROR", VAR_5->i_ino, VAR_6);
  return -VAR_2;
 }

 VAR_13 = (ulong) FUNC_4(VAR_9, &VAR_11);

 FUNC_5(VAR_7, VAR_5->i_sb, VAR_13);

 FUNC_1(VAR_9, "<--- befs_get_block() for inode %lu, block %ld, "
     "disk address %lu", VAR_5->i_ino, VAR_6, VAR_13);

 return 0;
}
