
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drv_dev_and_id {int id; int dev; TYPE_1__* drv; } ;
struct TYPE_2__ {long (* probe ) (int ,int ) ;} ;


 long FUNC_0 (int ,int ) ;

__attribute__((used)) static long FUNC_1(void *VAR_0)
{
 struct drv_dev_and_id *VAR_1 = VAR_0;

 return VAR_1->drv->probe(VAR_1->dev, VAR_1->id);
}
