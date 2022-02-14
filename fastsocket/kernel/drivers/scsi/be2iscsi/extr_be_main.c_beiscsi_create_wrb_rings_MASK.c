
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef void* u64 ;
struct TYPE_14__ {void* address; } ;
struct TYPE_15__ {TYPE_5__ a64; } ;
struct TYPE_16__ {TYPE_6__ u; } ;
struct mem_array {int size; TYPE_7__ bus_address; void* virtual_address; } ;
struct iscsi_wrb {int dummy; } ;
struct hwi_wrb_context {int cid; } ;
struct hwi_controller {struct hwi_wrb_context* wrb_context; } ;
struct hwi_context_memory {TYPE_9__* be_wrbq; } ;
struct TYPE_17__ {int cxns_per_ctrl; int wrbs_per_cxn; } ;
struct beiscsi_hba {int ctrl; TYPE_8__ params; struct be_mem_descriptor* init_mem; } ;
struct be_mem_descriptor {TYPE_4__* mem_array; } ;
struct be_dma_mem {int dummy; } ;
struct TYPE_18__ {int id; } ;
struct TYPE_10__ {void* address; } ;
struct TYPE_11__ {TYPE_1__ a64; } ;
struct TYPE_12__ {TYPE_2__ u; } ;
struct TYPE_13__ {int size; TYPE_3__ bus_address; void* virtual_address; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,struct be_dma_mem*,TYPE_9__*) ;
 int FUNC_2 (struct beiscsi_hba*,int ,int ,char*) ;
 int FUNC_3 (struct beiscsi_hba*,struct mem_array*,struct be_dma_mem*) ;
 int FUNC_4 (struct mem_array*) ;
 struct mem_array* FUNC_5 (int,int ) ;

__attribute__((used)) static int
FUNC_6(struct beiscsi_hba *VAR_5,
    struct hwi_context_memory *VAR_6,
    struct hwi_controller *VAR_7)
{
 unsigned int VAR_8, VAR_9, VAR_10, VAR_11;
 u64 VAR_12;
 unsigned int VAR_13, VAR_14, VAR_15;
 struct mem_array *VAR_16;
 void *VAR_17;
 struct be_dma_mem VAR_18;
 struct be_mem_descriptor *VAR_19;
 struct hwi_wrb_context *VAR_20;
 int VAR_21;

 VAR_13 = 0;
 VAR_19 = VAR_5->init_mem;
 VAR_19 += VAR_3;
 VAR_16 = FUNC_5(sizeof(*VAR_16) * VAR_5->params.cxns_per_ctrl,
      VAR_2);
 if (!VAR_16) {
  FUNC_2(VAR_5, VAR_4, VAR_0,
       "BM_%d : Memory alloc failed in create wrb ring.\n");
  return -VAR_1;
 }
 VAR_17 = VAR_19->mem_array[VAR_13].virtual_address;
 VAR_12 = VAR_19->mem_array[VAR_13].bus_address.u.a64.address;
 VAR_11 = VAR_19->mem_array[VAR_13].size /
  (VAR_5->params.wrbs_per_cxn * sizeof(struct iscsi_wrb));

 for (VAR_14 = 0; VAR_14 < VAR_5->params.cxns_per_ctrl; VAR_14++) {
  if (VAR_11) {
   VAR_16[VAR_14].virtual_address = VAR_17;
   VAR_16[VAR_14].bus_address.u.a64.address = VAR_12;
   VAR_16[VAR_14].size = VAR_5->params.wrbs_per_cxn *
         sizeof(struct iscsi_wrb);
   VAR_17 += VAR_16[VAR_14].size;
   VAR_12 += VAR_16[VAR_14].size;
   VAR_11--;
  } else {
   VAR_13++;
   VAR_17 = VAR_19->mem_array[VAR_13].virtual_address;
   VAR_12 = VAR_19->mem_array[VAR_13]. bus_address.u.a64.address;

   VAR_11 = VAR_19->mem_array[VAR_13].size /
     (VAR_5->params.wrbs_per_cxn *
     sizeof(struct iscsi_wrb));
   VAR_16[VAR_14].virtual_address = VAR_17;
   VAR_16[VAR_14].bus_address.u.a64.address = VAR_12;

   VAR_16[VAR_14].size = VAR_5->params.wrbs_per_cxn *
       sizeof(struct iscsi_wrb);
   VAR_17 += VAR_16[VAR_14].size;
   VAR_12 += VAR_16[VAR_14].size;
   VAR_11--;
  }
 }
 for (VAR_15 = 0; VAR_15 < VAR_5->params.cxns_per_ctrl; VAR_15++) {
  VAR_8 = 0;
  VAR_9 = 0;
  VAR_10 = 0;

  FUNC_3(VAR_5, &VAR_16[VAR_15], &VAR_18);
  VAR_21 = FUNC_1(&VAR_5->ctrl, &VAR_18,
         &VAR_6->be_wrbq[VAR_15]);
  if (VAR_21 != 0) {
   FUNC_2(VAR_5, VAR_4, VAR_0,
        "BM_%d : wrbq create failed.");
   FUNC_4(VAR_16);
   return VAR_21;
  }
  VAR_20 = &VAR_7->wrb_context[VAR_15];
  VAR_20->cid = VAR_6->be_wrbq[VAR_15].id;
  FUNC_0(VAR_15, VAR_20->cid);
 }
 FUNC_4(VAR_16);
 return 0;
}
