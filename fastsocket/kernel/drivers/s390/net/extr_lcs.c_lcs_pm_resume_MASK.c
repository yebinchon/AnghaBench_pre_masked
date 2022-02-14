
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lcs_card {scalar_t__ state; TYPE_1__* gdev; scalar_t__ dev; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct lcs_card *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1->state == VAR_0)
  VAR_2 = FUNC_1(VAR_1->gdev);
 if (VAR_1->dev)
  FUNC_2(VAR_1->dev);
 if (VAR_2) {
  FUNC_0(&VAR_1->gdev->dev, "The lcs device driver "
   "failed to recover the device\n");
 }
 return VAR_2;
}
