
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int mac_addr; int tci; } ;
struct efx_vf {int tx_filter_id; scalar_t__ tx_filter_mode; int pci_name; TYPE_1__ addr; struct efx_nic* efx; } ;
struct efx_nic {int net_dev; } ;
struct efx_filter_spec {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct efx_vf*,int ) ;
 int FUNC_2 (struct efx_filter_spec*,int ) ;
 int FUNC_3 (struct efx_nic*,struct efx_filter_spec*,int) ;
 int FUNC_4 (struct efx_nic*,int ,int) ;
 int FUNC_5 (struct efx_filter_spec*,int,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct efx_nic*,int ,int ,char*,int ,int) ;
 int FUNC_8 (struct efx_nic*,int ,int ,char*,int ) ;
 int FUNC_9 (int ) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_10(struct efx_vf *VAR_7)
{
 struct efx_nic *VAR_8 = VAR_7->efx;
 struct efx_filter_spec VAR_9;
 u16 VAR_10;
 int VAR_11;

 if (VAR_7->tx_filter_id != -1) {
  FUNC_4(VAR_8, VAR_0,
       VAR_7->tx_filter_id);
  FUNC_7(VAR_8, VAR_5, VAR_8->net_dev, "Removed vf %s tx filter %d\n",
     VAR_7->pci_name, VAR_7->tx_filter_id);
  VAR_7->tx_filter_id = -1;
 }

 if (FUNC_6(VAR_7->addr.mac_addr))
  return;




 if (VAR_7->tx_filter_mode == VAR_2 && VAR_6 <= 2)
  VAR_7->tx_filter_mode = VAR_3;

 VAR_10 = FUNC_9(VAR_7->addr.tci) & VAR_4;
 FUNC_2(&VAR_9, FUNC_1(VAR_7, 0));
 VAR_11 = FUNC_5(&VAR_9,
          VAR_10 ? VAR_10 : VAR_1,
          VAR_7->addr.mac_addr);
 FUNC_0(VAR_11);

 VAR_11 = FUNC_3(VAR_8, &VAR_9, 1);
 if (VAR_11 < 0) {
  FUNC_8(VAR_8, VAR_5, VAR_8->net_dev,
      "Unable to migrate tx filter for vf %s\n",
      VAR_7->pci_name);
 } else {
  FUNC_7(VAR_8, VAR_5, VAR_8->net_dev, "Inserted vf %s tx filter %d\n",
     VAR_7->pci_name, VAR_11);
  VAR_7->tx_filter_id = VAR_11;
 }
}
