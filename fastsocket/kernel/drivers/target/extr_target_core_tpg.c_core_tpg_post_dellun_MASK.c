
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_portal_group {int tpg_lun_lock; } ;
struct se_lun {int lun_status; int lun_se_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct se_portal_group*,struct se_lun*) ;
 int FUNC_1 (struct se_portal_group*,struct se_lun*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(
 struct se_portal_group *VAR_1,
 struct se_lun *VAR_2)
{
 FUNC_1(VAR_1, VAR_2);

 FUNC_0(VAR_2->lun_se_dev, VAR_1, VAR_2);

 FUNC_2(&VAR_1->tpg_lun_lock);
 VAR_2->lun_status = VAR_0;
 FUNC_3(&VAR_1->tpg_lun_lock);

 return 0;
}
