
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct writeback_control {scalar_t__ sync_mode; } ;
struct inode {int i_ino; int i_sb; } ;
struct ext4_iloc {TYPE_1__* bh; } ;
struct TYPE_8__ {scalar_t__ s_journal; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_6__ {scalar_t__ b_blocknr; } ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct inode*,struct ext4_iloc*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_2__* VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,int ,unsigned long long) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int,char*) ;
 int FUNC_9 (TYPE_1__*) ;

int FUNC_10(struct inode *VAR_4, struct writeback_control *VAR_5)
{
 int VAR_6;

 if (VAR_3->flags & VAR_1)
  return 0;

 if (FUNC_0(VAR_4->i_sb)->s_journal) {
  if (FUNC_7()) {
   FUNC_8(1, "called recursively, non-PF_MEMALLOC!\n");
   FUNC_4();
   return -VAR_0;
  }

  if (VAR_5->sync_mode != VAR_2)
   return 0;

  VAR_6 = FUNC_6(VAR_4->i_sb);
 } else {
  struct ext4_iloc VAR_7;

  VAR_6 = FUNC_1(VAR_4, &VAR_7, 0);
  if (VAR_6)
   return VAR_6;
  if (VAR_5->sync_mode == VAR_2)
   FUNC_9(VAR_7.bh);
  if (FUNC_2(VAR_7.bh) && !FUNC_3(VAR_7.bh)) {
   FUNC_5(VAR_4->i_sb, "IO error syncing inode, "
       "inode=%lu, block=%llu", VAR_4->i_ino,
       (unsigned long long)VAR_7.bh->b_blocknr);
   VAR_6 = -VAR_0;
  }
 }
 return VAR_6;
}
