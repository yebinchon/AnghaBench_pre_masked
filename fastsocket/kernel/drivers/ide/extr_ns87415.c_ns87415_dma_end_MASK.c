
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {scalar_t__ dma_base; TYPE_1__* dma_ops; } ;
typedef TYPE_2__ ide_hwif_t ;
struct TYPE_9__ {TYPE_2__* hwif; } ;
typedef TYPE_3__ ide_drive_t ;
struct TYPE_7__ {int (* dma_sff_read_status ) (TYPE_2__*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(ide_drive_t *VAR_1)
{
 ide_hwif_t *VAR_2 = VAR_1->hwif;
 u8 VAR_3 = 0, VAR_4 = 0;

 VAR_3 = VAR_2->dma_ops->dma_sff_read_status(VAR_2);

 VAR_4 = FUNC_0(VAR_2->dma_base + VAR_0);

 FUNC_2(VAR_4 & ~1, VAR_2->dma_base + VAR_0);

 VAR_4 = FUNC_0(VAR_2->dma_base + VAR_0);
 FUNC_2(VAR_4 | 6, VAR_2->dma_base + VAR_0);

 FUNC_1(VAR_1, 0);


 return (VAR_3 & 7) != 4;
}
