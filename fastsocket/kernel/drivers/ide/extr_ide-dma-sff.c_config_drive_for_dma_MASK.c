
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int host_flags; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_6__ {int* id; scalar_t__ media; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;

int FUNC_1(ide_drive_t *VAR_6)
{
 ide_hwif_t *VAR_7 = VAR_6->hwif;
 u16 *VAR_8 = VAR_6->id;

 if (VAR_6->media != VAR_5) {
  if (VAR_7->host_flags & VAR_4)
   return 0;
 }





 if ((VAR_8[VAR_0] & 4) &&
     ((VAR_8[VAR_3] >> 8) & 0x7f))
  return 1;





 if ((VAR_8[VAR_1] & 0x404) == 0x404 ||
     (VAR_8[VAR_2] & 0x404) == 0x404)
  return 1;


 if (FUNC_0(VAR_6))
  return 1;

 return 0;
}
