
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_free_extent {scalar_t__ fe_len; scalar_t__ fe_start; } ;
struct ext4_buddy {int dummy; } ;
struct ext4_allocation_context {scalar_t__ ac_status; int ac_flags; int ac_found; int ac_sb; struct ext4_free_extent ac_g_ex; struct ext4_free_extent ac_b_ex; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct ext4_allocation_context*,struct ext4_buddy*,int ) ;
 int FUNC_3 (struct ext4_allocation_context*,struct ext4_buddy*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct ext4_allocation_context *VAR_2,
     struct ext4_free_extent *VAR_3,
     struct ext4_buddy *VAR_4)
{
 struct ext4_free_extent *VAR_5 = &VAR_2->ac_b_ex;
 struct ext4_free_extent *VAR_6 = &VAR_2->ac_g_ex;

 FUNC_0(VAR_3->fe_len <= 0);
 FUNC_0(VAR_3->fe_len > FUNC_1(VAR_2->ac_sb));
 FUNC_0(VAR_3->fe_start >= FUNC_1(VAR_2->ac_sb));
 FUNC_0(VAR_2->ac_status != VAR_0);

 VAR_2->ac_found++;




 if (FUNC_4(VAR_2->ac_flags & VAR_1)) {
  *VAR_5 = *VAR_3;
  FUNC_3(VAR_2, VAR_4);
  return;
 }




 if (VAR_3->fe_len == VAR_6->fe_len) {
  *VAR_5 = *VAR_3;
  FUNC_3(VAR_2, VAR_4);
  return;
 }




 if (VAR_5->fe_len == 0) {
  *VAR_5 = *VAR_3;
  return;
 }




 if (VAR_5->fe_len < VAR_6->fe_len) {


  if (VAR_3->fe_len > VAR_5->fe_len)
   *VAR_5 = *VAR_3;
 } else if (VAR_3->fe_len > VAR_6->fe_len) {



  if (VAR_3->fe_len < VAR_5->fe_len)
   *VAR_5 = *VAR_3;
 }

 FUNC_2(VAR_2, VAR_4, 0);
}
