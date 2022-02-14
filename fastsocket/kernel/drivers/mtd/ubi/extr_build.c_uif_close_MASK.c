
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct ubi_device {scalar_t__ vtbl_slots; TYPE_1__ cdev; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct ubi_device*) ;
 int FUNC_2 (struct ubi_device*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct ubi_device *VAR_0)
{
 FUNC_1(VAR_0);
 FUNC_2(VAR_0);
 FUNC_0(&VAR_0->cdev);
 FUNC_3(VAR_0->cdev.dev, VAR_0->vtbl_slots + 1);
}
