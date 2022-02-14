
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dasd_device {TYPE_2__* cdev; int flags; TYPE_1__* block; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int bp_block; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct dasd_device*,int ,int ,int *) ;
 int FUNC_2 (struct dasd_device*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct dasd_device *VAR_1)
{
 int VAR_2;

 FUNC_2(VAR_1);
 VAR_2 = FUNC_1(VAR_1, VAR_1->block->bp_block, 0, ((void*)0));
 if (VAR_2 == 4) {
  if (!(FUNC_3(VAR_0, &VAR_1->flags)))
   FUNC_0(&VAR_1->cdev->dev,
     "The access mode of a DIAG device changed"
     " to read-only");
  VAR_2 = 0;
 }
 if (VAR_2)
  FUNC_0(&VAR_1->cdev->dev, "DIAG ERP failed with "
       "rc=%d\n", VAR_2);
}
