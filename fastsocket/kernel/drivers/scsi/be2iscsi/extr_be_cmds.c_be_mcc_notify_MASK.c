
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct be_queue_info {int id; } ;
struct TYPE_3__ {struct be_queue_info q; } ;
struct TYPE_4__ {TYPE_1__ mcc_obj; } ;
struct beiscsi_hba {scalar_t__ db_va; TYPE_2__ ctrl; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,scalar_t__) ;

void FUNC_1(struct beiscsi_hba *VAR_3)
{
 struct be_queue_info *VAR_4 = &VAR_3->ctrl.mcc_obj.q;
 u32 VAR_5 = 0;

 VAR_5 |= VAR_4->id & VAR_2;
 VAR_5 |= 1 << VAR_0;
 FUNC_0(VAR_5, VAR_3->db_va + VAR_1);
}
