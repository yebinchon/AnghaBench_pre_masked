
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int select; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_4__ {scalar_t__ channel; } ;



__attribute__((used)) static void FUNC_0(ide_drive_t *VAR_0)
{
 if (VAR_0->hwif->channel)
  VAR_0->select ^= 0x20;
}
