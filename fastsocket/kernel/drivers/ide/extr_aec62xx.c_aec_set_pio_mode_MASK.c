
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_8__ {TYPE_2__* hwif; } ;
typedef TYPE_3__ ide_drive_t ;
struct TYPE_7__ {TYPE_1__* port_ops; } ;
struct TYPE_6__ {int (* set_dma_mode ) (TYPE_3__*,scalar_t__ const) ;} ;


 scalar_t__ const VAR_0 ;
 int FUNC_0 (TYPE_3__*,scalar_t__ const) ;

__attribute__((used)) static void FUNC_1(ide_drive_t *VAR_1, const u8 VAR_2)
{
 VAR_1->hwif->port_ops->set_dma_mode(VAR_1, VAR_2 + VAR_0);
}
