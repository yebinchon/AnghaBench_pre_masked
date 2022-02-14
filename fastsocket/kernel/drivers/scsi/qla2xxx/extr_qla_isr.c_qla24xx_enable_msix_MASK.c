
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rsp_que {struct qla_msix_entry* msix; } ;
struct qla_msix_entry {int vector; int entry; int have_irq; struct rsp_que* rsp; } ;
struct TYPE_4__ {int msix_enabled; } ;
struct qla_hw_data {int msix_count; int max_rsp_queues; int mqenable; int max_req_queues; int mqiobase; scalar_t__ msixbase; struct qla_msix_entry* msix_entries; TYPE_1__ flags; int pdev; } ;
struct msix_entry {int entry; int vector; } ;
typedef int scsi_qla_host_t ;
struct TYPE_6__ {int name; int handler; } ;
struct TYPE_5__ {int name; int handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 int VAR_2 ;
 int FUNC_2 (struct msix_entry*) ;
 void* FUNC_3 (int,int ) ;
 TYPE_3__* VAR_3 ;
 int FUNC_4 (int ,struct msix_entry*,int) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int ,int *,int,char*,int ,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ,int *,int,char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (struct qla_hw_data*) ;
 TYPE_2__* VAR_8 ;
 int FUNC_9 (int,int ,int ,int ,struct rsp_que*) ;

__attribute__((used)) static int
FUNC_10(struct qla_hw_data *VAR_9, struct rsp_que *VAR_10)
{

 int VAR_11, VAR_12;
 struct msix_entry *VAR_13;
 struct qla_msix_entry *VAR_14;
 scsi_qla_host_t *VAR_15 = FUNC_5(VAR_9->pdev);

 VAR_13 = FUNC_3(sizeof(struct msix_entry) * VAR_9->msix_count,
   VAR_1);
 if (!VAR_13) {
  FUNC_7(VAR_7, VAR_15, 0x00bc,
      "Failed to allocate memory for msix_entry.\n");
  return -VAR_0;
 }

 for (VAR_11 = 0; VAR_11 < VAR_9->msix_count; VAR_11++)
  VAR_13[VAR_11].entry = VAR_11;

 VAR_12 = FUNC_4(VAR_9->pdev, VAR_13, VAR_9->msix_count);
 if (VAR_12) {
  if (VAR_12 < 2)
   goto msix_failed;

  FUNC_7(VAR_7, VAR_15, 0x00c6,
      "MSI-X: Failed to enable support "
      "-- %d/%d\n Retry with %d vectors.\n",
      VAR_9->msix_count, VAR_12, VAR_12);
  VAR_9->msix_count = VAR_12;
  VAR_12 = FUNC_4(VAR_9->pdev, VAR_13, VAR_9->msix_count);
  if (VAR_12) {
msix_failed:
   FUNC_7(VAR_6, VAR_15, 0x00c7,
       "MSI-X: Failed to enable support, "
       "giving   up -- %d/%d.\n",
       VAR_9->msix_count, VAR_12);
   goto msix_out;
  }
  VAR_9->max_rsp_queues = VAR_9->msix_count - 1;
 }
 VAR_9->msix_entries = FUNC_3(sizeof(struct qla_msix_entry) *
    VAR_9->msix_count, VAR_1);
 if (!VAR_9->msix_entries) {
  FUNC_7(VAR_6, VAR_15, 0x00c8,
      "Failed to allocate memory for ha->msix_entries.\n");
  VAR_12 = -VAR_0;
  goto msix_out;
 }
 VAR_9->flags.msix_enabled = 1;

 for (VAR_11 = 0; VAR_11 < VAR_9->msix_count; VAR_11++) {
  VAR_14 = &VAR_9->msix_entries[VAR_11];
  VAR_14->vector = VAR_13[VAR_11].vector;
  VAR_14->entry = VAR_13[VAR_11].entry;
  VAR_14->have_irq = 0;
  VAR_14->rsp = ((void*)0);
 }


 for (VAR_11 = 0; VAR_11 < 2; VAR_11++) {
  VAR_14 = &VAR_9->msix_entries[VAR_11];
  if (FUNC_0(VAR_9)) {
   VAR_12 = FUNC_9(VAR_14->vector,
    VAR_8[VAR_11].handler,
    0, VAR_8[VAR_11].name, VAR_10);
  } else {
   VAR_12 = FUNC_9(VAR_14->vector,
    VAR_3[VAR_11].handler,
    0, VAR_3[VAR_11].name, VAR_10);
  }
  if (VAR_12) {
   FUNC_7(VAR_6, VAR_15, 0x00cb,
       "MSI-X: unable to register handler -- %x/%d.\n",
       VAR_14->vector, VAR_12);
   FUNC_8(VAR_9);
   VAR_9->mqenable = 0;
   goto msix_out;
  }
  VAR_14->have_irq = 1;
  VAR_14->rsp = VAR_10;
  VAR_10->msix = VAR_14;
 }


 if (FUNC_1(VAR_9)) {
  if (VAR_9->msixbase && VAR_9->mqiobase &&
      (VAR_9->max_rsp_queues > 1 || VAR_9->max_req_queues > 1))
   VAR_9->mqenable = 1;
 } else
  if (VAR_9->mqiobase
      && (VAR_9->max_rsp_queues > 1 || VAR_9->max_req_queues > 1))
   VAR_9->mqenable = 1;
 FUNC_6(VAR_5, VAR_15, 0xc005,
     "mqiobase=%p, max_rsp_queues=%d, max_req_queues=%d.\n",
     VAR_9->mqiobase, VAR_9->max_rsp_queues, VAR_9->max_req_queues);
 FUNC_6(VAR_4, VAR_15, 0x0055,
     "mqiobase=%p, max_rsp_queues=%d, max_req_queues=%d.\n",
     VAR_9->mqiobase, VAR_9->max_rsp_queues, VAR_9->max_req_queues);

msix_out:
 FUNC_2(VAR_13);
 return VAR_12;
}
