
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct be_queue_info {scalar_t__ len; int head; int used; } ;
struct TYPE_3__ {struct be_queue_info q; } ;
struct TYPE_4__ {TYPE_1__ mcc_obj; } ;
struct beiscsi_hba {TYPE_2__ ctrl; } ;
struct be_mcc_wrb {int tag0; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct be_mcc_wrb*,int ,int) ;
 int FUNC_4 (struct be_queue_info*) ;
 struct be_mcc_wrb* FUNC_5 (struct be_queue_info*) ;

struct be_mcc_wrb *FUNC_6(struct beiscsi_hba *VAR_0)
{
 struct be_queue_info *VAR_1 = &VAR_0->ctrl.mcc_obj.q;
 struct be_mcc_wrb *VAR_2;

 FUNC_0(FUNC_2(&VAR_1->used) >= VAR_1->len);
 VAR_2 = FUNC_5(VAR_1);
 FUNC_3(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->tag0 = (VAR_1->head & 0x000000FF) << 16;
 FUNC_4(VAR_1);
 FUNC_1(&VAR_1->used);
 return VAR_2;
}
