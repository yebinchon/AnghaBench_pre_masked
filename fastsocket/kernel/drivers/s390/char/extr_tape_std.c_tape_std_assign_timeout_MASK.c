
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tape_request {struct tape_device* device; } ;
struct tape_device {TYPE_1__* cdev; int cdev_id; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int ,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tape_device*,struct tape_request*) ;

__attribute__((used)) static void
FUNC_4(unsigned long VAR_0)
{
 struct tape_request * VAR_1;
 struct tape_device * VAR_2;
 int VAR_3;

 VAR_1 = (struct tape_request *) VAR_0;
 VAR_2 = VAR_1->device;
 FUNC_0(!VAR_2);

 FUNC_1(3, "%08x: Assignment timeout. Device busy.\n",
   VAR_2->cdev_id);
 VAR_3 = FUNC_3(VAR_2, VAR_1);
 if(VAR_3)
  FUNC_1(3, "(%s): Assign timeout: Cancel failed with rc = %i\n",
   FUNC_2(&VAR_2->cdev->dev), VAR_3);
}
