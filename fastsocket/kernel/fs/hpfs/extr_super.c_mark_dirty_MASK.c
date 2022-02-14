
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_flags; } ;
struct hpfs_spare_block {int dirty; scalar_t__ old_wrote; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {scalar_t__ sb_chkdsk; } ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 struct hpfs_spare_block* FUNC_1 (struct super_block*,int,struct buffer_head**,int ) ;
 TYPE_1__* FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct buffer_head*) ;

__attribute__((used)) static void FUNC_4(struct super_block *VAR_1)
{
 if (FUNC_2(VAR_1)->sb_chkdsk && !(VAR_1->s_flags & VAR_0)) {
  struct buffer_head *VAR_2;
  struct hpfs_spare_block *VAR_3;
  if ((VAR_3 = FUNC_1(VAR_1, 17, &VAR_2, 0))) {
   VAR_3->dirty = 1;
   VAR_3->old_wrote = 0;
   FUNC_3(VAR_2);
   FUNC_0(VAR_2);
  }
 }
}
