
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct pci_dev {int dummy; } ;
struct ide_timing {int udma; } ;
struct TYPE_7__ {scalar_t__ ultra_mask; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_8__ {scalar_t__ const current_speed; int dn; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ const VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pci_dev*,int ,scalar_t__,struct ide_timing*) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__ const,struct ide_timing*,int,int) ;
 int FUNC_3 (struct ide_timing*,struct ide_timing*,struct ide_timing*,int ) ;
 struct pci_dev* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(ide_drive_t *VAR_5, const u8 VAR_6)
{
 ide_hwif_t *VAR_7 = VAR_5->hwif;
 struct pci_dev *VAR_8 = FUNC_4(VAR_7->dev);
 ide_drive_t *VAR_9 = FUNC_1(VAR_5);
 struct ide_timing VAR_10, VAR_11;
 int VAR_12, VAR_13;
 u8 VAR_14 = VAR_7->ultra_mask;

 VAR_12 = 1000000000 / VAR_4;
 VAR_13 = (VAR_14 == VAR_0) ? VAR_12 : (VAR_12 / 2);

 FUNC_2(VAR_5, VAR_6, &VAR_10, VAR_12, VAR_13);

 if (VAR_9) {
  FUNC_2(VAR_9, VAR_9->current_speed, &VAR_11, VAR_12, VAR_13);
  FUNC_3(&VAR_11, &VAR_10, &VAR_10, VAR_1);
 }

 if (VAR_6 == VAR_2 && VAR_4 <= 33333) VAR_10.udma = 1;
 if (VAR_6 == VAR_3 && VAR_4 <= 33333) VAR_10.udma = 15;

 FUNC_0(VAR_8, VAR_5->dn, VAR_14, &VAR_10);
}
