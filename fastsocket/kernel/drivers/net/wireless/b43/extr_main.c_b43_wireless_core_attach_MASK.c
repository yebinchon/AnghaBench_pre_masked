
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int device; } ;
struct TYPE_9__ {int gmode; int radio_on; int type; TYPE_3__* ops; } ;
struct b43_wldev {TYPE_4__ phy; int restart_work; TYPE_2__* dev; struct b43_wl* wl; } ;
struct b43_wl {struct b43_wldev* current_dev; } ;
struct TYPE_10__ {TYPE_1__* bus; } ;
struct TYPE_8__ {int (* switch_analog ) (struct b43_wldev*,int ) ;} ;
struct TYPE_7__ {int bus_type; int core_rev; TYPE_5__* sdev; int bdev; } ;
struct TYPE_6__ {scalar_t__ bustype; struct pci_dev* host_pci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*,int ) ;
 int VAR_8 ;
 int FUNC_4 (struct b43_wldev*,int ) ;
 int FUNC_5 (struct b43_wldev*) ;
 int FUNC_6 (struct b43_wldev*) ;
 int FUNC_7 (struct b43_wldev*) ;
 int FUNC_8 (struct b43_wldev*,int,int) ;
 int FUNC_9 (struct b43_wldev*) ;
 int FUNC_10 (struct b43_wldev*,int) ;
 int FUNC_11 (struct b43_wl*,char*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (TYPE_5__*,int ) ;
 int FUNC_14 (struct b43_wldev*,int ) ;

__attribute__((used)) static int FUNC_15(struct b43_wldev *VAR_9)
{
 struct b43_wl *VAR_10 = VAR_9->wl;
 struct pci_dev *VAR_11 = ((void*)0);
 int VAR_12;
 u32 VAR_13;
 bool VAR_14 = 0, VAR_15 = 0;
 VAR_12 = FUNC_3(VAR_9, 0);
 if (VAR_12) {
  FUNC_11(VAR_10, "Bus powerup failed\n");
  goto out;
 }


 switch (VAR_9->dev->bus_type) {
 }

 VAR_9->phy.gmode = VAR_14;
 VAR_9->phy.radio_on = 1;
 FUNC_10(VAR_9, VAR_9->phy.gmode);

 VAR_12 = FUNC_7(VAR_9);
 if (VAR_12)
  goto err_powerdown;

 if (!VAR_11 ||
     (VAR_11->device != 0x4312 &&
      VAR_11->device != 0x4319 && VAR_11->device != 0x4324)) {

  VAR_14 = 0;
  VAR_15 = 0;
  switch (VAR_9->phy.type) {
  case 133:
   VAR_15 = 1;
   break;
  case 129:



  case 132:
  case 128:
  case 131:
  case 130:
   VAR_14 = 1;
   break;
  default:
   FUNC_0(1);
  }
 }
 if (VAR_9->phy.type == 133) {

  FUNC_11(VAR_10, "IEEE 802.11a devices are unsupported\n");
  VAR_12 = -VAR_5;
  goto err_powerdown;
 }
 if (1 ) {

  if (VAR_9->phy.type != 128 &&
      VAR_9->phy.type != 129) {
   VAR_14 = 1;
   VAR_15 = 0;
  }
 }

 VAR_12 = FUNC_5(VAR_9);
 if (VAR_12)
  goto err_powerdown;

 VAR_9->phy.gmode = VAR_14;
 FUNC_10(VAR_9, VAR_9->phy.gmode);

 VAR_12 = FUNC_9(VAR_9);
 if (VAR_12)
  goto err_phy_free;
 VAR_12 = FUNC_8(VAR_9, VAR_14, VAR_15);
 if (VAR_12)
  goto err_phy_free;


 if (!VAR_10->current_dev)
  VAR_10->current_dev = VAR_9;
 FUNC_1(&VAR_9->restart_work, VAR_8);

 VAR_9->phy.ops->switch_analog(VAR_9, 0);
 FUNC_4(VAR_9, 0);
 FUNC_2(VAR_9);

out:
 return VAR_12;

err_phy_free:
 FUNC_6(VAR_9);
err_powerdown:
 FUNC_2(VAR_9);
 return VAR_12;
}
