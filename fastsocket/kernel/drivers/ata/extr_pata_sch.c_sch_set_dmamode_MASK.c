
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct ata_port {TYPE_1__* host; } ;
struct ata_device {unsigned int dma_mode; scalar_t__ devno; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (struct pci_dev*,unsigned int,unsigned int*) ;
 int FUNC_1 (struct pci_dev*,unsigned int,unsigned int) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ata_port *VAR_7, struct ata_device *VAR_8)
{
 unsigned int VAR_9 = VAR_8->dma_mode;
 struct pci_dev *VAR_10 = FUNC_2(VAR_7->host->dev);
 unsigned int VAR_11 = VAR_8->devno ? VAR_1 : VAR_0;
 unsigned int VAR_12;

 FUNC_0(VAR_10, VAR_11, &VAR_12);

 if (VAR_9 >= VAR_6) {

  VAR_12 |= VAR_4;
  VAR_12 &= ~VAR_3;
  VAR_12 |= (VAR_9 - VAR_6) << 16;
 } else {
  VAR_12 &= ~(VAR_4 | VAR_2);
  VAR_12 |= (VAR_9 - VAR_5) << 8;
 }
 FUNC_1(VAR_10, VAR_11, VAR_12);
}
