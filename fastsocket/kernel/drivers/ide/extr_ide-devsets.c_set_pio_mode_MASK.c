
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct ide_port_ops {int (* set_pio_mode ) (TYPE_2__*,int) ;} ;
struct TYPE_9__ {int host_flags; int lock; struct ide_port_ops* port_ops; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_10__ {int dev_flags; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_7(ide_drive_t *VAR_5, int VAR_6)
{
 ide_hwif_t *VAR_7 = VAR_5->hwif;
 const struct ide_port_ops *VAR_8 = VAR_7->port_ops;

 if (VAR_6 < 0 || VAR_6 > 255)
  return -VAR_0;

 if (VAR_8 == ((void*)0) || VAR_8->set_pio_mode == ((void*)0) ||
     (VAR_7->host_flags & VAR_3))
  return -VAR_1;

 if (FUNC_2(VAR_5->hwif, VAR_6)) {
  if (VAR_6 == 8 || VAR_6 == 9) {
   unsigned long VAR_9;


   FUNC_3(&VAR_7->lock, VAR_9);
   VAR_8->set_pio_mode(VAR_5, VAR_6);
   FUNC_4(&VAR_7->lock, VAR_9);
  } else
   VAR_8->set_pio_mode(VAR_5, VAR_6);
 } else {
  int VAR_10 = !!(VAR_5->dev_flags & VAR_2);

  FUNC_1(VAR_5, VAR_6);

  if (VAR_7->host_flags & VAR_4) {
   if (VAR_10)
    FUNC_0(VAR_5);
  }
 }

 return 0;
}
