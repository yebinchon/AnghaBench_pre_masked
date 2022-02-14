
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_nlink; int i_ino; } ;
struct TYPE_2__ {int i_ext_last; int * i_ext_bh; int * i_ac; int * i_lc; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (char*,...) ;

void
FUNC_5(struct inode *VAR_0)
{
 unsigned long VAR_1;

 FUNC_4("AFFS: clear_inode(ino=%lu, nlink=%u)\n", VAR_0->i_ino, VAR_0->i_nlink);

 FUNC_2(VAR_0);
 VAR_1 = (unsigned long)FUNC_0(VAR_0)->i_lc;
 if (VAR_1) {
  FUNC_4("AFFS: freeing ext cache\n");
  FUNC_0(VAR_0)->i_lc = ((void*)0);
  FUNC_0(VAR_0)->i_ac = ((void*)0);
  FUNC_3(VAR_1);
 }
 FUNC_1(FUNC_0(VAR_0)->i_ext_bh);
 FUNC_0(VAR_0)->i_ext_last = ~1;
 FUNC_0(VAR_0)->i_ext_bh = ((void*)0);
}
