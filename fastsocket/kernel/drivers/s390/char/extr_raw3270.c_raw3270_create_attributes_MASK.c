
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct raw3270 {TYPE_1__* cdev; int minor; void* cltubdev; void* clttydev; } ;
struct TYPE_5__ {int kobj; } ;
struct TYPE_4__ {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (void*) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*) ;
 void* FUNC_4 (int ,TYPE_2__*,int ,int *,char*,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_3 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static int FUNC_8(struct raw3270 *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_6(&VAR_4->cdev->dev.kobj, &VAR_3);
 if (VAR_5)
  goto out;

 VAR_4->clttydev = FUNC_4(VAR_2, &VAR_4->cdev->dev,
         FUNC_1(VAR_1, VAR_4->minor), ((void*)0),
         "tty%s", FUNC_3(&VAR_4->cdev->dev));
 if (FUNC_0(VAR_4->clttydev)) {
  VAR_5 = FUNC_2(VAR_4->clttydev);
  goto out_ttydev;
 }

 VAR_4->cltubdev = FUNC_4(VAR_2, &VAR_4->cdev->dev,
         FUNC_1(VAR_0, VAR_4->minor), ((void*)0),
         "tub%s", FUNC_3(&VAR_4->cdev->dev));
 if (!FUNC_0(VAR_4->cltubdev))
  goto out;

 VAR_5 = FUNC_2(VAR_4->cltubdev);
 FUNC_5(VAR_2, FUNC_1(VAR_1, VAR_4->minor));

out_ttydev:
 FUNC_7(&VAR_4->cdev->dev.kobj, &VAR_3);
out:
 return VAR_5;
}
