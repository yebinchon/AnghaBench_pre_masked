
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_7__ {int select_data; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_8__ {int dn; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int FUNC_0 (TYPE_2__*,int,int) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(ide_drive_t *VAR_0, const u8 VAR_1)
{
 ide_hwif_t *VAR_2 = VAR_0->hwif;
 int VAR_3 = VAR_0->dn;
 u32 VAR_4, VAR_5;
 u8 VAR_6 = VAR_1;
 ide_drive_t *VAR_7;

 VAR_7 = FUNC_1(VAR_0);
 if (VAR_7)
  VAR_6 = FUNC_2(VAR_6, FUNC_0(VAR_7, 255, 4));




 VAR_4 = VAR_3 ? 0x07f00000 : 0x000007f0;
 VAR_5 = ((VAR_6 << 8) | (VAR_1 << 4)) << (VAR_3 ? 16 : 0);
 VAR_2->select_data = (VAR_2->select_data & ~VAR_4) | VAR_5;

}
