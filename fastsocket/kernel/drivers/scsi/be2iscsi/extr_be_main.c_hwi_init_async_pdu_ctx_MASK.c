
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_19__ ;
typedef struct TYPE_28__ TYPE_18__ ;
typedef struct TYPE_27__ TYPE_17__ ;
typedef struct TYPE_26__ TYPE_16__ ;
typedef struct TYPE_25__ TYPE_15__ ;
typedef struct TYPE_24__ TYPE_14__ ;
typedef struct TYPE_23__ TYPE_13__ ;
typedef struct TYPE_22__ TYPE_12__ ;
typedef struct TYPE_21__ TYPE_11__ ;
typedef struct TYPE_20__ TYPE_10__ ;


struct hwi_controller {TYPE_18__* phwi_ctxt; } ;
struct TYPE_23__ {scalar_t__ address; } ;
struct TYPE_24__ {TYPE_13__ a64; } ;
struct TYPE_25__ {TYPE_14__ u; } ;
struct TYPE_27__ {int ep_read_ptr; scalar_t__ host_write_ptr; scalar_t__ writables; int free_entries; int free_list; TYPE_15__ pa_base; scalar_t__ va_base; scalar_t__ handle_base; scalar_t__ ring_base; } ;
struct TYPE_31__ {scalar_t__ address; } ;
struct TYPE_32__ {TYPE_2__ a64; } ;
struct TYPE_33__ {TYPE_3__ u; } ;
struct TYPE_26__ {int ep_read_ptr; scalar_t__ host_write_ptr; scalar_t__ writables; int free_entries; int free_list; TYPE_4__ pa_base; scalar_t__ va_base; scalar_t__ handle_base; scalar_t__ ring_base; } ;
struct hwi_async_pdu_context {unsigned int num_entries; unsigned int buffer_size; TYPE_17__ async_data; TYPE_16__ async_header; TYPE_19__* async_entry; } ;
struct hwi_async_entry {int dummy; } ;
struct hba_parameters {unsigned int asyncpdus_per_ctrl; unsigned int defpdu_hdr_sz; unsigned int defpdu_data_sz; } ;
struct TYPE_30__ {int iscsi_cid_count; } ;
struct beiscsi_hba {struct hba_parameters params; scalar_t__ init_mem; TYPE_1__ fw_config; struct hwi_controller* phwi_ctrlr; } ;
struct be_mem_descriptor {TYPE_9__* mem_array; } ;
struct TYPE_20__ {scalar_t__ address; } ;
struct TYPE_21__ {TYPE_10__ a64; } ;
struct TYPE_22__ {TYPE_11__ u; } ;
struct async_pdu_handle {int cri; char index; int link; TYPE_12__ pa; void* pbuffer; } ;
struct TYPE_35__ {scalar_t__ address; } ;
struct TYPE_36__ {TYPE_6__ a64; } ;
struct TYPE_37__ {TYPE_7__ u; } ;
struct TYPE_38__ {unsigned int size; TYPE_8__ bus_address; scalar_t__ virtual_address; } ;
struct TYPE_34__ {int list; } ;
struct TYPE_29__ {int data_busy_list; int header_busy_list; TYPE_5__ wait_queue; } ;
struct TYPE_28__ {struct hwi_async_pdu_context* pasync_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct beiscsi_hba*,int ,int ,char*,...) ;
 TYPE_19__* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct hwi_async_pdu_context*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct beiscsi_hba *VAR_13)
{
 struct hwi_controller *VAR_14;
 struct hba_parameters *VAR_15 = &VAR_13->params;
 struct hwi_async_pdu_context *VAR_16;
 struct async_pdu_handle *VAR_17, *VAR_18;
 unsigned int VAR_19, VAR_20, VAR_21, VAR_22;
 struct be_mem_descriptor *VAR_23;

 VAR_23 = (struct be_mem_descriptor *)VAR_13->init_mem;
 VAR_23 += VAR_9;

 VAR_14 = VAR_13->phwi_ctrlr;
 VAR_14->phwi_ctxt->pasync_ctx = (struct hwi_async_pdu_context *)
    VAR_23->mem_array[0].virtual_address;
 VAR_16 = VAR_14->phwi_ctxt->pasync_ctx;
 FUNC_4(VAR_16, 0, sizeof(*VAR_16));

 VAR_16->async_entry = FUNC_2(sizeof(struct hwi_async_entry) *
       VAR_13->fw_config.iscsi_cid_count,
       VAR_2);
 if (!VAR_16->async_entry) {
  FUNC_1(VAR_13, VAR_10, VAR_0,
       "BM_%d : hwi_init_async_pdu_ctx Mem Alloc Failed\n");
  return -VAR_1;
 }

 VAR_16->num_entries = VAR_15->asyncpdus_per_ctrl;
 VAR_16->buffer_size = VAR_15->defpdu_hdr_sz;

 VAR_23 = (struct be_mem_descriptor *)VAR_13->init_mem;
 VAR_23 += VAR_6;
 if (VAR_23->mem_array[0].virtual_address) {
  FUNC_1(VAR_13, VAR_11, VAR_0,
       "BM_%d : hwi_init_async_pdu_ctx"
       " HWI_MEM_ASYNC_HEADER_BUF va=%p\n",
       VAR_23->mem_array[0].virtual_address);
 } else
  FUNC_1(VAR_13, VAR_12, VAR_0,
       "BM_%d : No Virtual address\n");

 VAR_16->async_header.va_base =
   VAR_23->mem_array[0].virtual_address;

 VAR_16->async_header.pa_base.u.a64.address =
   VAR_23->mem_array[0].bus_address.u.a64.address;

 VAR_23 = (struct be_mem_descriptor *)VAR_13->init_mem;
 VAR_23 += VAR_8;
 if (VAR_23->mem_array[0].virtual_address) {
  FUNC_1(VAR_13, VAR_11, VAR_0,
       "BM_%d : hwi_init_async_pdu_ctx"
       " HWI_MEM_ASYNC_HEADER_RING va=%p\n",
       VAR_23->mem_array[0].virtual_address);
 } else
  FUNC_1(VAR_13, VAR_12, VAR_0,
       "BM_%d : No Virtual address\n");

 VAR_16->async_header.ring_base =
   VAR_23->mem_array[0].virtual_address;

 VAR_23 = (struct be_mem_descriptor *)VAR_13->init_mem;
 VAR_23 += VAR_7;
 if (VAR_23->mem_array[0].virtual_address) {
  FUNC_1(VAR_13, VAR_11, VAR_0,
       "BM_%d : hwi_init_async_pdu_ctx"
       " HWI_MEM_ASYNC_HEADER_HANDLE va=%p\n",
       VAR_23->mem_array[0].virtual_address);
 } else
  FUNC_1(VAR_13, VAR_12, VAR_0,
       "BM_%d : No Virtual address\n");

 VAR_16->async_header.handle_base =
   VAR_23->mem_array[0].virtual_address;
 VAR_16->async_header.writables = 0;
 FUNC_0(&VAR_16->async_header.free_list);


 VAR_23 = (struct be_mem_descriptor *)VAR_13->init_mem;
 VAR_23 += VAR_5;
 if (VAR_23->mem_array[0].virtual_address) {
  FUNC_1(VAR_13, VAR_11, VAR_0,
       "BM_%d : hwi_init_async_pdu_ctx"
       " HWI_MEM_ASYNC_DATA_RING va=%p\n",
       VAR_23->mem_array[0].virtual_address);
 } else
  FUNC_1(VAR_13, VAR_12, VAR_0,
       "BM_%d : No Virtual address\n");

 VAR_16->async_data.ring_base =
   VAR_23->mem_array[0].virtual_address;

 VAR_23 = (struct be_mem_descriptor *)VAR_13->init_mem;
 VAR_23 += VAR_4;
 if (!VAR_23->mem_array[0].virtual_address)
  FUNC_1(VAR_13, VAR_12, VAR_0,
       "BM_%d : No Virtual address\n");

 VAR_16->async_data.handle_base =
   VAR_23->mem_array[0].virtual_address;
 VAR_16->async_data.writables = 0;
 FUNC_0(&VAR_16->async_data.free_list);

 VAR_17 =
  (struct async_pdu_handle *)VAR_16->async_header.handle_base;
 VAR_18 =
  (struct async_pdu_handle *)VAR_16->async_data.handle_base;

 VAR_23 = (struct be_mem_descriptor *)VAR_13->init_mem;
 VAR_23 += VAR_3;
 if (VAR_23->mem_array[0].virtual_address) {
  FUNC_1(VAR_13, VAR_11, VAR_0,
       "BM_%d : hwi_init_async_pdu_ctx"
       " HWI_MEM_ASYNC_DATA_BUF va=%p\n",
       VAR_23->mem_array[0].virtual_address);
 } else
  FUNC_1(VAR_13, VAR_12, VAR_0,
       "BM_%d : No Virtual address\n");

 VAR_20 = 0;
 VAR_16->async_data.va_base =
   VAR_23->mem_array[VAR_20].virtual_address;
 VAR_16->async_data.pa_base.u.a64.address =
   VAR_23->mem_array[VAR_20].bus_address.u.a64.address;

 VAR_22 = ((VAR_23->mem_array[VAR_20].size) /
    VAR_13->params.defpdu_data_sz);
 VAR_21 = 0;

 for (VAR_19 = 0; VAR_19 < VAR_15->asyncpdus_per_ctrl; VAR_19++) {
  VAR_17->cri = -1;
  VAR_17->index = (char)VAR_19;
  FUNC_0(&VAR_17->link);
  VAR_17->pbuffer =
   (void *)((unsigned long)
   (VAR_16->async_header.va_base) +
   (VAR_15->defpdu_hdr_sz * VAR_19));

  VAR_17->pa.u.a64.address =
   VAR_16->async_header.pa_base.u.a64.address +
   (VAR_15->defpdu_hdr_sz * VAR_19);

  FUNC_3(&VAR_17->link,
    &VAR_16->async_header.free_list);
  VAR_17++;
  VAR_16->async_header.free_entries++;
  VAR_16->async_header.writables++;

  FUNC_0(&VAR_16->async_entry[VAR_19].wait_queue.list);
  FUNC_0(&VAR_16->async_entry[VAR_19].
          header_busy_list);
  VAR_18->cri = -1;
  VAR_18->index = (char)VAR_19;
  FUNC_0(&VAR_18->link);

  if (!VAR_22) {
   VAR_21 = 0;
   VAR_20++;
   VAR_16->async_data.va_base =
    VAR_23->mem_array[VAR_20].virtual_address;
   VAR_16->async_data.pa_base.u.a64.address =
    VAR_23->mem_array[VAR_20].
    bus_address.u.a64.address;

   VAR_22 = ((VAR_23->mem_array[VAR_20].size) /
     VAR_13->params.defpdu_data_sz);
  }
  VAR_18->pbuffer =
   (void *)((unsigned long)
   (VAR_16->async_data.va_base) +
   (VAR_15->defpdu_data_sz * VAR_21));

  VAR_18->pa.u.a64.address =
      VAR_16->async_data.pa_base.u.a64.address +
      (VAR_15->defpdu_data_sz * VAR_21);
  VAR_21++;
  VAR_22--;

  FUNC_3(&VAR_18->link,
         &VAR_16->async_data.free_list);
  VAR_18++;
  VAR_16->async_data.free_entries++;
  VAR_16->async_data.writables++;

  FUNC_0(&VAR_16->async_entry[VAR_19].data_busy_list);
 }

 VAR_16->async_header.host_write_ptr = 0;
 VAR_16->async_header.ep_read_ptr = -1;
 VAR_16->async_data.host_write_ptr = 0;
 VAR_16->async_data.ep_read_ptr = -1;

 return 0;
}
