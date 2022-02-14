
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int device; } ;
struct ata_port {scalar_t__ port_no; TYPE_1__* host; } ;
struct ata_link {scalar_t__ pmp; struct ata_port* ap; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 struct pci_dev* FUNC_1 (int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct ata_link *VAR_5, unsigned int VAR_6)
{
 struct ata_port *VAR_7 = VAR_5->ap;
 struct pci_dev *VAR_8 = FUNC_1(VAR_7->host->dev);
 unsigned int VAR_9 = VAR_4 + (4 * VAR_6);
 u8 VAR_10;

 if (VAR_7->port_no) {
  switch (VAR_8->device) {
  case 0x0180:
  case 0x0181:
   FUNC_0(VAR_8, VAR_2, &VAR_10);
   if ((VAR_10 & VAR_3) == 0)
    VAR_9 += VAR_0;
   break;

  case 0x0182:
  case 0x0183:
  case 0x1182:
   VAR_9 += VAR_1;
   break;
  }
 }
 if (VAR_5->pmp)
  VAR_9 += 0x10;

 return VAR_9;
}
