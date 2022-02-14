
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct via82cxxx_dev {int via_80w; } ;
struct pci_dev {int dummy; } ;
struct ide_host {struct via82cxxx_dev* host_priv; } ;
struct TYPE_3__ {int channel; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ide_host* FUNC_0 (struct pci_dev*) ;
 struct pci_dev* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static u8 FUNC_3(ide_hwif_t *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_1(VAR_3->dev);
 struct ide_host *VAR_5 = FUNC_0(VAR_4);
 struct via82cxxx_dev *VAR_6 = VAR_5->host_priv;

 if (FUNC_2(VAR_4))
  return VAR_1;

 if ((VAR_6->via_80w >> VAR_3->channel) & 1)
  return VAR_2;
 else
  return VAR_0;
}
