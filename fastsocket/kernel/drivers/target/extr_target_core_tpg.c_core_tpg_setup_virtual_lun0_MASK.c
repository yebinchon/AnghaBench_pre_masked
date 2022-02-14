
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct se_lun {int lun_sep_lock; int lun_cmd_lock; int lun_acl_lock; int lun_cmd_list; int lun_acl_list; int lun_shutdown_comp; int lun_acl_count; int lun_status; scalar_t__ unpacked_lun; } ;
struct se_portal_group {struct se_lun tpg_virt_lun0; } ;
struct se_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct se_portal_group*,struct se_lun*,int ,struct se_device*) ;
 struct se_device* VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct se_portal_group *VAR_3)
{

 struct se_device *VAR_4 = VAR_2;
 struct se_lun *VAR_5 = &VAR_3->tpg_virt_lun0;
 u32 VAR_6 = VAR_0;
 int VAR_7;

 VAR_5->unpacked_lun = 0;
 VAR_5->lun_status = VAR_1;
 FUNC_1(&VAR_5->lun_acl_count, 0);
 FUNC_3(&VAR_5->lun_shutdown_comp);
 FUNC_0(&VAR_5->lun_acl_list);
 FUNC_0(&VAR_5->lun_cmd_list);
 FUNC_4(&VAR_5->lun_acl_lock);
 FUNC_4(&VAR_5->lun_cmd_lock);
 FUNC_4(&VAR_5->lun_sep_lock);

 VAR_7 = FUNC_2(VAR_3, VAR_5, VAR_6, VAR_4);
 if (VAR_7 < 0)
  return VAR_7;

 return 0;
}
