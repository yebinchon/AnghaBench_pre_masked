
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {scalar_t__ dma_base; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_7__ {TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(ide_drive_t *VAR_2)
{
 ide_hwif_t *VAR_3 = VAR_2->hwif;
 u8 VAR_4 = FUNC_2(VAR_3->dma_base + VAR_1);

 if (VAR_4 & VAR_0) {

  FUNC_3(20);
  VAR_4 = FUNC_2(VAR_3->dma_base + VAR_1);
  if (VAR_4 & VAR_0)
   FUNC_0(VAR_2);
 }
 return FUNC_1(VAR_2);
}
