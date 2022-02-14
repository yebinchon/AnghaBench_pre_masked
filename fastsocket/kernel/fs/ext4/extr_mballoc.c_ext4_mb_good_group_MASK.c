
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ext4_group_info {unsigned int bb_free; unsigned int bb_fragments; int bb_largest_free_order; } ;
struct TYPE_2__ {unsigned int fe_len; } ;
struct ext4_allocation_context {int ac_flags; TYPE_1__ ac_g_ex; int ac_2order; int ac_sb; } ;
typedef int ext4_group_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct ext4_group_info*) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct ext4_group_info* FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct ext4_allocation_context *VAR_2,
    ext4_group_t VAR_3, int VAR_4)
{
 unsigned VAR_5, VAR_6;
 int VAR_7 = FUNC_4(FUNC_3(VAR_2->ac_sb));
 struct ext4_group_info *VAR_8 = FUNC_5(VAR_2->ac_sb, VAR_3);

 FUNC_1(VAR_4 < 0 || VAR_4 >= 4);


 if (FUNC_7(FUNC_2(VAR_8))) {
  int VAR_9 = FUNC_6(VAR_2->ac_sb, VAR_3);
  if (VAR_9)
   return 0;
 }

 VAR_5 = VAR_8->bb_free;
 VAR_6 = VAR_8->bb_fragments;
 if (VAR_5 == 0)
  return 0;
 if (VAR_6 == 0)
  return 0;

 switch (VAR_4) {
 case 0:
  FUNC_1(VAR_2->ac_2order == 0);

  if (VAR_8->bb_largest_free_order < VAR_2->ac_2order)
   return 0;


  if ((VAR_2->ac_flags & VAR_1) &&
      (VAR_7 >= VAR_0) &&
      ((VAR_3 % VAR_7) == 0))
   return 0;

  return 1;
 case 1:
  if ((VAR_5 / VAR_6) >= VAR_2->ac_g_ex.fe_len)
   return 1;
  break;
 case 2:
  if (VAR_5 >= VAR_2->ac_g_ex.fe_len)
   return 1;
  break;
 case 3:
  return 1;
 default:
  FUNC_0();
 }

 return 0;
}
