
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {TYPE_1__* dma_ops; } ;
typedef TYPE_2__ ide_hwif_t ;
struct TYPE_9__ {int dn; TYPE_2__* hwif; } ;
typedef TYPE_3__ ide_drive_t ;
struct TYPE_7__ {int (* dma_sff_read_status ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(ide_drive_t *VAR_0, int VAR_1)
{
 ide_hwif_t *VAR_2 = VAR_0->hwif;
 u8 VAR_3 = VAR_0->dn & 1;
 u8 VAR_4 = VAR_2->dma_ops->dma_sff_read_status(VAR_2);

 if (VAR_1)
  VAR_4 |= (1 << (5 + VAR_3));
 else
  VAR_4 &= ~(1 << (5 + VAR_3));

 FUNC_0(VAR_2, VAR_4);
}
