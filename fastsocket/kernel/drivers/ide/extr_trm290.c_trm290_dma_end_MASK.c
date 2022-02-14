
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_5__ {scalar_t__ dma_base; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_2(ide_drive_t *VAR_0)
{
 u16 VAR_1 = FUNC_0(VAR_0->hwif->dma_base + 2);

 FUNC_1(VAR_0, 0);

 return VAR_1 != 0x00ff;
}
