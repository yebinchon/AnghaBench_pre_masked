
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tape_request {scalar_t__ op; } ;
struct tape_device {TYPE_1__* cdev; } ;
struct irb {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct tape_request*,int ) ;
 int FUNC_2 (struct tape_device*,struct tape_request*,struct irb*) ;

__attribute__((used)) static int
FUNC_3(struct tape_device *VAR_2, struct tape_request *VAR_3,
    struct irb *VAR_4, int VAR_5)
{
 if (VAR_3->op != VAR_1) {
  FUNC_0(&VAR_2->cdev->dev, "An unexpected condition %d "
   "occurred in tape error recovery\n", VAR_5);
  FUNC_2(VAR_2, VAR_3, VAR_4);
 }
 return FUNC_1(VAR_3, -VAR_0);
}
