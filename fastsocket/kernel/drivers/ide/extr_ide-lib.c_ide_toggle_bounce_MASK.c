
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct device {int * dma_mask; } ;
struct TYPE_5__ {scalar_t__ media; scalar_t__ queue; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_4__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_3 ;

void FUNC_1(ide_drive_t *VAR_4, int VAR_5)
{
 u64 VAR_6 = VAR_1;

 if (!VAR_2) {
  VAR_6 = VAR_0;
 } else if (VAR_5 && VAR_4->media == VAR_3) {
  struct device *VAR_7 = VAR_4->hwif->dev;

  if (VAR_7 && VAR_7->dma_mask)
   VAR_6 = *VAR_7->dma_mask;
 }

 if (VAR_4->queue)
  FUNC_0(VAR_4->queue, VAR_6);
}
