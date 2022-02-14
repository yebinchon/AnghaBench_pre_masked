
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ino; int i_sb; } ;
struct ext4_sb_info {int s_dirtyblocks_counter; } ;
struct ext4_inode_info {int i_reserved_data_blocks; int i_reserved_meta_blocks; int i_block_reservation_lock; scalar_t__ i_da_metadata_calc_len; } ;


 struct ext4_inode_info* FUNC_0 (struct inode*) ;
 struct ext4_sb_info* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,char*,int ,int,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct inode*,int) ;

__attribute__((used)) static void FUNC_9(struct inode *VAR_1, int VAR_2)
{
 struct ext4_sb_info *VAR_3 = FUNC_1(VAR_1->i_sb);
 struct ext4_inode_info *VAR_4 = FUNC_0(VAR_1);

 if (!VAR_2)
  return;

 FUNC_5(&FUNC_0(VAR_1)->i_block_reservation_lock);

 if (FUNC_7(VAR_2 > VAR_4->i_reserved_data_blocks)) {






  FUNC_3(VAR_1->i_sb, VAR_0, "ext4_da_release_space: "
    "ino %lu, to_free %d with only %d reserved "
    "data blocks\n", VAR_1->i_ino, VAR_2,
    VAR_4->i_reserved_data_blocks);
  FUNC_2(1);
  VAR_2 = VAR_4->i_reserved_data_blocks;
 }
 VAR_4->i_reserved_data_blocks -= VAR_2;

 if (VAR_4->i_reserved_data_blocks == 0) {





  FUNC_4(&VAR_3->s_dirtyblocks_counter,
       VAR_4->i_reserved_meta_blocks);
  VAR_4->i_reserved_meta_blocks = 0;
  VAR_4->i_da_metadata_calc_len = 0;
 }


 FUNC_4(&VAR_3->s_dirtyblocks_counter, VAR_2);

 FUNC_6(&FUNC_0(VAR_1)->i_block_reservation_lock);

 FUNC_8(VAR_1, VAR_2);
}
