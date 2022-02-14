
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {TYPE_1__ cdev; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  VAR_1[VAR_3].cdev.flags |= VAR_0;
  VAR_4 = FUNC_1(&VAR_2->dev,
    &VAR_1[VAR_3].cdev);
  if (VAR_4 < 0)
   goto fail;
 }

 return 0;
fail:
 while (--VAR_3 >= 0)
  FUNC_2(&VAR_1[VAR_3].cdev);
 return VAR_4;
}
