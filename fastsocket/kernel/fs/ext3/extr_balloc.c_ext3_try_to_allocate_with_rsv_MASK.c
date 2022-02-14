
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext3_reserve_window_node {unsigned long rsv_goal_size; int rsv_end; int rsv_start; unsigned long rsv_alloc_hit; int rsv_window; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;
typedef int ext3_grpblk_t ;
typedef int ext3_fsblk_t ;
struct TYPE_2__ {int s_rsv_window_root; } ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct super_block*) ;
 TYPE_1__* FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct ext3_reserve_window_node*,int,struct super_block*,unsigned int,struct buffer_head*) ;
 int FUNC_5 (struct super_block*,unsigned int) ;
 int FUNC_6 (int *,struct buffer_head*) ;
 int FUNC_7 (int *,struct buffer_head*) ;
 int FUNC_8 (int *,struct buffer_head*) ;
 int FUNC_9 (struct super_block*,int *,unsigned int,struct buffer_head*,int,unsigned long*,int *) ;
 int FUNC_10 (int *,int,unsigned int,struct super_block*) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (struct ext3_reserve_window_node*,struct super_block*,unsigned long) ;

__attribute__((used)) static ext3_grpblk_t
FUNC_14(struct super_block *VAR_0, handle_t *VAR_1,
   unsigned int VAR_2, struct buffer_head *VAR_3,
   ext3_grpblk_t VAR_4,
   struct ext3_reserve_window_node * VAR_5,
   unsigned long *VAR_6, int *VAR_7)
{
 ext3_fsblk_t VAR_8, VAR_9;
 ext3_grpblk_t VAR_10 = 0;
 int VAR_11;
 unsigned long VAR_12 = *VAR_6;

 *VAR_7 = 0;






 FUNC_0(VAR_3, "get undo access for new block");
 VAR_11 = FUNC_7(VAR_1, VAR_3);
 if (VAR_11) {
  *VAR_7 = VAR_11;
  return -1;
 }







 if (VAR_5 == ((void*)0) ) {
  VAR_10 = FUNC_9(VAR_0, VAR_1, VAR_2, VAR_3,
      VAR_4, VAR_6, ((void*)0));
  goto out;
 }






 VAR_8 = FUNC_5(VAR_0, VAR_2);
 VAR_9 = VAR_8 + (FUNC_2(VAR_0) - 1);
 while (1) {
  if (FUNC_11(&VAR_5->rsv_window) || (VAR_10 < 0) ||
   !FUNC_10(&VAR_5->rsv_window,
      VAR_4, VAR_2, VAR_0)) {
   if (VAR_5->rsv_goal_size < *VAR_6)
    VAR_5->rsv_goal_size = *VAR_6;
   VAR_10 = FUNC_4(VAR_5, VAR_4, VAR_0,
       VAR_2, VAR_3);
   if (VAR_10 < 0)
    break;

   if (!FUNC_10(&VAR_5->rsv_window,
       VAR_4, VAR_2, VAR_0))
    VAR_4 = -1;
  } else if (VAR_4 >= 0) {
   int VAR_13 = VAR_5->rsv_end -
     (VAR_4 + VAR_8) + 1;

   if (VAR_13 < *VAR_6)
    FUNC_13(VAR_5, VAR_0,
       *VAR_6 - VAR_13);
  }

  if ((VAR_5->rsv_start > VAR_9) ||
    (VAR_5->rsv_end < VAR_8)) {
   FUNC_12(&FUNC_3(VAR_0)->s_rsv_window_root, 1);
   FUNC_1();
  }
  VAR_10 = FUNC_9(VAR_0, VAR_1, VAR_2, VAR_3,
        VAR_4, &VAR_12, &VAR_5->rsv_window);
  if (VAR_10 >= 0) {
   VAR_5->rsv_alloc_hit += VAR_12;
   *VAR_6 = VAR_12;
   break;
  }
  VAR_12 = *VAR_6;
 }
out:
 if (VAR_10 >= 0) {
  FUNC_0(VAR_3, "journal_dirty_metadata for "
     "bitmap block");
  VAR_11 = FUNC_6(VAR_1, VAR_3);
  if (VAR_11) {
   *VAR_7 = VAR_11;
   return -1;
  }
  return VAR_10;
 }

 FUNC_0(VAR_3, "journal_release_buffer");
 FUNC_8(VAR_1, VAR_3);
 return VAR_10;
}
