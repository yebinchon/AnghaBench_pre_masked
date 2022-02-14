
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct ext4_sb_info {int dummy; } ;
struct ext4_inode_info {unsigned long i_reserved_meta_blocks; int i_block_reservation_lock; int i_reserved_data_blocks; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ext4_inode_info* FUNC_0 (struct inode*) ;
 struct ext4_sb_info* FUNC_1 (int ) ;
 unsigned long FUNC_2 (struct inode*,int ) ;
 scalar_t__ FUNC_3 (struct ext4_sb_info*,unsigned long,int ) ;
 scalar_t__ FUNC_4 (int ,int*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct inode*,int) ;
 scalar_t__ FUNC_8 (struct inode*,int) ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_2, sector_t VAR_3)
{
 int VAR_4 = 0;
 struct ext4_sb_info *VAR_5 = FUNC_1(VAR_2->i_sb);
 struct ext4_inode_info *VAR_6 = FUNC_0(VAR_2);
 unsigned long VAR_7;






repeat:
 FUNC_5(&VAR_6->i_block_reservation_lock);
 VAR_7 = FUNC_2(VAR_2, VAR_3);
 FUNC_6(&VAR_6->i_block_reservation_lock);






 if (FUNC_8(VAR_2, 1))
  return -VAR_0;





 if (FUNC_3(VAR_5, VAR_7 + 1, 0)) {
  FUNC_7(VAR_2, 1);
  if (FUNC_4(VAR_2->i_sb, &VAR_4)) {
   FUNC_9();
   goto repeat;
  }
  return -VAR_1;
 }
 FUNC_5(&VAR_6->i_block_reservation_lock);
 VAR_6->i_reserved_data_blocks++;
 VAR_6->i_reserved_meta_blocks += VAR_7;
 FUNC_6(&VAR_6->i_block_reservation_lock);

 return 0;
}
