
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ext4_sb_info {scalar_t__ s_mb_last_group; int s_md_lock; int s_mb_last_start; } ;
struct ext4_buddy {scalar_t__ bd_group; int bd_buddy_page; int bd_bitmap_page; } ;
struct TYPE_4__ {scalar_t__ fe_group; int fe_start; int fe_logical; int fe_len; } ;
struct TYPE_3__ {int fe_logical; int fe_len; } ;
struct ext4_allocation_context {scalar_t__ ac_status; int ac_tail; int ac_buddy; int ac_flags; TYPE_2__ ac_f_ex; int ac_buddy_page; int ac_bitmap_page; TYPE_2__ ac_b_ex; TYPE_1__ ac_g_ex; int ac_sb; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 struct ext4_sb_info* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ext4_buddy*,TYPE_2__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ext4_allocation_context *VAR_2,
     struct ext4_buddy *VAR_3)
{
 struct ext4_sb_info *VAR_4 = FUNC_1(VAR_2->ac_sb);
 int VAR_5;

 FUNC_0(VAR_2->ac_b_ex.fe_group != VAR_3->bd_group);
 FUNC_0(VAR_2->ac_status == VAR_0);

 VAR_2->ac_b_ex.fe_len = FUNC_4(VAR_2->ac_b_ex.fe_len, VAR_2->ac_g_ex.fe_len);
 VAR_2->ac_b_ex.fe_logical = VAR_2->ac_g_ex.fe_logical;
 VAR_5 = FUNC_3(VAR_3, &VAR_2->ac_b_ex);



 VAR_2->ac_f_ex = VAR_2->ac_b_ex;

 VAR_2->ac_status = VAR_0;
 VAR_2->ac_tail = VAR_5 & 0xffff;
 VAR_2->ac_buddy = VAR_5 >> 16;
 VAR_2->ac_bitmap_page = VAR_3->bd_bitmap_page;
 FUNC_2(VAR_2->ac_bitmap_page);
 VAR_2->ac_buddy_page = VAR_3->bd_buddy_page;
 FUNC_2(VAR_2->ac_buddy_page);

 if (VAR_2->ac_flags & VAR_1) {
  FUNC_5(&VAR_4->s_md_lock);
  VAR_4->s_mb_last_group = VAR_2->ac_f_ex.fe_group;
  VAR_4->s_mb_last_start = VAR_2->ac_f_ex.fe_start;
  FUNC_6(&VAR_4->s_md_lock);
 }
}
