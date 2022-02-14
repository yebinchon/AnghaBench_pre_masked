
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int sect; int head; int cyl; int * id; } ;
typedef TYPE_1__ ide_drive_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;

__attribute__((used)) static void FUNC_0(ide_drive_t *VAR_6)
{
 u16 *VAR_7 = VAR_6->id;

 VAR_7[VAR_0] = VAR_7[VAR_3] = VAR_6->cyl;
 VAR_7[VAR_1] = VAR_7[VAR_4] = VAR_6->head;
 VAR_7[VAR_2] = VAR_7[VAR_5] = VAR_6->sect;
}
