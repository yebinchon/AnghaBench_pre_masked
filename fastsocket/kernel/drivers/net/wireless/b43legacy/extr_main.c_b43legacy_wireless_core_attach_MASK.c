
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct ssb_bus {scalar_t__ bustype; struct pci_dev* host_pci; } ;
struct pci_dev {int device; } ;
struct TYPE_6__ {int gmode; int radio_on; int type; } ;
struct b43legacy_wldev {TYPE_3__* dev; int restart_work; TYPE_2__ phy; struct b43legacy_wl* wl; } ;
struct b43legacy_wl {struct b43legacy_wldev* current_dev; } ;
struct TYPE_5__ {int revision; } ;
struct TYPE_7__ {TYPE_1__ id; struct ssb_bus* bus; } ;


 int FUNC_0 (int) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct b43legacy_wldev*) ;
 int FUNC_3 (struct b43legacy_wldev*,int) ;
 int FUNC_4 (struct b43legacy_wldev*,int,int) ;
 int FUNC_5 (struct b43legacy_wldev*,int ) ;
 int FUNC_6 (struct b43legacy_wldev*) ;
 int FUNC_7 (struct b43legacy_wldev*,int) ;
 int FUNC_8 (struct b43legacy_wl*,char*) ;
 int FUNC_9 (struct ssb_bus*) ;
 int FUNC_10 (struct ssb_bus*,int ) ;
 int FUNC_11 (TYPE_3__*,int ) ;
 int FUNC_12 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_13(struct b43legacy_wldev *VAR_5)
{
 struct b43legacy_wl *VAR_6 = VAR_5->wl;
 struct ssb_bus *VAR_7 = VAR_5->dev->bus;
 struct pci_dev *VAR_8 = (VAR_7->bustype == VAR_2) ? VAR_7->host_pci : ((void*)0);
 int VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;
 u32 VAR_12;
 VAR_9 = FUNC_10(VAR_7, 0);
 if (VAR_9) {
  FUNC_8(VAR_6, "Bus powerup failed\n");
  goto out;
 }

 if (VAR_5->dev->id.revision >= 5) {
  u32 VAR_13;

  VAR_13 = FUNC_12(VAR_5->dev, VAR_3);
  VAR_11 = !!(VAR_13 & VAR_0);
  if (!VAR_11)
   VAR_10 = 1;
 } else if (VAR_5->dev->id.revision == 4)
  VAR_11 = 1;
 else
  VAR_10 = 1;

 VAR_5->phy.gmode = (VAR_11 || VAR_10);
 VAR_5->phy.radio_on = 1;
 VAR_12 = VAR_5->phy.gmode ? VAR_1 : 0;
 FUNC_7(VAR_5, VAR_12);

 VAR_9 = FUNC_2(VAR_5);
 if (VAR_9)
  goto err_powerdown;

 if (!VAR_8 ||
     (VAR_8->device != 0x4312 &&
      VAR_8->device != 0x4319 &&
      VAR_8->device != 0x4324)) {

  VAR_10 = 0;
  VAR_11 = 0;
  switch (VAR_5->phy.type) {
  case 129:
   VAR_10 = 1;
   break;
  case 128:
   VAR_11 = 1;
   break;
  default:
   FUNC_0(1);
  }
 }
 VAR_5->phy.gmode = (VAR_11 || VAR_10);
 VAR_12 = VAR_5->phy.gmode ? VAR_1 : 0;
 FUNC_7(VAR_5, VAR_12);

 VAR_9 = FUNC_6(VAR_5);
 if (VAR_9)
  goto err_powerdown;
 VAR_9 = FUNC_4(VAR_5, VAR_10, VAR_11);
 if (VAR_9)
  goto err_powerdown;


 if (!VAR_6->current_dev)
  VAR_6->current_dev = VAR_5;
 FUNC_1(&VAR_5->restart_work, VAR_4);

 FUNC_3(VAR_5, 1);
 FUNC_5(VAR_5, 0);
 FUNC_11(VAR_5->dev, 0);
 FUNC_9(VAR_7);

out:
 return VAR_9;

err_powerdown:
 FUNC_9(VAR_7);
 return VAR_9;
}
