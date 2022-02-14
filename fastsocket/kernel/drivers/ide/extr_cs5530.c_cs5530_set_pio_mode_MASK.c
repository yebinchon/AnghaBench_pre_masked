
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_3__ {int dn; int hwif; } ;
typedef TYPE_1__ ide_drive_t ;


 unsigned long FUNC_0 (int ) ;
 int ** VAR_0 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_3(ide_drive_t *VAR_1, const u8 VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_1->hwif);
 unsigned int VAR_4 = (FUNC_1(VAR_3 + 4) >> 31) & 1;

 FUNC_2(VAR_0[VAR_4][VAR_2], VAR_3 + ((VAR_1->dn & 1)<<3));
}
