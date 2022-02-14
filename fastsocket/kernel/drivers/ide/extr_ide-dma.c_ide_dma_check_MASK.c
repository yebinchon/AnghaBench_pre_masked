
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int host_flags; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_7__ {TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(ide_drive_t *VAR_1)
{
 ide_hwif_t *VAR_2 = VAR_1->hwif;

 if (FUNC_1(VAR_1))
  return 0;


 if (VAR_2->host_flags & VAR_0)
  return -1;

 FUNC_0(VAR_1);

 return -1;
}
