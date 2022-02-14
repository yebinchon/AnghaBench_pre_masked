
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_4__ {scalar_t__ priority; } ;
struct TYPE_5__ {int eligible_fcf_cnt; TYPE_1__ current_rec; struct lpfc_fcf_pri* fcf_pri; } ;
struct lpfc_hba {int hbalock; TYPE_2__ fcf; } ;
struct TYPE_6__ {scalar_t__ priority; int flag; } ;
struct lpfc_fcf_pri {TYPE_3__ fcf_rec; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,size_t,scalar_t__,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct lpfc_hba *VAR_3,
   uint16_t VAR_4)
{
 struct lpfc_fcf_pri *VAR_5;

 VAR_5 = &VAR_3->fcf.fcf_pri[VAR_4];
 FUNC_1(VAR_3, VAR_0, VAR_1,
  "3058 deleting idx x%x pri x%x flg x%x\n",
  VAR_4, VAR_5->fcf_rec.priority,
   VAR_5->fcf_rec.flag);
 FUNC_2(&VAR_3->hbalock);
 if (VAR_5->fcf_rec.flag & VAR_2) {
  if (VAR_3->fcf.current_rec.priority ==
    VAR_5->fcf_rec.priority)
   VAR_3->fcf.eligible_fcf_cnt--;
  FUNC_0(&VAR_5->list);
  VAR_5->fcf_rec.flag &= ~VAR_2;
 }
 FUNC_3(&VAR_3->hbalock);
}
