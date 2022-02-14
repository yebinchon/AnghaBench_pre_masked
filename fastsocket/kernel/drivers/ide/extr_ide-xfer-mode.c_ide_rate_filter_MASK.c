
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_5__ {scalar_t__ pio_mask; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_6__ {TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static u8 FUNC_3(ide_drive_t *VAR_2, u8 VAR_3)
{
 ide_hwif_t *VAR_4 = VAR_2->hwif;
 u8 VAR_5 = FUNC_1(VAR_2, VAR_3);

 if (VAR_5 == 0) {
  if (VAR_4->pio_mask)
   VAR_5 = FUNC_0(VAR_4->pio_mask) - 1 + VAR_0;
  else
   VAR_5 = VAR_1;
 }



 return FUNC_2(VAR_3, VAR_5);
}
