
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fnic {unsigned int rq_count; unsigned int raw_wq_count; unsigned int wq_copy_count; unsigned int cq_count; unsigned int wq_count; unsigned int intr_count; int vdev; TYPE_1__* lport; scalar_t__ err_intr_offset; int pdev; TYPE_2__* msix_entry; TYPE_2__* wq_copy; TYPE_2__* wq; TYPE_2__* rq; } ;
struct TYPE_5__ {unsigned int entry; } ;
struct TYPE_4__ {int host; } ;


 unsigned int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_2__*,unsigned int) ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(struct fnic *VAR_7)
{
 unsigned int VAR_8 = FUNC_0(VAR_7->rq);
 unsigned int VAR_9 = FUNC_0(VAR_7->wq);
 unsigned int VAR_10 = FUNC_0(VAR_7->wq_copy);
 unsigned int VAR_11;
 FUNC_1(FUNC_0(VAR_7->msix_entry) < VAR_8 + VAR_9 + VAR_10 + 1);
 for (VAR_11 = 0; VAR_11 < VAR_8 + VAR_9 + VAR_10 + 1; VAR_11++)
  VAR_7->msix_entry[VAR_11].entry = VAR_11;

 if (VAR_7->rq_count >= VAR_8 &&
     VAR_7->raw_wq_count >= VAR_9 &&
     VAR_7->wq_copy_count >= VAR_10 &&
     VAR_7->cq_count >= VAR_8 + VAR_9 + VAR_10) {
  if (!FUNC_4(VAR_7->pdev, VAR_7->msix_entry,
        VAR_8 + VAR_9 + VAR_10 + 1)) {
   VAR_7->rq_count = VAR_8;
   VAR_7->raw_wq_count = VAR_9;
   VAR_7->wq_copy_count = VAR_10;
   VAR_7->wq_count = VAR_9 + VAR_10;
   VAR_7->cq_count = VAR_8 + VAR_9 + VAR_10;
   VAR_7->intr_count = VAR_8 + VAR_9 + VAR_10 + 1;
   VAR_7->err_intr_offset = VAR_1;

   FUNC_2(VAR_2, VAR_7->lport->host,
         "Using MSI-X Interrupts\n");
   FUNC_5(VAR_7->vdev,
            VAR_5);
   return 0;
  }
 }





 if (VAR_7->rq_count >= 1 &&
     VAR_7->raw_wq_count >= 1 &&
     VAR_7->wq_copy_count >= 1 &&
     VAR_7->cq_count >= 3 &&
     VAR_7->intr_count >= 1 &&
     !FUNC_3(VAR_7->pdev)) {

  VAR_7->rq_count = 1;
  VAR_7->raw_wq_count = 1;
  VAR_7->wq_copy_count = 1;
  VAR_7->wq_count = 2;
  VAR_7->cq_count = 3;
  VAR_7->intr_count = 1;
  VAR_7->err_intr_offset = 0;

  FUNC_2(VAR_2, VAR_7->lport->host,
        "Using MSI Interrupts\n");
  FUNC_5(VAR_7->vdev, VAR_4);

  return 0;
 }
 if (VAR_7->rq_count >= 1 &&
     VAR_7->raw_wq_count >= 1 &&
     VAR_7->wq_copy_count >= 1 &&
     VAR_7->cq_count >= 3 &&
     VAR_7->intr_count >= 3) {

  VAR_7->rq_count = 1;
  VAR_7->raw_wq_count = 1;
  VAR_7->wq_copy_count = 1;
  VAR_7->cq_count = 3;
  VAR_7->intr_count = 3;

  FUNC_2(VAR_2, VAR_7->lport->host,
        "Using Legacy Interrupts\n");
  FUNC_5(VAR_7->vdev, VAR_3);

  return 0;
 }

 FUNC_5(VAR_7->vdev, VAR_6);

 return -VAR_0;
}
