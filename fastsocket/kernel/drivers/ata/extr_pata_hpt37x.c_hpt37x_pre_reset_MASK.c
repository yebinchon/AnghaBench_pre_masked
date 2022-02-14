
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct pci_bits {int member_0; int member_1; int member_2; int member_3; } ;
struct ata_port {size_t port_no; int cbl; TYPE_1__* host; } ;
struct ata_link {struct ata_port* ap; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ata_link*,unsigned long) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,struct pci_bits const*) ;
 int FUNC_3 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_4 (int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct ata_link *VAR_3, unsigned long VAR_4)
{
 u8 VAR_5, VAR_6;
 struct ata_port *VAR_7 = VAR_3->ap;
 struct pci_dev *VAR_8 = FUNC_4(VAR_7->host->dev);
 static const struct pci_bits VAR_9[] = {
  { 0x50, 1, 0x04, 0x04 },
  { 0x54, 1, 0x04, 0x04 }
 };
 if (!FUNC_2(VAR_8, &VAR_9[VAR_7->port_no]))
  return -VAR_2;

 FUNC_1(VAR_8, 0x5B, &VAR_5);
 FUNC_3(VAR_8, 0x5B, VAR_5 & ~0x01);

 FUNC_1(VAR_8, 0x5A, &VAR_6);

 FUNC_3(VAR_8, 0x5B, VAR_5);

 if (VAR_6 & (2 >> VAR_7->port_no))
  VAR_7->cbl = VAR_0;
 else
  VAR_7->cbl = VAR_1;


 FUNC_3(VAR_8, 0x50 + 4 * VAR_7->port_no, 0x37);
 FUNC_5(100);

 return FUNC_0(VAR_3, VAR_4);
}
