
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int mac_addr; int tci; } ;
struct efx_vf {int rx_filter_id; int pci_name; TYPE_1__ addr; int rx_filter_qid; int rx_filter_flags; int rx_filtering; struct efx_nic* efx; } ;
struct efx_nic {int net_dev; } ;
struct efx_filter_spec {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct efx_vf*,int ) ;
 int FUNC_2 (struct efx_filter_spec*,int ,int ,int ) ;
 int FUNC_3 (struct efx_nic*,struct efx_filter_spec*,int) ;
 int FUNC_4 (struct efx_nic*,int ,int) ;
 int FUNC_5 (struct efx_filter_spec*,int,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct efx_nic*,int ,int ,char*,int ,int) ;
 int FUNC_8 (struct efx_nic*,int ,int ,char*,int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct efx_vf *VAR_4)
{
 struct efx_nic *VAR_5 = VAR_4->efx;
 struct efx_filter_spec VAR_6;
 u16 VAR_7;
 int VAR_8;

 if (VAR_4->rx_filter_id != -1) {
  FUNC_4(VAR_5, VAR_0,
       VAR_4->rx_filter_id);
  FUNC_7(VAR_5, VAR_3, VAR_5->net_dev, "Removed vf %s rx filter %d\n",
     VAR_4->pci_name, VAR_4->rx_filter_id);
  VAR_4->rx_filter_id = -1;
 }

 if (!VAR_4->rx_filtering || FUNC_6(VAR_4->addr.mac_addr))
  return;

 VAR_7 = FUNC_9(VAR_4->addr.tci) & VAR_2;
 FUNC_2(&VAR_6, VAR_0,
      VAR_4->rx_filter_flags,
      FUNC_1(VAR_4, VAR_4->rx_filter_qid));
 VAR_8 = FUNC_5(&VAR_6,
          VAR_7 ? VAR_7 : VAR_1,
          VAR_4->addr.mac_addr);
 FUNC_0(VAR_8);

 VAR_8 = FUNC_3(VAR_5, &VAR_6, 1);
 if (VAR_8 < 0) {
  FUNC_8(VAR_5, VAR_3, VAR_5->net_dev,
      "Unable to insert rx filter for vf %s\n",
      VAR_4->pci_name);
 } else {
  FUNC_7(VAR_5, VAR_3, VAR_5->net_dev, "Inserted vf %s rx filter %d\n",
     VAR_4->pci_name, VAR_8);
  VAR_4->rx_filter_id = VAR_8;
 }
}
