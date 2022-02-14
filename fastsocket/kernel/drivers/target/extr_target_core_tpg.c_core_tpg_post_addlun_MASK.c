
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct se_portal_group {int tpg_lun_lock; } ;
struct se_lun {int lun_status; int lun_access; } ;


 int VAR_0 ;
 int FUNC_0 (void*,struct se_portal_group*,struct se_lun*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(
 struct se_portal_group *VAR_1,
 struct se_lun *VAR_2,
 u32 VAR_3,
 void *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_1, VAR_2);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_1(&VAR_1->tpg_lun_lock);
 VAR_2->lun_access = VAR_3;
 VAR_2->lun_status = VAR_0;
 FUNC_2(&VAR_1->tpg_lun_lock);

 return 0;
}
