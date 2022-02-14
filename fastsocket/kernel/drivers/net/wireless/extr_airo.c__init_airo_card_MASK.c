
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pci_dev {int device; } ;
struct net_device {unsigned short irq; int base_addr; char* name; struct airo_info* ml_priv; int dev_addr; TYPE_2__* wireless_data; int * wireless_handlers; int * netdev_ops; } ;
struct device {int dummy; } ;
struct TYPE_7__ {int * spy_data; } ;
struct TYPE_6__ {scalar_t__ len; } ;
struct airo_info {int flags; int wep_capable; int max_wep_idx; int bssListRidLen; struct pci_dev* pci; int pcimem; int pciaux; int shared_dma; int shared; struct net_device* wifidev; int * fids; int bssListNext; int bssListFirst; struct net_device* dev; int bap_read; TYPE_2__ wireless_data; int spy_data; int txq; int * tfm; int thr_wait; TYPE_1__ config; int sem; int aux_lock; scalar_t__ jobs; } ;
struct TYPE_9__ {int ext_priv_flags; } ;
struct TYPE_8__ {int softCap; int softSubVer; int softVer; } ;
typedef TYPE_3__ CapabilityRid ;
typedef int BSSListRidExtra ;
typedef int BSSListRid ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct net_device*,struct device*) ;
 int VAR_16 ;
 int FUNC_1 (struct airo_info*) ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_2 (struct airo_info*) ;
 int FUNC_3 (struct airo_info*) ;
 int FUNC_4 (struct airo_info*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*,...) ;
 struct net_device* FUNC_8 (int,char*,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct airo_info*) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (int *) ;
 struct net_device* FUNC_13 (struct airo_info*,struct net_device*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (struct airo_info*,struct pci_dev*) ;
 int VAR_21 ;
 int FUNC_17 (struct pci_dev*) ;
 int FUNC_18 (int) ;
 TYPE_5__* FUNC_19 (struct net_device*) ;
 struct airo_info* FUNC_20 (struct net_device*) ;
 int FUNC_21 (struct pci_dev*,int ,int ,int ) ;
 scalar_t__ VAR_22 ;
 int FUNC_22 (struct airo_info*,TYPE_3__*,int) ;
 int FUNC_23 (struct net_device*) ;
 int FUNC_24 (int,int) ;
 int FUNC_25 (int,int,int ) ;
 int FUNC_26 (struct net_device*,int) ;
 int FUNC_27 (int *,int) ;
 int FUNC_28 (int ,int*) ;
 int FUNC_29 (struct airo_info*,int ,int) ;
 scalar_t__ FUNC_30 (struct net_device*,struct airo_info*) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (char*,char*) ;
 scalar_t__ FUNC_34 (int ,int*) ;
 int FUNC_35 (struct airo_info*,int ,int) ;
 int FUNC_36 (struct net_device*) ;

__attribute__((used)) static struct net_device *FUNC_37( unsigned short VAR_23, int VAR_24,
        int VAR_25, struct pci_dev *VAR_26,
        struct device *VAR_27 )
{
 struct net_device *VAR_28;
 struct airo_info *VAR_29;
 int VAR_30, VAR_31;
 CapabilityRid VAR_32;


 VAR_28 = FUNC_8(sizeof(*VAR_29), "", VAR_19);
 if (!VAR_28) {
  FUNC_6("", "Couldn't alloc_etherdev");
  return ((void*)0);
 }

 VAR_29 = VAR_28->ml_priv = FUNC_20(VAR_28);
 VAR_29->wifidev = ((void*)0);
 VAR_29->flags = 1 << VAR_6;
 VAR_29->jobs = 0;
 VAR_29->dev = VAR_28;
 if (VAR_26 && (VAR_26->device == 0x5000 || VAR_26->device == 0xa504)) {
  FUNC_5("", "Found an MPI350 card");
  FUNC_28(VAR_5, &VAR_29->flags);
 }
 FUNC_32(&VAR_29->aux_lock);
 FUNC_27(&VAR_29->sem, 1);
 VAR_29->config.len = 0;
 VAR_29->pci = VAR_26;
 FUNC_12 (&VAR_29->thr_wait);
 VAR_29->tfm = ((void*)0);
 FUNC_1(VAR_29);

 if (FUNC_2 (VAR_29))
  goto err_out_free;
 FUNC_4 (VAR_29);

 FUNC_31 (&VAR_29->txq);


 if (FUNC_34(VAR_5,&VAR_29->flags))
  VAR_28->netdev_ops = &VAR_21;
 else
  VAR_28->netdev_ops = &VAR_18;
 VAR_28->wireless_handlers = &VAR_17;
 VAR_29->wireless_data.spy_data = &VAR_29->spy_data;
 VAR_28->wireless_data = &VAR_29->wireless_data;
 VAR_28->irq = VAR_23;
 VAR_28->base_addr = VAR_24;
 FUNC_19(VAR_28)->ext_priv_flags &= ~VAR_9;

 FUNC_0(VAR_28, VAR_27);

 FUNC_26 (VAR_28, 1);
 FUNC_18(400);

 if (!VAR_25) {
  if (!FUNC_25(VAR_28->base_addr, 64, VAR_1)) {
   VAR_31 = -VAR_2;
   FUNC_6(VAR_28->name, "Couldn't request region");
   goto err_out_nets;
  }
 }

 if (FUNC_34(VAR_5,&VAR_29->flags)) {
  if (FUNC_16(VAR_29, VAR_26)) {
   FUNC_6("", "Could not map memory");
   goto err_out_res;
  }
 }

 if (VAR_22) {
  if (FUNC_29(VAR_29, VAR_28->dev_addr, 1) != VAR_16) {
   FUNC_6(VAR_28->name, "MAC could not be enabled" );
   VAR_31 = -VAR_3;
   goto err_out_map;
  }
 } else if (!FUNC_34(VAR_5,&VAR_29->flags)) {
  VAR_29->bap_read = VAR_20;
  FUNC_28(VAR_4, &VAR_29->flags);
 }

 FUNC_33(VAR_28->name, "eth%d");
 VAR_31 = FUNC_23(VAR_28);
 if (VAR_31) {
  FUNC_6(VAR_28->name, "Couldn't register_netdev");
  goto err_out_map;
 }
 VAR_29->wifidev = FUNC_13(VAR_29, VAR_28);
 if (!VAR_29->wifidev)
  goto err_out_reg;

 VAR_31 = FUNC_22(VAR_29, &VAR_32, 1);
 if (VAR_31 != VAR_16) {
  VAR_31 = -VAR_3;
  goto err_out_wifi;
 }

 VAR_29->wep_capable = (VAR_32.softCap & FUNC_9(0x02)) ? 1 : 0;
 VAR_29->max_wep_idx = (VAR_32.softCap & FUNC_9(0x80)) ? 3 : 0;

 FUNC_7(VAR_28->name, "Firmware version %x.%x.%02x",
                 ((FUNC_15(VAR_32.softVer) >> 8) & 0xF),
                 (FUNC_15(VAR_32.softVer) & 0xFF),
                 FUNC_15(VAR_32.softSubVer));



 if (FUNC_15(VAR_32.softVer) > 0x530
  || (FUNC_15(VAR_32.softVer) == 0x530
       && FUNC_15(VAR_32.softSubVer) >= 17)) {
  FUNC_7(VAR_29->dev->name, "WPA supported.");

  FUNC_28(VAR_8, &VAR_29->flags);
  VAR_29->bssListFirst = VAR_14;
  VAR_29->bssListNext = VAR_15;
  VAR_29->bssListRidLen = sizeof(BSSListRid);
 } else {
  FUNC_7(VAR_29->dev->name, "WPA unsupported with firmware "
   "versions older than 5.30.17.");

  VAR_29->bssListFirst = VAR_12;
  VAR_29->bssListNext = VAR_13;
  VAR_29->bssListRidLen = sizeof(BSSListRid) - sizeof(BSSListRidExtra);
 }

 FUNC_28(VAR_7,&VAR_29->flags);
 FUNC_7(VAR_28->name, "MAC enabled %pM", VAR_28->dev_addr);


 if (VAR_22 && !FUNC_34(VAR_5,&VAR_29->flags))
  for( VAR_30 = 0; VAR_30 < VAR_10; VAR_30++ )
   VAR_29->fids[VAR_30] = FUNC_35(VAR_29,VAR_0,VAR_30>=VAR_10/2);

 if (FUNC_30(VAR_28, VAR_28->ml_priv) < 0)
  goto err_out_wifi;

 return VAR_28;

err_out_wifi:
 FUNC_36(VAR_29->wifidev);
 FUNC_11(VAR_29->wifidev);
err_out_reg:
 FUNC_36(VAR_28);
err_out_map:
 if (FUNC_34(VAR_5,&VAR_29->flags) && VAR_26) {
  FUNC_21(VAR_26, VAR_11, VAR_29->shared, VAR_29->shared_dma);
  FUNC_14(VAR_29->pciaux);
  FUNC_14(VAR_29->pcimem);
  FUNC_17(VAR_29->pci);
 }
err_out_res:
 if (!VAR_25)
         FUNC_24( VAR_28->base_addr, 64 );
err_out_nets:
 FUNC_3(VAR_29);
 FUNC_10(VAR_29);
err_out_free:
 FUNC_11(VAR_28);
 return ((void*)0);
}
