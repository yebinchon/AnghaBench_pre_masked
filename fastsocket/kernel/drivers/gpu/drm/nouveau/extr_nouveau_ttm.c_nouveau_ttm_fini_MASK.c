
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mtrr; int bdev; } ;
struct nouveau_drm {TYPE_2__ ttm; TYPE_1__* dev; } ;
struct TYPE_3__ {int pdev; int struct_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nouveau_drm*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;

void
FUNC_8(struct nouveau_drm *VAR_3)
{
 FUNC_1(&VAR_3->dev->struct_mutex);
 FUNC_6(&VAR_3->ttm.bdev, VAR_2);
 FUNC_6(&VAR_3->ttm.bdev, VAR_1);
 FUNC_2(&VAR_3->dev->struct_mutex);

 FUNC_7(&VAR_3->ttm.bdev);

 FUNC_3(VAR_3);

 if (VAR_3->ttm.mtrr >= 0) {
  FUNC_0(VAR_3->ttm.mtrr,
        FUNC_5(VAR_3->dev->pdev, 1),
        FUNC_4(VAR_3->dev->pdev, 1), VAR_0);
  VAR_3->ttm.mtrr = -1;
 }
}
