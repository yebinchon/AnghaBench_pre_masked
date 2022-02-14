
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int check_nego; } ;
struct TYPE_5__ {scalar_t__ uval; int wval; scalar_t__ sval; } ;
struct sym_tcb {int * starget; TYPE_2__ tgoal; TYPE_1__ head; } ;
struct sym_lcb {scalar_t__ busy_itl; scalar_t__ busy_itlq; } ;
struct TYPE_8__ {TYPE_3__* host; } ;
struct sym_hcb {TYPE_4__ s; int rv_scntl3; struct sym_tcb* target; } ;
struct scsi_device {size_t id; int lun; int host; } ;
struct TYPE_7__ {int host_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,int *,char*,int ) ;
 scalar_t__ FUNC_3 (struct sym_hcb*,size_t,int ) ;
 struct sym_hcb* FUNC_4 (int ) ;
 struct sym_lcb* FUNC_5 (struct sym_tcb*,int ) ;
 int FUNC_6 (struct sym_hcb*,int) ;

__attribute__((used)) static void FUNC_7(struct scsi_device *VAR_1)
{
 struct sym_hcb *VAR_2 = FUNC_4(VAR_1->host);
 struct sym_tcb *VAR_3 = &VAR_2->target[VAR_1->id];
 struct sym_lcb *VAR_4 = FUNC_5(VAR_3, VAR_1->lun);
 unsigned long VAR_5;

 FUNC_0(VAR_2->s.host->host_lock, VAR_5);

 if (VAR_4->busy_itlq || VAR_4->busy_itl) {




  FUNC_2(VAR_0, VAR_3->starget,
          "Removing busy LCB (%d)\n", VAR_1->lun);
  FUNC_6(VAR_2, 1);
 }

 if (FUNC_3(VAR_2, VAR_1->id, VAR_1->lun) == 0) {



  VAR_3->head.sval = 0;
  VAR_3->head.wval = VAR_2->rv_scntl3;
  VAR_3->head.uval = 0;
  VAR_3->tgoal.check_nego = 1;
  VAR_3->starget = ((void*)0);
 }

 FUNC_1(VAR_2->s.host->host_lock, VAR_5);
}
