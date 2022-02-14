
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct ide_dma_ops {scalar_t__ (* dma_setup ) (TYPE_2__*,struct ide_cmd*) ;scalar_t__ (* dma_check ) (TYPE_2__*,struct ide_cmd*) ;} ;
struct ide_cmd {int dummy; } ;
struct TYPE_10__ {int dev_flags; int waiting_for_dma; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_9__ {struct ide_dma_ops* dma_ops; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,struct ide_cmd*) ;
 int FUNC_1 (TYPE_2__*,struct ide_cmd*) ;
 int FUNC_2 (TYPE_2__*,struct ide_cmd*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,struct ide_cmd*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,struct ide_cmd*) ;

int FUNC_5(ide_drive_t *VAR_1, struct ide_cmd *VAR_2)
{
 const struct ide_dma_ops *VAR_3 = VAR_1->hwif->dma_ops;

 if ((VAR_1->dev_flags & VAR_0) == 0 ||
     (VAR_3->dma_check && VAR_3->dma_check(VAR_1, VAR_2)))
  goto out;
 FUNC_2(VAR_1, VAR_2);
 if (FUNC_0(VAR_1, VAR_2) == 0)
  goto out_map;
 if (VAR_3->dma_setup(VAR_1, VAR_2))
  goto out_dma_unmap;
 VAR_1->waiting_for_dma = 1;
 return 0;
out_dma_unmap:
 FUNC_1(VAR_1, VAR_2);
out_map:
 FUNC_2(VAR_1, VAR_2);
out:
 return 1;
}
