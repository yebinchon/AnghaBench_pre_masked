
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_device {int dev; } ;
struct TYPE_2__ {struct ib_device ibdev; } ;
struct qib_devdata {TYPE_1__ verbs_dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int * VAR_0 ;

int FUNC_2(struct qib_devdata *VAR_1)
{
 struct ib_device *VAR_2 = &VAR_1->verbs_dev.ibdev;
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); ++VAR_3) {
  VAR_4 = FUNC_1(&VAR_2->dev, VAR_0[VAR_3]);
  if (VAR_4)
   return VAR_4;
 }

 return 0;
}
