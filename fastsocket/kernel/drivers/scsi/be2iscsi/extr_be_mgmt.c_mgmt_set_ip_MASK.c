
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct iscsi_iface_param_info {scalar_t__ param; int len; } ;
struct beiscsi_hba {int interface_handle; } ;
struct be_dma_mem {struct be_cmd_set_dhcp_req* va; } ;
struct be_cmd_set_dhcp_req {int retry_count; scalar_t__ ip_type; int interface_hndl; int flags; } ;
struct be_cmd_rel_dhcp_req {int retry_count; scalar_t__ ip_type; int interface_hndl; int flags; } ;
struct TYPE_2__ {scalar_t__* addr; } ;
struct be_cmd_get_if_info_resp {TYPE_1__ ip_addr; scalar_t__ dhcp_state; } ;
struct be_cmd_get_def_gateway_resp {TYPE_1__ ip_addr; scalar_t__ dhcp_state; } ;
typedef int if_info ;
typedef int gtway_addr_set ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct beiscsi_hba*,int ,int ,char*) ;
 int FUNC_1 (struct be_cmd_get_if_info_resp*,int ,int) ;
 int FUNC_2 (struct beiscsi_hba*,struct be_dma_mem*,int ,int) ;
 int FUNC_3 (struct beiscsi_hba*,struct be_dma_mem*,int *,int ) ;
 scalar_t__ FUNC_4 (struct beiscsi_hba*) ;
 int FUNC_5 (struct beiscsi_hba*,scalar_t__,struct be_cmd_get_if_info_resp*) ;
 int FUNC_6 (struct beiscsi_hba*,scalar_t__,struct be_cmd_get_if_info_resp*) ;
 int FUNC_7 (struct beiscsi_hba*,int *,int ,int ) ;
 int FUNC_8 (struct beiscsi_hba*,struct be_cmd_get_if_info_resp*,struct iscsi_iface_param_info*,struct iscsi_iface_param_info*,int ) ;

int FUNC_9(struct beiscsi_hba *VAR_15,
  struct iscsi_iface_param_info *VAR_16,
  struct iscsi_iface_param_info *VAR_17,
  uint32_t VAR_18)
{
 struct be_cmd_get_def_gateway_resp VAR_19;
 struct be_cmd_get_if_info_resp VAR_20;
 struct be_cmd_set_dhcp_req *VAR_21;
 struct be_cmd_rel_dhcp_req *VAR_22;
 struct be_dma_mem VAR_23;
 uint8_t *VAR_24;
 uint32_t VAR_25;
 int VAR_26;

 if (FUNC_4(VAR_15))
  return -VAR_5;

 FUNC_1(&VAR_20, 0, sizeof(VAR_20));
 VAR_25 = (VAR_16->param == VAR_11) ?
  VAR_2 : VAR_1 ;

 VAR_26 = FUNC_6(VAR_15, VAR_25, &VAR_20);
 if (VAR_26)
  return VAR_26;

 if (VAR_18 == VAR_10) {
  if (VAR_20.dhcp_state) {
   FUNC_0(VAR_15, VAR_12, VAR_3,
        "BG_%d : DHCP Already Enabled\n");
   return 0;
  }




  VAR_16->len = (VAR_16->param == VAR_11) ?
    VAR_9 : VAR_8;

 } else {
  if (VAR_20.dhcp_state) {

   FUNC_1(&VAR_20, 0, sizeof(VAR_20));
   VAR_26 = FUNC_2(VAR_15, &VAR_23,
    VAR_14,
    sizeof(*VAR_22));

   if (VAR_26)
    return VAR_26;

   VAR_22 = VAR_23.va;
   VAR_22->interface_hndl = VAR_15->interface_handle;
   VAR_22->ip_type = VAR_25;

   VAR_26 = FUNC_3(VAR_15, &VAR_23, ((void*)0), 0);
   if (VAR_26 < 0) {
    FUNC_0(VAR_15, VAR_12,
         VAR_3,
         "BG_%d : Failed to Delete existing dhcp\n");
    return VAR_26;
   }
  }
 }


 if (VAR_20.ip_addr.addr[0]) {
  VAR_26 = FUNC_8(VAR_15, &VAR_20, VAR_16, ((void*)0),
        VAR_7);
  if (VAR_26)
   return VAR_26;
 }


 if (VAR_18 == VAR_10) {
  FUNC_1(&VAR_19, 0, sizeof(VAR_19));
  VAR_26 = FUNC_5(VAR_15, VAR_1, &VAR_19);
  if (VAR_26) {
   FUNC_0(VAR_15, VAR_12, VAR_3,
        "BG_%d : Failed to Get Gateway Addr\n");
   return VAR_26;
  }

  if (VAR_19.ip_addr.addr[0]) {
   VAR_24 = (uint8_t *)&VAR_19.ip_addr.addr;
   VAR_26 = FUNC_7(VAR_15, VAR_24,
       VAR_7, VAR_8);

   if (VAR_26) {
    FUNC_0(VAR_15, VAR_12,
         VAR_3,
         "BG_%d : Failed to clear Gateway Addr Set\n");
    return VAR_26;
   }
  }
 }


 if (VAR_18 == VAR_10) {
  VAR_26 = FUNC_2(VAR_15, &VAR_23,
   VAR_13,
   sizeof(*VAR_21));
  if (VAR_26)
   return VAR_26;

  VAR_21 = VAR_23.va;
  VAR_21->flags = VAR_4;
  VAR_21->retry_count = 1;
  VAR_21->interface_hndl = VAR_15->interface_handle;
  VAR_21->ip_type = VAR_0;

  return FUNC_3(VAR_15, &VAR_23, ((void*)0), 0);
 } else {
  return FUNC_8(VAR_15, &VAR_20, VAR_16,
          VAR_17, VAR_6);
 }

 return VAR_26;
}
