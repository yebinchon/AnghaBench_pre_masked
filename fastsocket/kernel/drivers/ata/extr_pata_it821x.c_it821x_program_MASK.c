
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct it821x_dev {scalar_t__ clock_mode; } ;
struct ata_port {int port_no; struct it821x_dev* private_data; TYPE_1__* host; } ;
struct ata_device {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ata_port *VAR_1, struct ata_device *VAR_2, u16 VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_1(VAR_1->host->dev);
 struct it821x_dev *VAR_5 = VAR_1->private_data;
 int VAR_6 = VAR_1->port_no;
 u8 VAR_7;


 if (VAR_5->clock_mode == VAR_0)
  VAR_7 = VAR_3 >> 8;
 else
  VAR_7 = VAR_3 & 0xFF;
 FUNC_0(VAR_4, 0x54 + 4 * VAR_6, VAR_7);
}
