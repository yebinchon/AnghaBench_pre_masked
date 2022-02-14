
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int j_format_version; TYPE_2__* j_superblock; } ;
typedef TYPE_1__ journal_t ;
struct TYPE_5__ {int s_feature_incompat; int s_feature_ro_compat; int s_feature_compat; } ;
typedef TYPE_2__ journal_superblock_t ;


 unsigned long FUNC_0 (int ) ;

int FUNC_1 (journal_t *VAR_0, unsigned long VAR_1,
     unsigned long VAR_2, unsigned long VAR_3)
{
 journal_superblock_t *VAR_4;

 if (!VAR_1 && !VAR_2 && !VAR_3)
  return 1;
 if (VAR_0->j_format_version == 1)
  return 0;

 VAR_4 = VAR_0->j_superblock;

 if (((FUNC_0(VAR_4->s_feature_compat) & VAR_1) == VAR_1) &&
     ((FUNC_0(VAR_4->s_feature_ro_compat) & VAR_2) == VAR_2) &&
     ((FUNC_0(VAR_4->s_feature_incompat) & VAR_3) == VAR_3))
  return 1;

 return 0;
}
