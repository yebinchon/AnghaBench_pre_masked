
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * release; int * bus; } ;
struct i2o_device {TYPE_1__ device; int lock; int list; } ;


 int VAR_0 ;
 struct i2o_device* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 struct i2o_device* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct i2o_device *FUNC_4(void)
{
 struct i2o_device *VAR_4;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 FUNC_1(&VAR_4->list);
 FUNC_3(&VAR_4->lock);

 VAR_4->device.bus = &VAR_2;
 VAR_4->device.release = &VAR_3;

 return VAR_4;
}
