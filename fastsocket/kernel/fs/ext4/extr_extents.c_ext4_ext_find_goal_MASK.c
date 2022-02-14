
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct inode {int i_sb; int i_mode; } ;
struct ext4_inode_info {int i_block_group; } ;
struct ext4_extent {int ee_block; } ;
struct ext4_ext_path {int p_depth; TYPE_1__* p_bh; struct ext4_extent* p_ext; } ;
typedef scalar_t__ ext4_lblk_t ;
typedef int ext4_grpblk_t ;
typedef int ext4_group_t ;
typedef scalar_t__ ext4_fsblk_t ;
struct TYPE_9__ {int pid; } ;
struct TYPE_8__ {int s_first_data_block; } ;
struct TYPE_7__ {TYPE_3__* s_es; } ;
struct TYPE_6__ {scalar_t__ b_blocknr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 struct ext4_inode_info* FUNC_1 (struct inode*) ;
 TYPE_2__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_4__* VAR_2 ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (struct ext4_extent*) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;

__attribute__((used)) static ext4_fsblk_t FUNC_9(struct inode *VAR_3,
         struct ext4_ext_path *VAR_4,
         ext4_lblk_t VAR_5)
{
 struct ext4_inode_info *VAR_6 = FUNC_1(VAR_3);
 ext4_fsblk_t VAR_7;
 ext4_fsblk_t VAR_8;
 ext4_grpblk_t VAR_9;
 ext4_group_t VAR_10;
 int VAR_11 = FUNC_6(FUNC_2(VAR_3->i_sb));
 int VAR_12;

 if (VAR_4) {
  struct ext4_extent *VAR_13;
  VAR_12 = VAR_4->p_depth;


  VAR_13 = VAR_4[VAR_12].p_ext;
  if (VAR_13)
   return (FUNC_5(VAR_13) +
    (VAR_5 - FUNC_7(VAR_13->ee_block)));



  if (VAR_4[VAR_12].p_bh)
   return VAR_4[VAR_12].p_bh->b_blocknr;
 }


 VAR_10 = VAR_6->i_block_group;
 if (VAR_11 >= VAR_1) {
  VAR_10 &= ~(VAR_11-1);
  if (FUNC_3(VAR_3->i_mode))
   VAR_10++;
 }
 VAR_7 = (VAR_10 * FUNC_0(VAR_3->i_sb)) +
  FUNC_7(FUNC_2(VAR_3->i_sb)->s_es->s_first_data_block);
 VAR_8 = FUNC_4(FUNC_2(VAR_3->i_sb)->s_es) - 1;





 if (FUNC_8(VAR_3->i_sb, VAR_0))
  return VAR_7;

 if (VAR_7 + FUNC_0(VAR_3->i_sb) <= VAR_8)
  VAR_9 = (VAR_2->pid % 16) *
   (FUNC_0(VAR_3->i_sb) / 16);
 else
  VAR_9 = (VAR_2->pid % 16) * ((VAR_8 - VAR_7) / 16);
 return VAR_7 + VAR_9 + VAR_5;
}
