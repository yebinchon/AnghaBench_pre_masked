
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tape_request {int dummy; } ;
struct tape_device {TYPE_1__* cdev; } ;
struct irb {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct tape_device*,struct tape_request*,struct irb*,int ) ;

__attribute__((used)) static int
FUNC_2(struct tape_device *VAR_1, struct tape_request *VAR_2,
     struct irb *VAR_3)
{






 FUNC_0 (&VAR_1->cdev->dev, "The tape medium must be loaded into a "
  "different tape unit\n");
 return FUNC_1(VAR_1, VAR_2, VAR_3, -VAR_0);
}
