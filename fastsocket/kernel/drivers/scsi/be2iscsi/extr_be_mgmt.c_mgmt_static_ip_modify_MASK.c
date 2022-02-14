
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct iscsi_iface_param_info {scalar_t__ param; int len; int value; } ;
struct beiscsi_hba {int interface_handle; } ;
struct be_ip_addr_subnet_format {int dummy; } ;
struct be_dma_mem {struct be_cmd_set_ip_addr_req* va; } ;
struct TYPE_5__ {int size_of_structure; int subnet_mask; int addr; scalar_t__ ip_type; } ;
struct TYPE_6__ {TYPE_1__ ip_addr; int interface_hndl; scalar_t__ action; } ;
struct TYPE_7__ {int record_entry_count; TYPE_2__ ip_record; } ;
struct be_cmd_set_ip_addr_req {TYPE_3__ ip_params; } ;
struct TYPE_8__ {int subnet_mask; int addr; } ;
struct be_cmd_get_if_info_resp {TYPE_4__ ip_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct beiscsi_hba*,int ,int ,char*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct beiscsi_hba*,struct be_dma_mem*,int ,int) ;
 int FUNC_3 (struct beiscsi_hba*,struct be_dma_mem*,int *,int ) ;

__attribute__((used)) static int
FUNC_4(struct beiscsi_hba *VAR_7,
        struct be_cmd_get_if_info_resp *VAR_8,
        struct iscsi_iface_param_info *VAR_9,
        struct iscsi_iface_param_info *VAR_10,
        uint32_t VAR_11)
{
 struct be_cmd_set_ip_addr_req *VAR_12;
 struct be_dma_mem VAR_13;
 uint32_t VAR_14;
 int VAR_15;

 VAR_15 = FUNC_2(VAR_7, &VAR_13,
     VAR_6,
     sizeof(*VAR_12));
 if (VAR_15)
  return VAR_15;

 VAR_14 = (VAR_9->param == VAR_4) ?
  VAR_1 : VAR_0 ;

 VAR_12 = VAR_13.va;
 VAR_12->ip_params.record_entry_count = 1;
 VAR_12->ip_params.ip_record.action = VAR_11;
 VAR_12->ip_params.ip_record.interface_hndl =
  VAR_7->interface_handle;
 VAR_12->ip_params.ip_record.ip_addr.size_of_structure =
  sizeof(struct be_ip_addr_subnet_format);
 VAR_12->ip_params.ip_record.ip_addr.ip_type = VAR_14;

 if (VAR_11 == VAR_3) {
  FUNC_1(VAR_12->ip_params.ip_record.ip_addr.addr, VAR_9->value,
         VAR_9->len);

  if (VAR_10)
   FUNC_1(VAR_12->ip_params.ip_record.ip_addr.subnet_mask,
          VAR_10->value, VAR_10->len);
 } else {
  FUNC_1(VAR_12->ip_params.ip_record.ip_addr.addr,
         VAR_8->ip_addr.addr, VAR_9->len);

  FUNC_1(VAR_12->ip_params.ip_record.ip_addr.subnet_mask,
         VAR_8->ip_addr.subnet_mask, VAR_9->len);
 }

 VAR_15 = FUNC_3(VAR_7, &VAR_13, ((void*)0), 0);
 if (VAR_15 < 0)
  FUNC_0(VAR_7, VAR_5, VAR_2,
       "BG_%d : Failed to Modify existing IP Address\n");
 return VAR_15;
}
