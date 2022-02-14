
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct ata_port {scalar_t__ port_no; TYPE_1__* host; } ;
struct ata_device {scalar_t__ devno; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ata_port *VAR_0, struct ata_device *VAR_1, int VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_3(VAR_0->host->dev);
 u32 VAR_4 = 0;
 u32 VAR_5, VAR_6;
 int VAR_7 = VAR_0->port_no ? 0x74: 0x70;
 unsigned int VAR_8 = (VAR_1->devno != 0);


 FUNC_1(VAR_3, VAR_7, &VAR_6);
 VAR_5 = VAR_6;

 switch(VAR_2)
 {
  case 136:
   VAR_4 = 0x0103;break;
  case 137:
   VAR_4 = 0x0203;break;
  case 138:
   VAR_4 = 0x0808;break;
  case 128:
  case 129:
  case 130:
   VAR_4 = 0x0F0F;break;
  case 131:
   VAR_4 = 0x0202;break;
  case 132:
   VAR_4 = 0x0204;break;
  case 133:
   VAR_4 = 0x0404;break;
  case 134:
   VAR_4 = 0x0508;break;
  case 135:
   VAR_4 = 0x0808;break;
  default:
   FUNC_0();
 }
 VAR_5 &= ~ (0xFFFF << (16 * VAR_8));
 VAR_5 |= (VAR_4 << (16 * VAR_8));

 if (VAR_5 != VAR_6)
  FUNC_2(VAR_3, VAR_7, VAR_5);
}
