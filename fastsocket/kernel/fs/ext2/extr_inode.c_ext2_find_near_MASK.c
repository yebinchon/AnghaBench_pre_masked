
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct ext2_inode_info {int i_block_group; scalar_t__* i_data; } ;
typedef int ext2_fsblk_t ;
typedef scalar_t__ __le32 ;
struct TYPE_7__ {int pid; } ;
struct TYPE_6__ {TYPE_1__* bh; scalar_t__* p; } ;
struct TYPE_5__ {int b_blocknr; scalar_t__ b_data; } ;
typedef TYPE_2__ Indirect ;


 int FUNC_0 (int ) ;
 struct ext2_inode_info* FUNC_1 (struct inode*) ;
 TYPE_4__* VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static ext2_fsblk_t FUNC_4(struct inode *VAR_1, Indirect *VAR_2)
{
 struct ext2_inode_info *VAR_3 = FUNC_1(VAR_1);
 __le32 *VAR_4 = VAR_2->bh ? (__le32 *) VAR_2->bh->b_data : VAR_3->i_data;
 __le32 *VAR_5;
 ext2_fsblk_t VAR_6;
 ext2_fsblk_t VAR_7;


 for (VAR_5 = VAR_2->p - 1; VAR_5 >= VAR_4; VAR_5--)
  if (*VAR_5)
   return FUNC_3(*VAR_5);


 if (VAR_2->bh)
  return VAR_2->bh->b_blocknr;





 VAR_6 = FUNC_2(VAR_1->i_sb, VAR_3->i_block_group);
 VAR_7 = (VAR_0->pid % 16) *
   (FUNC_0(VAR_1->i_sb) / 16);
 return VAR_6 + VAR_7;
}
