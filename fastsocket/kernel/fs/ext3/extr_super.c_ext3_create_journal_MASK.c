
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_flags; } ;
struct ext3_super_block {int s_journal_inum; } ;
typedef int journal_t ;
struct TYPE_2__ {int * s_journal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,int ) ;
 int FUNC_2 (struct super_block*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct super_block*,struct ext3_super_block*,int) ;
 int * FUNC_5 (struct super_block*,unsigned int) ;
 int FUNC_6 (struct super_block*,int ,char*,...) ;
 int FUNC_7 (struct super_block*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct super_block *VAR_8,
          struct ext3_super_block *VAR_9,
          unsigned int VAR_10)
{
 journal_t *VAR_11;
 int VAR_12;

 if (VAR_8->s_flags & VAR_7) {
  FUNC_6(VAR_8, VAR_5,
   "error: readonly filesystem when trying to "
   "create journal");
  return -VAR_2;
 }

 VAR_11 = FUNC_5(VAR_8, VAR_10);
 if (!VAR_11)
  return -VAR_0;

 FUNC_6(VAR_8, VAR_6, "creating new journal on inode %u",
        VAR_10);

 VAR_12 = FUNC_8(VAR_11);
 if (VAR_12) {
  FUNC_6(VAR_8, VAR_5, "error creating journal");
  FUNC_9(VAR_11);
  return -VAR_1;
 }

 FUNC_0(VAR_8)->s_journal = VAR_11;

 FUNC_7(VAR_8);
 FUNC_2(VAR_8, VAR_4);
 FUNC_1(VAR_8, VAR_3);

 VAR_9->s_journal_inum = FUNC_3(VAR_10);


 FUNC_4(VAR_8, VAR_9, 1);

 return 0;
}
