
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct phys_addr {int dummy; } ;
struct TYPE_12__ {int id; } ;
struct hwi_controller {TYPE_6__ default_pdu_hdr; } ;
struct be_dma_mem {unsigned long dma; } ;
struct be_queue_info {int id; struct be_dma_mem dma_mem; } ;
struct hwi_context_memory {struct be_queue_info be_def_hdrq; struct be_queue_info* be_cq; } ;
struct TYPE_11__ {int defpdu_hdr_sz; } ;
struct beiscsi_hba {TYPE_5__ params; int ctrl; struct be_mem_descriptor* init_mem; } ;
struct be_mem_descriptor {TYPE_4__* mem_array; } ;
struct TYPE_7__ {scalar_t__ address; } ;
struct TYPE_8__ {TYPE_1__ a64; } ;
struct TYPE_9__ {TYPE_2__ u; } ;
struct TYPE_10__ {int size; TYPE_3__ bus_address; void* virtual_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct be_queue_info*,struct be_queue_info*,unsigned int,int ) ;
 int FUNC_1 (struct be_queue_info*,int,int,void*) ;
 int FUNC_2 (struct beiscsi_hba*,int ,int ,char*,...) ;
 int FUNC_3 (struct beiscsi_hba*,int) ;

__attribute__((used)) static int
FUNC_4(struct beiscsi_hba *VAR_4,
         struct hwi_context_memory *VAR_5,
         struct hwi_controller *VAR_6,
         unsigned int VAR_7)
{
 unsigned int VAR_8;
 int VAR_9;
 struct be_queue_info *VAR_10, *VAR_11;
 struct be_dma_mem *VAR_12;
 struct be_mem_descriptor *VAR_13;
 void *VAR_14;

 VAR_8 = 0;
 VAR_10 = &VAR_5->be_def_hdrq;
 VAR_11 = &VAR_5->be_cq[0];
 VAR_12 = &VAR_10->dma_mem;
 VAR_13 = VAR_4->init_mem;
 VAR_13 += VAR_1;
 VAR_14 = VAR_13->mem_array[VAR_8].virtual_address;
 VAR_9 = FUNC_1(VAR_10, VAR_13->mem_array[0].size /
       sizeof(struct phys_addr),
       sizeof(struct phys_addr), VAR_14);
 if (VAR_9) {
  FUNC_2(VAR_4, VAR_2, VAR_0,
       "BM_%d : be_fill_queue Failed for DEF PDU HDR\n");
  return VAR_9;
 }
 VAR_12->dma = (unsigned long)VAR_13->mem_array[VAR_8].
      bus_address.u.a64.address;
 VAR_9 = FUNC_0(&VAR_4->ctrl, VAR_11, VAR_10,
           VAR_7,
           VAR_4->params.defpdu_hdr_sz);
 if (VAR_9) {
  FUNC_2(VAR_4, VAR_2, VAR_0,
       "BM_%d : be_cmd_create_default_pdu_queue Failed DEFHDR\n");
  return VAR_9;
 }
 VAR_6->default_pdu_hdr.id = VAR_5->be_def_hdrq.id;
 FUNC_2(VAR_4, VAR_3, VAR_0,
      "BM_%d : iscsi def pdu id is %d\n",
      VAR_5->be_def_hdrq.id);

 FUNC_3(VAR_4, 1);
 return 0;
}
