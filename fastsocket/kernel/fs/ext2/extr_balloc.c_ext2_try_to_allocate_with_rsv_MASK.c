
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext2_reserve_window_node {unsigned long rsv_goal_size; int rsv_end; int rsv_start; unsigned long rsv_alloc_hit; int rsv_window; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ ext2_grpblk_t ;
typedef int ext2_fsblk_t ;
struct TYPE_2__ {int s_rsv_window_root; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct super_block*) ;
 TYPE_1__* FUNC_2 (struct super_block*) ;
 scalar_t__ FUNC_3 (struct ext2_reserve_window_node*,scalar_t__,struct super_block*,unsigned int,struct buffer_head*) ;
 int FUNC_4 (struct super_block*,unsigned int) ;
 scalar_t__ FUNC_5 (struct super_block*,unsigned int,struct buffer_head*,scalar_t__,unsigned long*,int *) ;
 int FUNC_6 (int *,scalar_t__,unsigned int,struct super_block*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (struct ext2_reserve_window_node*,struct super_block*,unsigned long) ;

__attribute__((used)) static ext2_grpblk_t
FUNC_10(struct super_block *VAR_0, unsigned int VAR_1,
   struct buffer_head *VAR_2, ext2_grpblk_t VAR_3,
   struct ext2_reserve_window_node * VAR_4,
   unsigned long *VAR_5)
{
 ext2_fsblk_t VAR_6, VAR_7;
 ext2_grpblk_t VAR_8 = 0;
 unsigned long VAR_9 = *VAR_5;







 if (VAR_4 == ((void*)0)) {
  return FUNC_5(VAR_0, VAR_1, VAR_2,
      VAR_3, VAR_5, ((void*)0));
 }






 VAR_6 = FUNC_4(VAR_0, VAR_1);
 VAR_7 = VAR_6 + (FUNC_1(VAR_0) - 1);
 while (1) {
  if (FUNC_7(&VAR_4->rsv_window) || (VAR_8 < 0) ||
   !FUNC_6(&VAR_4->rsv_window,
      VAR_3, VAR_1, VAR_0)) {
   if (VAR_4->rsv_goal_size < *VAR_5)
    VAR_4->rsv_goal_size = *VAR_5;
   VAR_8 = FUNC_3(VAR_4, VAR_3, VAR_0,
       VAR_1, VAR_2);
   if (VAR_8 < 0)
    break;

   if (!FUNC_6(&VAR_4->rsv_window,
       VAR_3, VAR_1, VAR_0))
    VAR_3 = -1;
  } else if (VAR_3 >= 0) {
   int VAR_10 = VAR_4->rsv_end -
     (VAR_3 + VAR_6) + 1;

   if (VAR_10 < *VAR_5)
    FUNC_9(VAR_4, VAR_0,
       *VAR_5 - VAR_10);
  }

  if ((VAR_4->rsv_start > VAR_7) ||
    (VAR_4->rsv_end < VAR_6)) {
   FUNC_8(&FUNC_2(VAR_0)->s_rsv_window_root, 1);
   FUNC_0();
  }
  VAR_8 = FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3,
        &VAR_9, &VAR_4->rsv_window);
  if (VAR_8 >= 0) {
   VAR_4->rsv_alloc_hit += VAR_9;
   *VAR_5 = VAR_9;
   break;
  }
  VAR_9 = *VAR_5;
 }
 return VAR_8;
}
