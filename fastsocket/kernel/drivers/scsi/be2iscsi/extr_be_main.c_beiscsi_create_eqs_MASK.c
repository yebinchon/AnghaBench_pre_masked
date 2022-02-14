
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hwi_context_memory {TYPE_2__* be_eq; int cur_eqd; } ;
struct TYPE_3__ {int num_eq_entries; } ;
struct beiscsi_hba {int num_cpus; int pcidev; int ctrl; TYPE_1__ params; scalar_t__ msix_enabled; } ;
struct be_dma_mem {int dma; void* va; } ;
struct be_queue_info {struct be_dma_mem dma_mem; int id; } ;
struct be_eq_entry {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {struct be_queue_info q; struct beiscsi_hba* phba; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_3 ;
 int FUNC_1 (struct be_queue_info*,int,int,void*) ;
 int FUNC_2 (int *,struct be_queue_info*,int ) ;
 int FUNC_3 (struct beiscsi_hba*,int ,int ,char*,...) ;
 void* FUNC_4 (int ,unsigned int,int *) ;
 int FUNC_5 (int ,unsigned int,void*,int ) ;

__attribute__((used)) static int FUNC_6(struct beiscsi_hba *VAR_4,
        struct hwi_context_memory *VAR_5)
{
 unsigned int VAR_6, VAR_7;
 int VAR_8 = 0, VAR_9;
 struct be_queue_info *VAR_10;
 struct be_dma_mem *VAR_11;
 void *VAR_12;
 dma_addr_t VAR_13;

 VAR_7 = FUNC_0(VAR_4->params.num_eq_entries * sizeof(struct be_eq_entry));


 if (VAR_4->msix_enabled)
  VAR_9 = 1;
 else
  VAR_9 = 0;
 for (VAR_6 = 0; VAR_6 < (VAR_4->num_cpus + VAR_9); VAR_6++) {
  VAR_10 = &VAR_5->be_eq[VAR_6].q;
  VAR_11 = &VAR_10->dma_mem;
  VAR_5->be_eq[VAR_6].phba = VAR_4;
  VAR_12 = FUNC_4(VAR_4->pcidev,
           VAR_7 * VAR_3,
           &VAR_13);
  if (!VAR_12)
   goto create_eq_error;

  VAR_11->va = VAR_12;
  VAR_8 = FUNC_1(VAR_10, VAR_4->params.num_eq_entries,
        sizeof(struct be_eq_entry), VAR_12);
  if (VAR_8) {
   FUNC_3(VAR_4, VAR_1, VAR_0,
        "BM_%d : be_fill_queue Failed for EQ\n");
   goto create_eq_error;
  }

  VAR_11->dma = VAR_13;
  VAR_8 = FUNC_2(&VAR_4->ctrl, VAR_10,
         VAR_5->cur_eqd);
  if (VAR_8) {
   FUNC_3(VAR_4, VAR_1, VAR_0,
        "BM_%d : beiscsi_cmd_eq_create"
        "Failed for EQ\n");
   goto create_eq_error;
  }

  FUNC_3(VAR_4, VAR_2, VAR_0,
       "BM_%d : eqid = %d\n",
       VAR_5->be_eq[VAR_6].q.id);
 }
 return 0;
create_eq_error:
 for (VAR_6 = 0; VAR_6 < (VAR_4->num_cpus + VAR_9); VAR_6++) {
  VAR_10 = &VAR_5->be_eq[VAR_6].q;
  VAR_11 = &VAR_10->dma_mem;
  if (VAR_11->va)
   FUNC_5(VAR_4->pcidev, VAR_7
         * VAR_3,
         VAR_11->va, VAR_11->dma);
 }
 return VAR_8;
}
