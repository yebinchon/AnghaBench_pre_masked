
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_blocks; int i_sb; int i_ino; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (struct buffer_head*,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct inode *VAR_1, sector_t VAR_2, struct buffer_head *VAR_3,
        int VAR_4)
{
 if (!VAR_4) {
  if (VAR_2 >= VAR_1->i_blocks)
   goto abort_toobig;

  VAR_2 = FUNC_0(VAR_1->i_sb, VAR_1->i_ino, VAR_2);
  if (VAR_2)
   FUNC_1(VAR_3, VAR_1->i_sb, VAR_2);
  return 0;
 }

 return -VAR_0;

abort_toobig:
 return 0;
}
