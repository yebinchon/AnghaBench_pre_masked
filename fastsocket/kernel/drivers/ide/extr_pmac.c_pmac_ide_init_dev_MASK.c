
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int regbase; scalar_t__ mediabay; } ;
typedef TYPE_2__ pmac_ide_hwif_t ;
struct TYPE_6__ {int parent; } ;
struct TYPE_8__ {TYPE_1__ gendev; } ;
typedef TYPE_3__ ide_hwif_t ;
struct TYPE_9__ {int dev_flags; TYPE_3__* hwif; } ;
typedef TYPE_4__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(ide_drive_t *VAR_2)
{
 ide_hwif_t *VAR_3 = VAR_2->hwif;
 pmac_ide_hwif_t *VAR_4 =
  (pmac_ide_hwif_t *)FUNC_1(VAR_3->gendev.parent);

 if (VAR_4->mediabay) {






  VAR_2->dev_flags |= VAR_0;
 }
}
