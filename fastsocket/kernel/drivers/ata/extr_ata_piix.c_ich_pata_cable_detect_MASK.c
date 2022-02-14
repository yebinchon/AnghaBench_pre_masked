
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct piix_host_priv {int saved_iocfg; } ;
struct pci_dev {scalar_t__ device; scalar_t__ subsystem_vendor; scalar_t__ subsystem_device; } ;
struct ich_laptop {scalar_t__ device; scalar_t__ subvendor; scalar_t__ subdevice; } ;
struct ata_port {scalar_t__ port_no; TYPE_1__* host; } ;
struct TYPE_2__ {struct piix_host_priv* private_data; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ich_laptop* VAR_5 ;
 struct pci_dev* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct ata_port *VAR_6)
{
 struct pci_dev *VAR_7 = FUNC_0(VAR_6->host->dev);
 struct piix_host_priv *VAR_8 = VAR_6->host->private_data;
 const struct ich_laptop *VAR_9 = &VAR_5[0];
 u8 VAR_10;


 while (VAR_9->device) {
  if (VAR_9->device == VAR_7->device &&
      VAR_9->subvendor == VAR_7->subsystem_vendor &&
      VAR_9->subdevice == VAR_7->subsystem_device)
   return VAR_1;

  VAR_9++;
 }


 VAR_10 = VAR_6->port_no == 0 ? VAR_3 : VAR_4;
 if ((VAR_8->saved_iocfg & VAR_10) == 0)
  return VAR_0;
 return VAR_2;
}
