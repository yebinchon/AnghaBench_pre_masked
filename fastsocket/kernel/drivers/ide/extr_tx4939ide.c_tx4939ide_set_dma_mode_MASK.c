
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_4__ {int select_data; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_5__ {scalar_t__ dn; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;

__attribute__((used)) static void FUNC_0(ide_drive_t *VAR_2, const u8 VAR_3)
{
 ide_hwif_t *VAR_4 = VAR_2->hwif;
 u32 VAR_5, VAR_6;


 if (VAR_3 >= VAR_1)
  VAR_6 = VAR_3 - VAR_1 + 8;
 else
  VAR_6 = VAR_3 - VAR_0 + 5;
 if (VAR_2->dn) {
  VAR_5 = 0x00f00000;
  VAR_6 <<= 20;
 } else {
  VAR_5 = 0x000000f0;
  VAR_6 <<= 4;
 }
 VAR_4->select_data = (VAR_4->select_data & ~VAR_5) | VAR_6;

}
