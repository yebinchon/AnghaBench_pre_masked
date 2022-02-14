
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int class_id; } ;
struct i2o_device {int device; TYPE_1__ lct_data; } ;




 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct i2o_device *VAR_0)
{
 switch (VAR_0->lct_data.class_id) {
 case 129:
 case 128:
  FUNC_0(&VAR_0->device);
  break;

 default:
  break;
 }
}
