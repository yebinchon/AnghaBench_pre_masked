
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_flags; } ;
struct ext3_super_block {void* s_free_inodes_count; void* s_free_blocks_count; void* s_wtime; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {struct buffer_head* s_sbh; } ;


 int FUNC_0 (struct buffer_head*,char*) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct super_block*) ;
 int FUNC_6 (struct super_block*) ;
 int FUNC_7 (struct super_block*,int ,char*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_12(struct super_block *VAR_2,
          struct ext3_super_block *VAR_3,
          int VAR_4)
{
 struct buffer_head *VAR_5 = FUNC_1(VAR_2)->s_sbh;
 int VAR_6 = 0;

 if (!VAR_5)
  return VAR_6;

 if (FUNC_2(VAR_5)) {
  FUNC_7(VAR_2, VAR_0, "previous I/O error to "
         "superblock detected");
  FUNC_3(VAR_5);
  FUNC_10(VAR_5);
 }
 if (!(VAR_2->s_flags & VAR_1))
  VAR_3->s_wtime = FUNC_4(FUNC_8());
 VAR_3->s_free_blocks_count = FUNC_4(FUNC_5(VAR_2));
 VAR_3->s_free_inodes_count = FUNC_4(FUNC_6(VAR_2));
 FUNC_0(VAR_5, "marking dirty");
 FUNC_9(VAR_5);
 if (VAR_4) {
  VAR_6 = FUNC_11(VAR_5);
  if (FUNC_2(VAR_5)) {
   FUNC_7(VAR_2, VAR_0, "I/O error while writing "
          "superblock");
   FUNC_3(VAR_5);
   FUNC_10(VAR_5);
  }
 }
 return VAR_6;
}
