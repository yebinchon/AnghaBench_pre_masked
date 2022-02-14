
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ide_taskfile {int lbam; int lbah; int device; int command; int lbal; int nsect; } ;
struct TYPE_3__ {int cyl; int head; int select; int sect; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(ide_drive_t *VAR_1, struct ide_taskfile *VAR_2)
{
 VAR_2->nsect = VAR_1->sect;
 VAR_2->lbal = VAR_1->sect;
 VAR_2->lbam = VAR_1->cyl;
 VAR_2->lbah = VAR_1->cyl >> 8;
 VAR_2->device = (VAR_1->head - 1) | VAR_1->select;
 VAR_2->command = VAR_0;
}
