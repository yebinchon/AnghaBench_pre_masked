
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_lun {int dummy; } ;
struct se_portal_group {struct se_lun tpg_virt_lun0; } ;


 int FUNC_0 (struct se_portal_group*,struct se_lun*) ;

__attribute__((used)) static void FUNC_1(struct se_portal_group *VAR_0)
{
 struct se_lun *VAR_1 = &VAR_0->tpg_virt_lun0;

 FUNC_0(VAR_0, VAR_1);
}
