
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__** drv; TYPE_1__* pdev; scalar_t__* gendisk; } ;
typedef TYPE_3__ ctlr_info_t ;
struct TYPE_10__ {scalar_t__ busy_configuring; int LunID; } ;
struct TYPE_9__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int ,unsigned char*,int) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(ctlr_info_t *VAR_1, unsigned char VAR_2[],
 int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_3);
 if (VAR_4 == -1)
  return -1;


 if (!VAR_1->gendisk[VAR_4]) {
  VAR_1->gendisk[VAR_4] =
   FUNC_0(1 << VAR_0);
  if (!VAR_1->gendisk[VAR_4]) {
   FUNC_5(&VAR_1->pdev->dev,
    "could not allocate a new disk %d\n",
    VAR_4);
   goto err_free_drive_info;
  }
 }
 FUNC_6(VAR_1->drv[VAR_4]->LunID, VAR_2,
  sizeof(VAR_1->drv[VAR_4]->LunID));
 if (FUNC_2(VAR_1, VAR_4))
  goto err_free_disk;



 VAR_1->drv[VAR_4]->busy_configuring = 0;
 FUNC_7();
 return VAR_4;

err_free_disk:
 FUNC_4(VAR_1, VAR_4);
err_free_drive_info:
 FUNC_3(VAR_1, VAR_4);
 return -1;
}
