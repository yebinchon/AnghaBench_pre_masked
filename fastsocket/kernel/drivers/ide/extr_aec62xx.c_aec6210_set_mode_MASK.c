
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct ide_host {struct chipset_bus_clock_list_entry* host_priv; } ;
struct chipset_bus_clock_list_entry {int dummy; } ;
struct TYPE_4__ {int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_5__ {int dn; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int const,struct chipset_bus_clock_list_entry*) ;
 int FUNC_3 (int const,struct chipset_bus_clock_list_entry*) ;
 struct ide_host* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int,int*) ;
 int FUNC_6 (struct pci_dev*,int,int*) ;
 int FUNC_7 (struct pci_dev*,int,int) ;
 int FUNC_8 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(ide_drive_t *VAR_0, const u8 VAR_1)
{
 ide_hwif_t *VAR_2 = VAR_0->hwif;
 struct pci_dev *VAR_3 = FUNC_9(VAR_2->dev);
 struct ide_host *VAR_4 = FUNC_4(VAR_3);
 struct chipset_bus_clock_list_entry *VAR_5 = VAR_4->host_priv;
 u16 VAR_6 = 0;
 u8 VAR_7 = 0, VAR_8 = 0;
 u8 VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
 unsigned long VAR_12;

 FUNC_1(VAR_12);

 FUNC_6(VAR_3, 0x40|(2*VAR_0->dn), &VAR_6);
 VAR_9 = FUNC_2(VAR_1, VAR_5);
 VAR_6 = ((VAR_9 & 0xf0) << 4) | (VAR_9 & 0xf);
 FUNC_8(VAR_3, 0x40|(2*VAR_0->dn), VAR_6);

 VAR_10 = 0x00;
 VAR_11 = 0x00;
 FUNC_5(VAR_3, 0x54, &VAR_7);
 VAR_10 = ((0x00 << (2*VAR_0->dn)) | (VAR_7 & ~(3 << (2*VAR_0->dn))));
 VAR_8 = FUNC_3(VAR_1, VAR_5);
 VAR_11 = ((VAR_8 << (2*VAR_0->dn)) | (VAR_10 & ~(3 << (2*VAR_0->dn))));
 FUNC_7(VAR_3, 0x54, VAR_11);
 FUNC_0(VAR_12);
}
