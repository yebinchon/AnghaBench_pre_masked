
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct ata_queued_cmd {struct ata_port* ap; } ;
struct ata_port {scalar_t__ port_no; TYPE_1__* host; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ata_queued_cmd*) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ata_queued_cmd *VAR_4)
{
 struct ata_port *VAR_5 = VAR_4->ap;
 struct pci_dev *VAR_6 = FUNC_3(VAR_5->host->dev);
 u8 VAR_7;
 int VAR_8 = VAR_5->port_no ? VAR_1 : VAR_3;
 int VAR_9 = VAR_5->port_no ? VAR_0 : VAR_2;

 FUNC_0(VAR_4);

 FUNC_1(VAR_6, VAR_9, &VAR_7);
 FUNC_2(VAR_6, VAR_9, VAR_7 | VAR_8);
}
