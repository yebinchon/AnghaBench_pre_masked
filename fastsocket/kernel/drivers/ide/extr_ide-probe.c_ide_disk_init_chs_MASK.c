
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int* id; int cyl; int head; int sect; int bios_cyl; int bios_head; int bios_sect; } ;
typedef TYPE_1__ ide_drive_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_0 (int*) ;

__attribute__((used)) static void FUNC_1(ide_drive_t *VAR_6)
{
 u16 *VAR_7 = VAR_6->id;


 if (!VAR_6->cyl || !VAR_6->head || !VAR_6->sect) {
  VAR_6->cyl = VAR_6->bios_cyl = VAR_7[VAR_3];
  VAR_6->head = VAR_6->bios_head = VAR_7[VAR_4];
  VAR_6->sect = VAR_6->bios_sect = VAR_7[VAR_5];
 }


 if (FUNC_0(VAR_7)) {
  VAR_6->cyl = VAR_7[VAR_0];
  VAR_6->head = VAR_7[VAR_1];
  VAR_6->sect = VAR_7[VAR_2];
 }


 if (VAR_6->head > 16 && VAR_7[VAR_4] && VAR_7[VAR_4] <= 16) {
  VAR_6->cyl = VAR_7[VAR_3];
  VAR_6->head = VAR_7[VAR_4];
  VAR_6->sect = VAR_7[VAR_5];
 }
}
