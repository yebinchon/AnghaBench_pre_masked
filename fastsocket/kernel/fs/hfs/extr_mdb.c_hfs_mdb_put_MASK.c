
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int * s_fs_info; } ;
struct TYPE_3__ {scalar_t__ bitmap; int nls_disk; int nls_io; int alt_mdb_bh; int mdb_bh; int cat_tree; int ext_tree; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned long,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct super_block *VAR_1)
{
 if (!FUNC_0(VAR_1))
  return;

 FUNC_3(FUNC_0(VAR_1)->ext_tree);
 FUNC_3(FUNC_0(VAR_1)->cat_tree);


 FUNC_1(FUNC_0(VAR_1)->mdb_bh);
 FUNC_1(FUNC_0(VAR_1)->alt_mdb_bh);

 FUNC_5(FUNC_0(VAR_1)->nls_io);
 FUNC_5(FUNC_0(VAR_1)->nls_disk);

 FUNC_2((unsigned long)FUNC_0(VAR_1)->bitmap, VAR_0 < 8192 ? 1 : 0);
 FUNC_4(FUNC_0(VAR_1));
 VAR_1->s_fs_info = ((void*)0);
}
