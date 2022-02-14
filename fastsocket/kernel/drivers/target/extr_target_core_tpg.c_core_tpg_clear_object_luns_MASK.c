
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_portal_group {int tpg_lun_lock; struct se_lun** tpg_lun_list; } ;
struct se_lun {scalar_t__ lun_status; int unpacked_lun; int * lun_se_dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct se_portal_group*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct se_portal_group *VAR_2)
{
 int VAR_3;
 struct se_lun *VAR_4;

 FUNC_1(&VAR_2->tpg_lun_lock);
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_4 = VAR_2->tpg_lun_list[VAR_3];

  if ((VAR_4->lun_status != VAR_0) ||
      (VAR_4->lun_se_dev == ((void*)0)))
   continue;

  FUNC_2(&VAR_2->tpg_lun_lock);
  FUNC_0(VAR_2, VAR_4->unpacked_lun);
  FUNC_1(&VAR_2->tpg_lun_lock);
 }
 FUNC_2(&VAR_2->tpg_lun_lock);
}
