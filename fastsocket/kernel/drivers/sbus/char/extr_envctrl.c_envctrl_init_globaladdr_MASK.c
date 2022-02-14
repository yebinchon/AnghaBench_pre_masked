
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_child_t {int total_chnls; int * mon_type; int voltage_mask; TYPE_1__* chnl_array; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_0(struct i2c_child_t *VAR_3)
{
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_3->total_chnls; VAR_4++) {
  if (VAR_1 == VAR_3->chnl_array[VAR_4].type) {
   VAR_3->voltage_mask |= VAR_2[VAR_4];
  }
 }





 VAR_3->mon_type[0] = VAR_0;
}
