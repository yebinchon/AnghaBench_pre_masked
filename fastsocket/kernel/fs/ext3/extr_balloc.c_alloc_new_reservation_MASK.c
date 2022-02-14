
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct rb_root {int dummy; } ;
struct ext3_reserve_window_node {unsigned long rsv_goal_size; int rsv_start; int rsv_end; int rsv_alloc_hit; int rsv_window; } ;
struct buffer_head {int dummy; } ;
typedef int spinlock_t ;
typedef scalar_t__ ext3_grpblk_t ;
typedef int ext3_fsblk_t ;
struct TYPE_2__ {int s_rsv_window_lock; struct rb_root s_rsv_window_root; } ;


 int FUNC_0 (struct super_block*) ;
 unsigned long VAR_0 ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (int,struct buffer_head*,int) ;
 int FUNC_3 (struct super_block*,unsigned int) ;
 int FUNC_4 (struct ext3_reserve_window_node*,struct ext3_reserve_window_node*,struct super_block*,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct super_block*,struct ext3_reserve_window_node*) ;
 struct ext3_reserve_window_node* FUNC_7 (struct rb_root*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct super_block*,int) ;
 int FUNC_11 (struct super_block*,int,struct ext3_reserve_window_node*) ;

__attribute__((used)) static int FUNC_12(struct ext3_reserve_window_node *VAR_1,
  ext3_grpblk_t VAR_2, struct super_block *VAR_3,
  unsigned int VAR_4, struct buffer_head *VAR_5)
{
 struct ext3_reserve_window_node *VAR_6;
 ext3_fsblk_t VAR_7, VAR_8, VAR_9;
 ext3_grpblk_t VAR_10;
 struct rb_root *VAR_11 = &FUNC_1(VAR_3)->s_rsv_window_root;
 unsigned long VAR_12;
 int VAR_13;
 spinlock_t *VAR_14 = &FUNC_1(VAR_3)->s_rsv_window_lock;

 VAR_7 = FUNC_3(VAR_3, VAR_4);
 VAR_8 = VAR_7 + (FUNC_0(VAR_3) - 1);

 if (VAR_2 < 0)
  VAR_9 = VAR_7;
 else
  VAR_9 = VAR_2 + VAR_7;

 FUNC_10(VAR_3, VAR_9);
 VAR_12 = VAR_1->rsv_goal_size;

 if (!FUNC_5(&VAR_1->rsv_window)) {
  if ((VAR_1->rsv_start <= VAR_8) &&
    (VAR_1->rsv_end > VAR_8) &&
    (VAR_9 >= VAR_1->rsv_start))
   return -1;

  if ((VAR_1->rsv_alloc_hit >
       (VAR_1->rsv_end - VAR_1->rsv_start + 1) / 2)) {






   VAR_12 = VAR_12 * 2;
   if (VAR_12 > VAR_0)
    VAR_12 = VAR_0;
   VAR_1->rsv_goal_size= VAR_12;
  }
 }

 FUNC_8(VAR_14);



 VAR_6 = FUNC_7(VAR_11, VAR_9);
retry:
 VAR_13 = FUNC_4(VAR_6, VAR_1, VAR_3,
      VAR_9, VAR_8);

 if (VAR_13 == -1) {
  if (!FUNC_5(&VAR_1->rsv_window))
   FUNC_6(VAR_3, VAR_1);
  FUNC_9(VAR_14);
  return -1;
 }
 FUNC_9(VAR_14);
 VAR_10 = FUNC_2(
   VAR_1->rsv_start - VAR_7,
   VAR_5, VAR_8 - VAR_7 + 1);

 if (VAR_10 < 0) {




  FUNC_8(VAR_14);
  if (!FUNC_5(&VAR_1->rsv_window))
   FUNC_6(VAR_3, VAR_1);
  FUNC_9(VAR_14);
  return -1;
 }

 VAR_9 = VAR_10 + VAR_7;




 if (VAR_9 >= VAR_1->rsv_start &&
     VAR_9 <= VAR_1->rsv_end) {
  FUNC_11(VAR_3, VAR_9, VAR_1);
  return 0;
 }






 VAR_6 = VAR_1;
 FUNC_8(VAR_14);
 goto retry;
}
