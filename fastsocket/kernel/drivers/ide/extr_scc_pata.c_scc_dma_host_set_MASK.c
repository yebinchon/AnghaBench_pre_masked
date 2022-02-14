
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {scalar_t__ dma_base; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_6__ {int dn; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(ide_drive_t *VAR_0, int VAR_1)
{
 ide_hwif_t *VAR_2 = VAR_0->hwif;
 u8 VAR_3 = VAR_0->dn & 1;
 u8 VAR_4 = FUNC_0(VAR_2);

 if (VAR_1)
  VAR_4 |= (1 << (5 + VAR_3));
 else
  VAR_4 &= ~(1 << (5 + VAR_3));

 FUNC_1(VAR_4, VAR_2->dma_base + 4);
}
