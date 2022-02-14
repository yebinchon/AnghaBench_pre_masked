
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_9__ {scalar_t__ kind; int * timings; } ;
typedef TYPE_2__ pmac_ide_hwif_t ;
struct TYPE_8__ {int parent; } ;
struct TYPE_10__ {TYPE_1__ gendev; } ;
typedef TYPE_3__ ide_hwif_t ;
struct TYPE_11__ {int dn; TYPE_3__* hwif; } ;
typedef TYPE_4__ ide_drive_t ;


 size_t const VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,scalar_t__,int *,int *,size_t const) ;
 int FUNC_3 (int *,size_t const) ;
 int FUNC_4 (int *,int *,size_t const) ;
 int FUNC_5 (int *,int *,size_t const) ;

__attribute__((used)) static void FUNC_6(ide_drive_t *VAR_5, const u8 VAR_6)
{
 ide_hwif_t *VAR_7 = VAR_5->hwif;
 pmac_ide_hwif_t *VAR_8 =
  (pmac_ide_hwif_t *)FUNC_0(VAR_7->gendev.parent);
 int VAR_9 = 0;
 u32 *VAR_10, *VAR_11, VAR_12[2];
 u8 VAR_13 = VAR_5->dn & 1;

 VAR_10 = &VAR_8->timings[VAR_13];
 VAR_11 = &VAR_8->timings[VAR_13+2];


 VAR_12[0] = *VAR_10;
 VAR_12[1] = *VAR_11;

 if (VAR_6 >= VAR_0) {
  if (VAR_8->kind == VAR_2)
   VAR_9 = FUNC_3(&VAR_12[0], VAR_6);
  else if (VAR_8->kind == VAR_4
    || VAR_8->kind == VAR_1)
   VAR_9 = FUNC_4(&VAR_12[0], &VAR_12[1], VAR_6);
  else if (VAR_8->kind == VAR_3)
   VAR_9 = FUNC_5(&VAR_12[0], &VAR_12[1], VAR_6);
  else
   VAR_9 = -1;
 } else
  FUNC_2(VAR_5, VAR_8->kind, &VAR_12[0], &VAR_12[1], VAR_6);

 if (VAR_9)
  return;


 *VAR_10 = VAR_12[0];
 *VAR_11 = VAR_12[1];

 FUNC_1(VAR_5);
}
