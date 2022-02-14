
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct iscsi_iface_param_info {int len; int value; } ;
struct beiscsi_hba {int dummy; } ;
struct TYPE_2__ {scalar_t__* addr; } ;
struct be_cmd_get_def_gateway_resp {TYPE_1__ ip_addr; } ;
typedef int gtway_addr_set ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct beiscsi_hba*,int ,int ,char*) ;
 int FUNC_1 (struct be_cmd_get_def_gateway_resp*,int ,int) ;
 int FUNC_2 (struct beiscsi_hba*,int ,struct be_cmd_get_def_gateway_resp*) ;
 int FUNC_3 (struct beiscsi_hba*,int *,int ,int ) ;

int FUNC_4(struct beiscsi_hba *VAR_5,
       struct iscsi_iface_param_info *VAR_6)
{
 struct be_cmd_get_def_gateway_resp VAR_7;
 uint8_t *VAR_8;
 int VAR_9;

 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 VAR_9 = FUNC_2(VAR_5, VAR_0, &VAR_7);
 if (VAR_9) {
  FUNC_0(VAR_5, VAR_4, VAR_1,
       "BG_%d : Failed to Get Gateway Addr\n");
  return VAR_9;
 }

 if (VAR_7.ip_addr.addr[0]) {
  VAR_8 = (uint8_t *)&VAR_7.ip_addr.addr;
  VAR_9 = FUNC_3(VAR_5, VAR_8, VAR_3,
          VAR_6->len);
  if (VAR_9) {
   FUNC_0(VAR_5, VAR_4, VAR_1,
        "BG_%d : Failed to clear Gateway Addr Set\n");
   return VAR_9;
  }
 }

 VAR_8 = (uint8_t *)&VAR_6->value;
 VAR_9 = FUNC_3(VAR_5, VAR_8, VAR_2,
         VAR_6->len);

 if (VAR_9)
  FUNC_0(VAR_5, VAR_4, VAR_1,
       "BG_%d : Failed to Set Gateway Addr\n");

 return VAR_9;
}
