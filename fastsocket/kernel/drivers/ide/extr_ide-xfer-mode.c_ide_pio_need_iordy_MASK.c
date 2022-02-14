
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_5__ {int id; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_4__ {int port_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__ const) ;

int FUNC_1(ide_drive_t *VAR_1, const u8 VAR_2)
{




 if (VAR_2 == 0 && (VAR_1->hwif->port_flags & VAR_0))
  return 0;
 return FUNC_0(VAR_1->id, VAR_2);
}
