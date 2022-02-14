
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct gendisk {int dummy; } ;
struct TYPE_11__ {TYPE_2__* pdev; struct gendisk** gendisk; TYPE_1__** drv; } ;
typedef TYPE_3__ ctlr_info_t ;
struct TYPE_10__ {int dev; } ;
struct TYPE_9__ {int block_size; int raid_level; int serial_no; scalar_t__ cylinders; scalar_t__ sectors; scalar_t__ heads; scalar_t__ nr_blocks; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,struct gendisk*,int) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static void FUNC_6(ctlr_info_t *VAR_1)
{
 struct gendisk *VAR_2;
 int VAR_3;

 if (VAR_1->gendisk[0] != ((void*)0))
  return;

 VAR_3 = FUNC_1(VAR_1, VAR_0, 1);
 if (VAR_3 == -1)
  goto error;
 VAR_1->drv[VAR_3]->block_size = 512;
 VAR_1->drv[VAR_3]->nr_blocks = 0;
 VAR_1->drv[VAR_3]->heads = 0;
 VAR_1->drv[VAR_3]->sectors = 0;
 VAR_1->drv[VAR_3]->cylinders = 0;
 VAR_1->drv[VAR_3]->raid_level = -1;
 FUNC_5(VAR_1->drv[VAR_3]->serial_no, 0, 16);
 VAR_2 = VAR_1->gendisk[VAR_3];
 if (FUNC_0(VAR_1, VAR_2, VAR_3) == 0)
  return;
 FUNC_3(VAR_1, VAR_3);
 FUNC_2(VAR_1, VAR_3);
error:
 FUNC_4(&VAR_1->pdev->dev, "could not add disk 0.\n");
 return;
}
