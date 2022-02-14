
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ide_port_ops {int * set_dma_mode; } ;
struct TYPE_7__ {int host_flags; struct ide_port_ops* port_ops; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_8__ {TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;

int FUNC_4(ide_drive_t *VAR_3, u8 VAR_4)
{
 ide_hwif_t *VAR_5 = VAR_3->hwif;
 const struct ide_port_ops *VAR_6 = VAR_5->port_ops;

 if (VAR_6 == ((void*)0) || VAR_6->set_dma_mode == ((void*)0) ||
     (VAR_5->host_flags & VAR_0))
  return -1;

 VAR_4 = FUNC_1(VAR_3, VAR_4);

 FUNC_0(VAR_4 < VAR_1);

 if (VAR_4 >= VAR_1 && VAR_4 <= VAR_2)
  return FUNC_3(VAR_3, VAR_4);

 return FUNC_2(VAR_3, VAR_4);
}
