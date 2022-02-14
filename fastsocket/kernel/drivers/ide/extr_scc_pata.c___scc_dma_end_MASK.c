
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {scalar_t__ dma_base; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_6__ {TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(ide_drive_t *VAR_0)
{
 ide_hwif_t *VAR_1 = VAR_0->hwif;
 u8 VAR_2, VAR_3;


 VAR_3 = FUNC_1(VAR_1->dma_base);

 FUNC_2(VAR_3 & ~1, VAR_1->dma_base);

 VAR_2 = FUNC_0(VAR_1);

 FUNC_2(VAR_2 | 6, VAR_1->dma_base + 4);

 return (VAR_2 & 7) != 4 ? (0x10 | VAR_2) : 0;
}
