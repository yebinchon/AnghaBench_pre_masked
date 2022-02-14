
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_7__ {scalar_t__ ultra_mask; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_8__ {int* id; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int*) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static u8 FUNC_3(ide_drive_t *VAR_3)
{
 ide_hwif_t *VAR_4 = VAR_3->hwif;
 ide_drive_t *VAR_5 = FUNC_2(VAR_3);
 u16 *VAR_6;
 u8 VAR_7 = VAR_4->ultra_mask;

 if (VAR_5 == ((void*)0))
  goto out;
 VAR_6 = VAR_5->id;

 if (FUNC_1(VAR_6) && FUNC_0(VAR_5) == 0) {
  if ((VAR_6[VAR_0] & 4) &&
      (VAR_6[VAR_2] & 7))
   goto out;
  if (VAR_6[VAR_1] & 7)
   VAR_7 = 0;
 }
out:
 return VAR_7;
}
