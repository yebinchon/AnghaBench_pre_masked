
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32_t ;
struct rpc_request_hdr {int xid; } ;
struct adsp_rtos_mp_mtoa_init_info_type {size_t image_count; size_t num_queue_offsets; size_t** queue_offsets; size_t num_task_module_entries; size_t** task_to_module_tbl; size_t module_table_size; size_t* module_entries; struct queue_to_offset_type** queue_offsets_tbl; } ;
struct adsp_rtos_mp_mtoa_type {size_t module; size_t image; } ;
struct TYPE_9__ {struct adsp_rtos_mp_mtoa_init_info_type mp_mtoa_init_packet; struct adsp_rtos_mp_mtoa_type mp_mtoa_packet; } ;
struct TYPE_8__ {size_t event; size_t proc_id; } ;
struct TYPE_10__ {size_t desc_field; TYPE_3__ adsp_rtos_mp_mtoa_data; TYPE_2__ mp_mtoa_header; } ;
struct rpc_adsp_rtos_modem_to_app_args_t {size_t event; size_t proc_id; size_t module; size_t image; TYPE_4__ mtoa_pkt; } ;
struct queue_to_offset_type {size_t offset; size_t queue; } ;
struct msm_adsp_module {size_t name; int driver_data; TYPE_1__* ops; int lock; int state_wait; void* state; int info; } ;
typedef size_t int32_t ;
struct TYPE_11__ {int init_info_wait; int init_info_state; struct adsp_rtos_mp_mtoa_init_info_type* init_info_ptr; } ;
struct TYPE_7__ {int (* event ) (int ,int ,int ,int ) ;} ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 scalar_t__ VAR_7 ;



 TYPE_5__ VAR_8 ;
 int FUNC_0 (int ,size_t) ;
 scalar_t__ FUNC_1 (size_t) ;
 struct msm_adsp_module* FUNC_2 (TYPE_5__*,size_t) ;
 size_t* VAR_9 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,size_t) ;
 int FUNC_6 (char*,...) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct rpc_request_hdr *VAR_12)
{
 struct rpc_adsp_rtos_modem_to_app_args_t *VAR_13 =
  (struct rpc_adsp_rtos_modem_to_app_args_t *)VAR_12;
 uint32_t VAR_14;
 uint32_t VAR_15;
 uint32_t VAR_16;
 uint32_t VAR_17;
 struct msm_adsp_module *VAR_18;
 VAR_14 = FUNC_1(VAR_13->event);
 VAR_15 = FUNC_1(VAR_13->proc_id);
 VAR_16 = FUNC_1(VAR_13->module);
 VAR_17 = FUNC_1(VAR_13->image);


 FUNC_6("adsp: rpc event=%d, proc_id=%d, module=%d, image=%d\n",
  VAR_14, VAR_15, VAR_16, VAR_17);

 VAR_18 = FUNC_2(&VAR_8, VAR_16);
 if (!VAR_18) {
  FUNC_5("adsp: module %d is not supported!\n", VAR_16);
  FUNC_7(VAR_11, VAR_12->xid,
    VAR_5);
  return;
 }

 FUNC_3(&VAR_18->lock);
 switch (VAR_14) {
 case 129:
  FUNC_6("adsp: module %s: READY\n", VAR_18->name);
  VAR_18->state = VAR_1;
  FUNC_9(&VAR_18->state_wait);
  FUNC_0(VAR_18->info, VAR_17);
  break;
 case 130:
  FUNC_6("adsp: module %s: DISABLED\n", VAR_18->name);
  VAR_18->state = VAR_0;
  FUNC_9(&VAR_18->state_wait);
  break;
 case 128:
  FUNC_6("adsp: module %s: SERVICE_RESET\n", VAR_18->name);
  VAR_18->state = VAR_0;
  FUNC_9(&VAR_18->state_wait);
  break;
 case 132:
  FUNC_6("adsp: module %s: CMD_SUCCESS\n", VAR_18->name);
  break;
 case 133:
  FUNC_6("adsp: module %s: CMD_FAIL\n", VAR_18->name);
  break;





 default:
  FUNC_6("adsp: unknown event %d\n", VAR_14);
  FUNC_7(VAR_11, VAR_12->xid,
          VAR_5);
  FUNC_4(&VAR_18->lock);
  return;
 }
 FUNC_7(VAR_11, VAR_12->xid,
         VAR_6);
 FUNC_4(&VAR_18->lock);





}
