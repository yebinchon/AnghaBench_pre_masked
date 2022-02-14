
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_4__ {int status; } ;
struct qlcnic_hardware_context {TYPE_2__ idc; int port_config; } ;
struct qlcnic_adapter {int flags; int mac_addr; TYPE_1__* pdev; struct qlcnic_hardware_context* ahw; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*) ;
 int FUNC_5 (struct qlcnic_adapter*,int ,int ,int ) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

int FUNC_8(struct qlcnic_adapter *VAR_9, u8 VAR_10)
{
 struct qlcnic_hardware_context *VAR_11 = VAR_9->ahw;
 int VAR_12 = 0, VAR_13 = 0;
 u32 VAR_14 = VAR_11->port_config;

 FUNC_6(VAR_8, &VAR_11->idc.status);
 if (VAR_10 == VAR_3)
  VAR_11->port_config &= ~VAR_7;
 if (VAR_10 == VAR_1)
  VAR_11->port_config &= ~VAR_6;

 VAR_12 = FUNC_4(VAR_9);
 if (VAR_12) {
  FUNC_1(&VAR_9->pdev->dev,
   "Failed to Clear Loopback Mode = 0x%x.\n",
   VAR_11->port_config);
  VAR_11->port_config = VAR_14;
  FUNC_0(VAR_8, &VAR_11->idc.status);
  return VAR_12;
 }


 do {
  FUNC_2(300);
  if (!(VAR_9->flags & VAR_5))
   FUNC_3(VAR_9);

  if (VAR_13++ > VAR_2) {
   FUNC_1(&VAR_9->pdev->dev,
    "Firmware didn't sent IDC completion AEN\n");
   FUNC_0(VAR_8, &VAR_11->idc.status);
   return -VAR_0;
  }
 } while (FUNC_7(VAR_8, &VAR_11->idc.status));

 FUNC_5(VAR_9, VAR_9->mac_addr, 0,
      VAR_4);
 return VAR_12;
}
