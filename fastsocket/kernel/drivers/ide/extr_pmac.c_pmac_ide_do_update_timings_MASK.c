
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ kind; } ;
typedef TYPE_2__ pmac_ide_hwif_t ;
struct TYPE_8__ {int parent; } ;
struct TYPE_10__ {TYPE_1__ gendev; } ;
typedef TYPE_3__ ide_hwif_t ;
struct TYPE_11__ {TYPE_3__* hwif; } ;
typedef TYPE_4__ ide_drive_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_3(ide_drive_t *VAR_3)
{
 ide_hwif_t *VAR_4 = VAR_3->hwif;
 pmac_ide_hwif_t *VAR_5 =
  (pmac_ide_hwif_t *)FUNC_0(VAR_4->gendev.parent);

 if (VAR_5->kind == VAR_1 ||
     VAR_5->kind == VAR_2 ||
     VAR_5->kind == VAR_0)
  FUNC_2(VAR_3);
 else
  FUNC_1(VAR_3);
}
