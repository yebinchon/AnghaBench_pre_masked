
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int i_ino; struct super_block* i_sb; } ;
struct TYPE_2__ {int i_lastalloc; scalar_t__ i_pa_cnt; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct super_block*,int ) ;
 int FUNC_2 (char*,int ) ;

void
FUNC_3(struct inode *VAR_0)
{
 struct super_block *VAR_1 = VAR_0->i_sb;

 FUNC_2("AFFS: free_prealloc(ino=%lu)\n", VAR_0->i_ino);

 while (FUNC_0(VAR_0)->i_pa_cnt) {
  FUNC_0(VAR_0)->i_pa_cnt--;
  FUNC_1(VAR_1, ++FUNC_0(VAR_0)->i_lastalloc);
 }
}
