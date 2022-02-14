
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct inode {int i_sb; int i_mode; } ;
struct ext4_inode_info {int i_block_group; scalar_t__* i_data; } ;
typedef int ext4_grpblk_t ;
typedef int ext4_group_t ;
typedef scalar_t__ ext4_fsblk_t ;
typedef scalar_t__ __le32 ;
struct TYPE_10__ {int pid; } ;
struct TYPE_9__ {int s_es; } ;
struct TYPE_8__ {TYPE_1__* bh; scalar_t__* p; } ;
struct TYPE_7__ {scalar_t__ b_blocknr; scalar_t__ b_data; } ;
typedef TYPE_2__ Indirect ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 struct ext4_inode_info* FUNC_1 (struct inode*) ;
 TYPE_3__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_5__* VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ,int ) ;

__attribute__((used)) static ext4_fsblk_t FUNC_9(struct inode *VAR_3, Indirect *VAR_4)
{
 struct ext4_inode_info *VAR_5 = FUNC_1(VAR_3);
 __le32 *VAR_6 = VAR_4->bh ? (__le32 *) VAR_4->bh->b_data : VAR_5->i_data;
 __le32 *VAR_7;
 ext4_fsblk_t VAR_8;
 ext4_fsblk_t VAR_9;
 ext4_grpblk_t VAR_10;
 ext4_group_t VAR_11;
 int VAR_12 = FUNC_5(FUNC_2(VAR_3->i_sb));


 for (VAR_7 = VAR_4->p - 1; VAR_7 >= VAR_6; VAR_7--) {
  if (*VAR_7)
   return FUNC_7(*VAR_7);
 }


 if (VAR_4->bh)
  return VAR_4->bh->b_blocknr;





 VAR_11 = VAR_5->i_block_group;
 if (VAR_12 >= VAR_1) {
  VAR_11 &= ~(VAR_12-1);
  if (FUNC_3(VAR_3->i_mode))
   VAR_11++;
 }
 VAR_8 = FUNC_6(VAR_3->i_sb, VAR_11);
 VAR_9 = FUNC_4(FUNC_2(VAR_3->i_sb)->s_es) - 1;





 if (FUNC_8(VAR_3->i_sb, VAR_0))
  return VAR_8;

 if (VAR_8 + FUNC_0(VAR_3->i_sb) <= VAR_9)
  VAR_10 = (VAR_2->pid % 16) *
   (FUNC_0(VAR_3->i_sb) / 16);
 else
  VAR_10 = (VAR_2->pid % 16) * ((VAR_9 - VAR_8) / 16);
 return VAR_8 + VAR_10;
}
