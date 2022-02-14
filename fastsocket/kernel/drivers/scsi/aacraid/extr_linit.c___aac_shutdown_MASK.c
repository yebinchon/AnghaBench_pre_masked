
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct fib {int event_wait; TYPE_3__* hw_fib_va; } ;
struct aac_dev {TYPE_4__* pdev; scalar_t__ msi; int thread; struct fib* fibs; TYPE_1__* scsi_host_ptr; scalar_t__ aif_thread; } ;
struct TYPE_8__ {int irq; } ;
struct TYPE_6__ {int XferState; } ;
struct TYPE_7__ {TYPE_2__ header; } ;
struct TYPE_5__ {int can_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct aac_dev*) ;
 int FUNC_1 (struct aac_dev*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,struct aac_dev*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct aac_dev * VAR_4)
{
 if (VAR_4->aif_thread) {
  int VAR_5;

  for (VAR_5 = 0; VAR_5 < (VAR_4->scsi_host_ptr->can_queue + VAR_0); VAR_5++) {
   struct fib *VAR_6 = &VAR_4->fibs[VAR_5];
   if (!(VAR_6->hw_fib_va->header.XferState & FUNC_2(VAR_2 | VAR_1)) &&
       (VAR_6->hw_fib_va->header.XferState & FUNC_2(VAR_3)))
    FUNC_6(&VAR_6->event_wait);
  }
  FUNC_4(VAR_4->thread);
 }
 FUNC_1(VAR_4);
 FUNC_0(VAR_4);
 FUNC_3(VAR_4->pdev->irq, VAR_4);
 if (VAR_4->msi)
  FUNC_5(VAR_4->pdev);
}
