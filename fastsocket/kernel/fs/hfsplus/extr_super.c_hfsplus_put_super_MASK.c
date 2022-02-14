
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_flags; int * s_fs_info; scalar_t__ s_dirt; } ;
struct hfsplus_vh {int attributes; int modify_date; } ;
struct TYPE_2__ {int nls; int s_vhbh; int hidden_dir; int alloc_file; int ext_tree; int cat_tree; struct hfsplus_vh* s_vhdr; } ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct super_block*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;

__attribute__((used)) static void FUNC_14(struct super_block *VAR_4)
{
 FUNC_3(VAR_0, "hfsplus_put_super\n");
 if (!VAR_4->s_fs_info)
  return;

 FUNC_9();

 if (VAR_4->s_dirt)
  FUNC_6(VAR_4);
 if (!(VAR_4->s_flags & VAR_3) && FUNC_0(VAR_4).s_vhdr) {
  struct hfsplus_vh *VAR_5 = FUNC_0(VAR_4).s_vhdr;

  VAR_5->modify_date = FUNC_5();
  VAR_5->attributes |= FUNC_2(VAR_2);
  VAR_5->attributes &= FUNC_2(~VAR_1);
  FUNC_10(FUNC_0(VAR_4).s_vhbh);
  FUNC_11(FUNC_0(VAR_4).s_vhbh);
 }

 FUNC_4(FUNC_0(VAR_4).cat_tree);
 FUNC_4(FUNC_0(VAR_4).ext_tree);
 FUNC_7(FUNC_0(VAR_4).alloc_file);
 FUNC_7(FUNC_0(VAR_4).hidden_dir);
 FUNC_1(FUNC_0(VAR_4).s_vhbh);
 FUNC_12(FUNC_0(VAR_4).nls);
 FUNC_8(VAR_4->s_fs_info);
 VAR_4->s_fs_info = ((void*)0);

 FUNC_13();
}
