
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {scalar_t__ dma_base; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_5__ {scalar_t__ waiting_for_dma; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(ide_drive_t *VAR_1)
{
 ide_hwif_t *VAR_2 = VAR_1->hwif;
 u8 VAR_3;






 if (VAR_1->waiting_for_dma || VAR_2->dma_base == 0)
  return;


 VAR_3 = FUNC_0(VAR_2->dma_base + VAR_0);

 FUNC_1(VAR_3, VAR_2->dma_base + VAR_0);
}
