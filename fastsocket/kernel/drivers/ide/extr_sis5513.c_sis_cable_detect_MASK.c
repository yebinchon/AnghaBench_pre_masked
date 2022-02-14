
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sis_laptop {scalar_t__ device; scalar_t__ subvendor; scalar_t__ subdevice; } ;
struct pci_dev {scalar_t__ device; scalar_t__ subsystem_vendor; scalar_t__ subsystem_device; } ;
struct TYPE_3__ {scalar_t__ channel; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 struct sis_laptop* VAR_6 ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static u8 FUNC_3(ide_hwif_t *VAR_7)
{
 struct pci_dev *VAR_8 = FUNC_2(VAR_7->dev);
 const struct sis_laptop *VAR_9 = &VAR_6[0];
 u8 VAR_10 = 0;

 while (VAR_9->device) {
  if (VAR_9->device == VAR_8->device &&
      VAR_9->subvendor == VAR_8->subsystem_vendor &&
      VAR_9->subdevice == VAR_8->subsystem_device)
   return VAR_3;
  VAR_9++;
 }

 if (VAR_5 >= VAR_0) {
  u16 VAR_11 = 0;
  u16 VAR_12 = VAR_7->channel ? 0x52: 0x50;
  FUNC_1(VAR_8, VAR_12, &VAR_11);
  VAR_10 = (VAR_11 & 0x8000) ? 0 : 1;
 } else if (VAR_5 >= VAR_1) {
  u8 VAR_13 = 0;
  u8 VAR_14 = VAR_7->channel ? 0x20 : 0x10;
  FUNC_0(VAR_8, 0x48, &VAR_13);
  VAR_10 = (VAR_13 & VAR_14) ? 0 : 1;
 }

 return VAR_10 ? VAR_4 : VAR_2;
}
