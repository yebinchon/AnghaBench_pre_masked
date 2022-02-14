
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct pci_bits {int member_0; int member_1; int member_2; int member_3; } ;
struct ata_port {int port_no; int cbl; TYPE_1__* host; } ;
struct ata_link {struct ata_port* ap; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ata_link*,unsigned long) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,unsigned int,int*) ;
 int FUNC_3 (struct pci_dev*,struct pci_bits const*) ;
 int FUNC_4 (struct pci_dev*,int,int) ;
 int FUNC_5 (struct pci_dev*,unsigned int,int) ;
 struct pci_dev* FUNC_6 (int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct ata_link *VAR_3, unsigned long VAR_4)
{
 static const struct pci_bits VAR_5[] = {
  { 0x50, 1, 0x04, 0x04 },
  { 0x54, 1, 0x04, 0x04 }
 };
 u16 VAR_6;
 u8 VAR_7;
 struct ata_port *VAR_8 = VAR_3->ap;
 struct pci_dev *VAR_9 = FUNC_6(VAR_8->host->dev);
 unsigned int VAR_10 = 0x50 + 4 * VAR_8->port_no;

 if (!FUNC_3(VAR_9, &VAR_5[VAR_8->port_no]))
  return -VAR_2;


 FUNC_2(VAR_9, VAR_10 + 2, &VAR_6);


 FUNC_5(VAR_9, VAR_10 + 2, VAR_6 | 0x8000);
 FUNC_1(VAR_9, 0x5A, &VAR_7);

 FUNC_5(VAR_9, VAR_10 + 2, VAR_6);

 if (VAR_7 & (2 >> VAR_8->port_no))
  VAR_8->cbl = VAR_0;
 else
  VAR_8->cbl = VAR_1;


 FUNC_4(VAR_9, 0x50 + 4 * VAR_8->port_no, 0x37);
 FUNC_7(100);

 return FUNC_0(VAR_3, VAR_4);
}
