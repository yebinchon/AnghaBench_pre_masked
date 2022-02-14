
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; scalar_t__ i_blocks; int i_ino; } ;
struct buffer_head {int dummy; } ;
typedef int sector_t ;
typedef int secno ;
struct TYPE_2__ {int mmu_private; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int,scalar_t__) ;
 int FUNC_2 (struct inode*,int) ;
 TYPE_1__* FUNC_3 (struct inode*) ;
 int FUNC_4 (int ,int ,int,scalar_t__) ;
 int FUNC_5 (struct buffer_head*,int ,int) ;
 int FUNC_6 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_2, sector_t VAR_3, struct buffer_head *VAR_4, int VAR_5)
{
 secno VAR_6;
 VAR_6 = FUNC_2(VAR_2, VAR_3);
 if (VAR_6) {
  FUNC_5(VAR_4, VAR_2->i_sb, VAR_6);
  return 0;
 }
 if (!VAR_5) return 0;
 if (VAR_3<<9 != FUNC_3(VAR_2)->mmu_private) {
  FUNC_0();
  return -VAR_0;
 }
 if ((VAR_6 = FUNC_1(VAR_2->i_sb, VAR_2->i_ino, 1, VAR_2->i_blocks - 1)) == -1) {
  FUNC_4(VAR_2->i_sb, VAR_2->i_ino, 1, VAR_2->i_blocks - 1);
  return -VAR_1;
 }
 VAR_2->i_blocks++;
 FUNC_3(VAR_2)->mmu_private += 512;
 FUNC_6(VAR_4);
 FUNC_5(VAR_4, VAR_2->i_sb, VAR_6);
 return 0;
}
