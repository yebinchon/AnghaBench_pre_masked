
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct bfad_s {int bfad_lock; int bfa; } ;
struct bfa_qos_vc_attr_s {TYPE_3__* vc_info; int elp_opmode_flags; int shared_credit; int total_vc_count; } ;
struct bfa_fcport_s {struct bfa_qos_vc_attr_s qos_vc_attr; } ;
struct TYPE_5__ {size_t total_vc_count; TYPE_1__* vc_info; int elp_opmode_flags; void* shared_credit; } ;
struct bfa_bsg_qos_vc_attr_s {int status; TYPE_2__ attr; } ;
struct TYPE_6__ {int priority; int borrow_credit; int vc_credit; } ;
struct TYPE_4__ {int priority; int borrow_credit; int vc_credit; } ;


 struct bfa_fcport_s* FUNC_0 (int *) ;
 int VAR_0 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int
FUNC_5(struct bfad_s *VAR_1, void *VAR_2)
{
 struct bfa_bsg_qos_vc_attr_s *VAR_3 =
    (struct bfa_bsg_qos_vc_attr_s *)VAR_2;
 struct bfa_fcport_s *VAR_4 = FUNC_0(&VAR_1->bfa);
 struct bfa_qos_vc_attr_s *VAR_5 = &VAR_4->qos_vc_attr;
 unsigned long VAR_6;
 u32 VAR_7 = 0;

 FUNC_3(&VAR_1->bfad_lock, VAR_6);
 VAR_3->attr.total_vc_count = FUNC_1(VAR_5->total_vc_count);
 VAR_3->attr.shared_credit = FUNC_1(VAR_5->shared_credit);
 VAR_3->attr.elp_opmode_flags =
    FUNC_2(VAR_5->elp_opmode_flags);


 while (VAR_7 < VAR_3->attr.total_vc_count) {
  VAR_3->attr.vc_info[VAR_7].vc_credit =
    VAR_5->vc_info[VAR_7].vc_credit;
  VAR_3->attr.vc_info[VAR_7].borrow_credit =
    VAR_5->vc_info[VAR_7].borrow_credit;
  VAR_3->attr.vc_info[VAR_7].priority =
    VAR_5->vc_info[VAR_7].priority;
  VAR_7++;
 }
 FUNC_4(&VAR_1->bfad_lock, VAR_6);

 VAR_3->status = VAR_0;
 return 0;
}
