
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct t10_alua_tg_pt_gp {int tg_pt_gp_ref_cnt; struct se_device* tg_pt_gp_dev; } ;
struct TYPE_2__ {int tg_pt_gps_lock; } ;
struct se_device {TYPE_1__ t10_alua; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(
 struct t10_alua_tg_pt_gp *VAR_0)
{
 struct se_device *VAR_1 = VAR_0->tg_pt_gp_dev;

 FUNC_1(&VAR_1->t10_alua.tg_pt_gps_lock);
 FUNC_0(&VAR_0->tg_pt_gp_ref_cnt);
 FUNC_2(&VAR_1->t10_alua.tg_pt_gps_lock);
}
