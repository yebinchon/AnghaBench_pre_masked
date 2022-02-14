
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * proc; TYPE_1__* hwif; int name; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_4__ {int proc; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(ide_drive_t *VAR_2)
{
 if (VAR_2->proc) {
  FUNC_0(VAR_2->proc, VAR_0);
  FUNC_1(VAR_2->name, VAR_1);
  FUNC_1(VAR_2->name, VAR_2->hwif->proc);
  VAR_2->proc = ((void*)0);
 }
}
