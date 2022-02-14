
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int* fcoe_vn_port_mac; int hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct device*) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,char*,...) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 scsi_qla_host_t *VAR_4 = FUNC_2(FUNC_1(VAR_1));

 if (!FUNC_0(VAR_4->hw))
  return FUNC_3(VAR_3, VAR_0, "\n");

 return FUNC_3(VAR_3, VAR_0, "%02x:%02x:%02x:%02x:%02x:%02x\n",
     VAR_4->fcoe_vn_port_mac[5], VAR_4->fcoe_vn_port_mac[4],
     VAR_4->fcoe_vn_port_mac[3], VAR_4->fcoe_vn_port_mac[2],
     VAR_4->fcoe_vn_port_mac[1], VAR_4->fcoe_vn_port_mac[0]);
}
