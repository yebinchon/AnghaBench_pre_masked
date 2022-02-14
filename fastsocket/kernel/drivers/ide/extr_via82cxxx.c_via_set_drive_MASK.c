
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct via82cxxx_dev {TYPE_1__* via_config; } ;
struct pci_dev {int dummy; } ;
struct ide_timing {int dummy; } ;
struct ide_host {struct via82cxxx_dev* host_priv; } ;
struct TYPE_10__ {int dev; } ;
typedef TYPE_2__ ide_hwif_t ;
struct TYPE_11__ {int dn; int const current_speed; TYPE_2__* hwif; } ;
typedef TYPE_3__ ide_drive_t ;
struct TYPE_9__ {int udma_mask; } ;






 int VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int const,struct ide_timing*,unsigned int,unsigned int) ;
 int FUNC_2 (struct ide_timing*,struct ide_timing*,struct ide_timing*,int ) ;
 struct ide_host* FUNC_3 (struct pci_dev*) ;
 struct pci_dev* FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_2__*,int ,struct ide_timing*) ;

__attribute__((used)) static void FUNC_6(ide_drive_t *VAR_2, const u8 VAR_3)
{
 ide_hwif_t *VAR_4 = VAR_2->hwif;
 ide_drive_t *VAR_5 = FUNC_0(VAR_2);
 struct pci_dev *VAR_6 = FUNC_4(VAR_4->dev);
 struct ide_host *VAR_7 = FUNC_3(VAR_6);
 struct via82cxxx_dev *VAR_8 = VAR_7->host_priv;
 struct ide_timing VAR_9, VAR_10;
 unsigned int VAR_11, VAR_12;

 VAR_11 = 1000000000 / VAR_1;

 switch (VAR_8->via_config->udma_mask) {
 case 131: VAR_12 = VAR_11; break;
 case 130: VAR_12 = VAR_11/2; break;
 case 129: VAR_12 = VAR_11/3; break;
 case 128: VAR_12 = VAR_11/4; break;
 default: VAR_12 = VAR_11;
 }

 FUNC_1(VAR_2, VAR_3, &VAR_9, VAR_11, VAR_12);

 if (VAR_5) {
  FUNC_1(VAR_5, VAR_5->current_speed, &VAR_10, VAR_11, VAR_12);
  FUNC_2(&VAR_10, &VAR_9, &VAR_9, VAR_0);
 }

 FUNC_5(VAR_4, VAR_2->dn, &VAR_9);
}
