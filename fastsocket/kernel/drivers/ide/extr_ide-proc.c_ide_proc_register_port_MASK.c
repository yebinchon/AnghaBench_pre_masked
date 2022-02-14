
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ proc; int name; } ;
typedef TYPE_1__ ide_hwif_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;

void FUNC_2(ide_hwif_t *VAR_2)
{
 if (!VAR_2->proc) {
  VAR_2->proc = FUNC_1(VAR_2->name, VAR_1);

  if (!VAR_2->proc)
   return;

  FUNC_0(VAR_2->proc, VAR_0, VAR_2);
 }
}
