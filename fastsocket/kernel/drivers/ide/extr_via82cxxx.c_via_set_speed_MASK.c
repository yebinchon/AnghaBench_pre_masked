
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct via82cxxx_dev {TYPE_1__* via_config; } ;
struct pci_dev {int dummy; } ;
struct ide_timing {int udma; int recover; int active; int rec8b; int act8b; int setup; } ;
struct ide_host {struct via82cxxx_dev* host_priv; } ;
struct TYPE_5__ {int dev; } ;
typedef TYPE_2__ ide_hwif_t ;
struct TYPE_4__ {int flags; int udma_mask; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int) ;
 struct ide_host* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 int FUNC_3 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(ide_hwif_t *VAR_5, u8 VAR_6, struct ide_timing *VAR_7)
{
 struct pci_dev *VAR_8 = FUNC_4(VAR_5->dev);
 struct ide_host *VAR_9 = FUNC_1(VAR_8);
 struct via82cxxx_dev *VAR_10 = VAR_9->host_priv;
 u8 VAR_11;

 if (~VAR_10->via_config->flags & VAR_2) {
  FUNC_2(VAR_8, VAR_1, &VAR_11);
  VAR_11 = (VAR_11 & ~(3 << ((3 - VAR_6) << 1))) | ((FUNC_0(VAR_7->setup, 1, 4) - 1) << ((3 - VAR_6) << 1));
  FUNC_3(VAR_8, VAR_1, VAR_11);
 }

 FUNC_3(VAR_8, VAR_0 + (1 - (VAR_6 >> 1)),
  ((FUNC_0(VAR_7->act8b, 1, 16) - 1) << 4) | (FUNC_0(VAR_7->rec8b, 1, 16) - 1));

 FUNC_3(VAR_8, VAR_3 + (3 - VAR_6),
  ((FUNC_0(VAR_7->active, 1, 16) - 1) << 4) | (FUNC_0(VAR_7->recover, 1, 16) - 1));

 switch (VAR_10->via_config->udma_mask) {
 case 131: VAR_11 = VAR_7->udma ? (0xe0 | (FUNC_0(VAR_7->udma, 2, 5) - 2)) : 0x03; break;
 case 130: VAR_11 = VAR_7->udma ? (0xe8 | (FUNC_0(VAR_7->udma, 2, 9) - 2)) : 0x0f; break;
 case 129: VAR_11 = VAR_7->udma ? (0xe0 | (FUNC_0(VAR_7->udma, 2, 9) - 2)) : 0x07; break;
 case 128: VAR_11 = VAR_7->udma ? (0xe0 | (FUNC_0(VAR_7->udma, 2, 9) - 2)) : 0x07; break;
 default: return;
 }

 FUNC_3(VAR_8, VAR_4 + (3 - VAR_6), VAR_11);
}
