
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ide_port_ops {int (* set_pio_mode ) (TYPE_2__*,scalar_t__ const) ;int * set_dma_mode; } ;
struct TYPE_8__ {int host_flags; struct ide_port_ops* port_ops; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_9__ {TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ const VAR_2 ;
 int FUNC_0 (TYPE_2__*,scalar_t__ const) ;
 int FUNC_1 (TYPE_2__*,scalar_t__ const) ;
 int FUNC_2 (TYPE_2__*,scalar_t__ const) ;
 int FUNC_3 (TYPE_2__*,scalar_t__ const) ;

int FUNC_4(ide_drive_t *VAR_3, const u8 VAR_4)
{
 ide_hwif_t *VAR_5 = VAR_3->hwif;
 const struct ide_port_ops *VAR_6 = VAR_5->port_ops;

 if (VAR_5->host_flags & VAR_0)
  return 0;

 if (VAR_6 == ((void*)0) || VAR_6->set_pio_mode == ((void*)0))
  return -1;





 if (VAR_6->set_dma_mode == ((void*)0)) {
  VAR_6->set_pio_mode(VAR_3, VAR_4 - VAR_2);
  return 0;
 }

 if (VAR_5->host_flags & VAR_1) {
  if (FUNC_0(VAR_3, VAR_4))
   return -1;
  VAR_6->set_pio_mode(VAR_3, VAR_4 - VAR_2);
  return 0;
 } else {
  VAR_6->set_pio_mode(VAR_3, VAR_4 - VAR_2);
  return FUNC_0(VAR_3, VAR_4);
 }
}
