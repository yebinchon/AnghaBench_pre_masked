
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ flag; } ;
struct TYPE_4__ {int fcf_flag; TYPE_1__ failover_rec; } ;
struct lpfc_hba {int hbalock; TYPE_2__ fcf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct lpfc_hba*,int ,int,char*,...) ;
 int FUNC_1 (struct lpfc_hba*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct lpfc_hba *VAR_7)
{
 int VAR_8;

 FUNC_2(&VAR_7->hbalock);

 VAR_7->fcf.fcf_flag &= ~VAR_0;

 VAR_7->fcf.failover_rec.flag = 0;

 VAR_7->fcf.fcf_flag |= VAR_1;
 FUNC_3(&VAR_7->hbalock);


 FUNC_0(VAR_7, VAR_3, VAR_5 | VAR_4,
   "2777 Start post-quiescent FCF table scan\n");
 VAR_8 = FUNC_1(VAR_7, VAR_6);
 if (VAR_8)
  FUNC_0(VAR_7, VAR_2, VAR_5 | VAR_4,
    "2747 Issue FCF scan read FCF mailbox "
    "command failed 0x%x\n", VAR_8);
}
