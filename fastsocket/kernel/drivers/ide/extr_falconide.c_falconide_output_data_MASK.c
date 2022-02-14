
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct ide_cmd {int tf_flags; } ;
struct TYPE_7__ {scalar_t__ media; TYPE_2__* hwif; } ;
typedef TYPE_3__ ide_drive_t ;
struct TYPE_5__ {unsigned long data_addr; } ;
struct TYPE_6__ {TYPE_1__ io_ports; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,void*,unsigned int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,void*,unsigned int) ;

__attribute__((used)) static void FUNC_2(ide_drive_t *VAR_2, struct ide_cmd *VAR_3,
      void *VAR_4, unsigned int VAR_5)
{
 unsigned long VAR_6 = VAR_2->hwif->io_ports.data_addr;

 if (VAR_2->media == VAR_1 && VAR_3 && (VAR_3->tf_flags & VAR_0)) {
  FUNC_0(VAR_6, VAR_4, (VAR_5 + 1) / 2);
  return;
 }

 FUNC_1((u16 *)VAR_6, VAR_4, (VAR_5 + 1) / 2);
}
