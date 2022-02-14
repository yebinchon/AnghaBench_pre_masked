
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct msdos_sb_info {int cluster_bits; } ;
struct inode {int i_blocks; int i_mode; struct super_block* i_sb; } ;
struct fat_entry {int dummy; } ;
typedef int llu ;
struct TYPE_2__ {int i_start; int i_logstart; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 struct msdos_sb_info* FUNC_2 (struct super_block*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,struct fat_entry*,int) ;
 int FUNC_6 (struct inode*,struct fat_entry*,int,int) ;
 int FUNC_7 (struct super_block*,char*,int,int ) ;
 int FUNC_8 (struct inode*,int ,int*,int*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct fat_entry*) ;
 int FUNC_11 (struct fat_entry*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*) ;

int FUNC_14(struct inode *VAR_1, int VAR_2, int VAR_3)
{
 struct super_block *VAR_4 = VAR_1->i_sb;
 struct msdos_sb_info *VAR_5 = FUNC_2(VAR_4);
 int VAR_6, VAR_7, VAR_8;





 VAR_8 = VAR_7 = 0;
 if (FUNC_1(VAR_1)->i_start) {
  int VAR_9, VAR_10;

  VAR_6 = FUNC_8(VAR_1, VAR_0, &VAR_9, &VAR_10);
  if (VAR_6 < 0)
   return VAR_6;
  VAR_7 = VAR_9 + 1;
  VAR_8 = VAR_10;
 }


 if (VAR_8) {
  struct fat_entry VAR_11;

  FUNC_11(&VAR_11);
  VAR_6 = FUNC_5(VAR_1, &VAR_11, VAR_8);
  if (VAR_6 >= 0) {
   int VAR_12 = FUNC_12(VAR_1);
   VAR_6 = FUNC_6(VAR_1, &VAR_11, VAR_2, VAR_12);
   FUNC_10(&VAR_11);
  }
  if (VAR_6 < 0)
   return VAR_6;

 } else {
  FUNC_1(VAR_1)->i_start = VAR_2;
  FUNC_1(VAR_1)->i_logstart = VAR_2;




  if (FUNC_3(VAR_1->i_mode) && FUNC_0(VAR_1)) {
   VAR_6 = FUNC_9(VAR_1);
   if (VAR_6)
    return VAR_6;
  } else
   FUNC_13(VAR_1);
 }
 if (VAR_7 != (VAR_1->i_blocks >> (VAR_5->cluster_bits - 9))) {
  FUNC_7(VAR_4, "clusters badly computed (%d != %llu)",
        VAR_7,
        (llu)(VAR_1->i_blocks >> (VAR_5->cluster_bits - 9)));
  FUNC_4(VAR_1);
 }
 VAR_1->i_blocks += VAR_3 << (VAR_5->cluster_bits - 9);

 return 0;
}
