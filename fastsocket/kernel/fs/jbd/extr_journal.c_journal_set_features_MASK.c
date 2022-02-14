
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* j_superblock; } ;
typedef TYPE_1__ journal_t ;
struct TYPE_7__ {int s_feature_incompat; int s_feature_ro_compat; int s_feature_compat; } ;
typedef TYPE_2__ journal_superblock_t ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int,char*,unsigned long,unsigned long,unsigned long) ;
 int FUNC_2 (TYPE_1__*,unsigned long,unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (TYPE_1__*,unsigned long,unsigned long,unsigned long) ;

int FUNC_4 (journal_t *VAR_0, unsigned long VAR_1,
     unsigned long VAR_2, unsigned long VAR_3)
{
 journal_superblock_t *VAR_4;

 if (FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3))
  return 1;

 if (!FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3))
  return 0;

 FUNC_1(1, "Setting new features 0x%lx/0x%lx/0x%lx\n",
    VAR_1, VAR_2, VAR_3);

 VAR_4 = VAR_0->j_superblock;

 VAR_4->s_feature_compat |= FUNC_0(VAR_1);
 VAR_4->s_feature_ro_compat |= FUNC_0(VAR_2);
 VAR_4->s_feature_incompat |= FUNC_0(VAR_3);

 return 1;
}
