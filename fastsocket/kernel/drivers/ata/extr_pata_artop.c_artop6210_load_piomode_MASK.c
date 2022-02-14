
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int member_0; int member_1; int member_2; int member_3; int member_4; } ;
typedef TYPE_2__ u16 ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {int devno; } ;
struct TYPE_4__ {int dev; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct pci_dev*,int,TYPE_2__ const) ;
 struct pci_dev* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ata_port *VAR_1, struct ata_device *VAR_2, unsigned int VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_1(VAR_1->host->dev);
 int VAR_5 = VAR_2->devno + 2 * VAR_1->port_no;
 const u16 VAR_6[2][5] = {
  { 0x0000, 0x000A, 0x0008, 0x0303, 0x0301 },
  { 0x0700, 0x070A, 0x0708, 0x0403, 0x0401 }

 };

 FUNC_0(VAR_4, 0x40 + 2 * VAR_5, VAR_6[VAR_0][VAR_3]);
}
