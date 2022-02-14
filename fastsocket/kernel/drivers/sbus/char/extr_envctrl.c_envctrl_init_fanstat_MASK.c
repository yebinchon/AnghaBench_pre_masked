
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_child_t {int total_chnls; int * mon_type; TYPE_1__* chnl_array; int fan_mask; } ;
struct TYPE_2__ {size_t chnl_no; } ;


 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_0(struct i2c_child_t *VAR_2)
{
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_2->total_chnls; VAR_3++)
  VAR_2->fan_mask |= VAR_1[(VAR_2->chnl_array[VAR_3]).chnl_no];




 VAR_2->mon_type[0] = VAR_0;
}
