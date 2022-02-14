
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct buffer_head {scalar_t__ b_blocknr; scalar_t__ b_data; } ;
typedef unsigned int ext4_group_t ;
typedef scalar_t__ ext4_fsblk_t ;
typedef int __le32 ;
struct TYPE_2__ {unsigned int s_groups_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct super_block*) ;
 unsigned int FUNC_1 (struct super_block*) ;
 TYPE_1__* FUNC_2 (struct super_block*) ;
 unsigned int FUNC_3 (struct super_block*,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_4 (struct super_block*,char*,scalar_t__ const,unsigned int,scalar_t__ const) ;
 scalar_t__ const FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct super_block *VAR_2,
          struct buffer_head *VAR_3)
{
 const ext4_fsblk_t VAR_4 = VAR_3->b_blocknr;
 const ext4_group_t VAR_5 = FUNC_2(VAR_2)->s_groups_count;
 unsigned VAR_6 = 1;
 unsigned VAR_7 = 5;
 unsigned VAR_8 = 7;
 unsigned VAR_9;
 __le32 *VAR_10 = (__le32 *)VAR_3->b_data;
 int VAR_11 = 0;

 while ((VAR_9 = FUNC_3(VAR_2, &VAR_6, &VAR_7, &VAR_8)) < VAR_5) {
  if (FUNC_5(*VAR_10++) !=
      VAR_9 * FUNC_1(VAR_2) + VAR_4){
   FUNC_4(VAR_2, "reserved GDT %llu"
         " missing grp %d (%llu)",
         VAR_4, VAR_9,
         VAR_9 *
         (ext4_fsblk_t)FUNC_1(VAR_2) +
         VAR_4);
   return -VAR_1;
  }
  if (++VAR_11 > FUNC_0(VAR_2))
   return -VAR_0;
 }

 return VAR_11;
}
