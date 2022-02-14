
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_fw_dump {TYPE_2__* tmpl_hdr; int enable; scalar_t__ size; scalar_t__ clr; } ;
struct qlcnic_adapter {int fw_version; int netdev; TYPE_1__* ahw; } ;
struct net_device {int dummy; } ;
struct ethtool_dump {int version; int flag; scalar_t__ len; } ;
struct TYPE_4__ {int drv_cap_mask; scalar_t__ size; } ;
struct TYPE_3__ {struct qlcnic_fw_dump fw_dump; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct qlcnic_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_1, struct ethtool_dump *VAR_2)
{
 struct qlcnic_adapter *VAR_3 = FUNC_1(VAR_1);
 struct qlcnic_fw_dump *VAR_4 = &VAR_3->ahw->fw_dump;

 if (!VAR_4->tmpl_hdr) {
  FUNC_0(VAR_3->netdev, "FW Dump not supported\n");
  return -VAR_0;
 }

 if (VAR_4->clr)
  VAR_2->len = VAR_4->tmpl_hdr->size + VAR_4->size;
 else
  VAR_2->len = 0;

 if (!VAR_4->enable)
  VAR_2->flag = 0;
 else
  VAR_2->flag = VAR_4->tmpl_hdr->drv_cap_mask;

 VAR_2->version = VAR_3->fw_version;
 return 0;
}
