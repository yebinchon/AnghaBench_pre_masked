
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* hwif; int dev_flags; } ;
typedef TYPE_3__ ide_drive_t ;
struct TYPE_8__ {TYPE_1__* dma_ops; } ;
struct TYPE_7__ {int (* dma_host_set ) (TYPE_3__*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;

void FUNC_2(ide_drive_t *VAR_1)
{
 VAR_1->dev_flags &= ~VAR_0;
 FUNC_0(VAR_1, 0);

 VAR_1->hwif->dma_ops->dma_host_set(VAR_1, 0);
}
