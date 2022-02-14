
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sht15_data {scalar_t__ supply_uV; int val_temp; } ;
struct TYPE_3__ {int d1; scalar_t__ vdd; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline int FUNC_1(struct sht15_data *VAR_1)
{
 int VAR_2 = VAR_0[0].d1;
 int VAR_3;

 for (VAR_3 = FUNC_0(VAR_0) - 1; VAR_3 > 0; VAR_3--)

  if (VAR_1->supply_uV > VAR_0[VAR_3 - 1].vdd) {
   VAR_2 = (VAR_1->supply_uV - VAR_0[VAR_3 - 1].vdd)
    * (VAR_0[VAR_3].d1 - VAR_0[VAR_3 - 1].d1)
    / (VAR_0[VAR_3].vdd - VAR_0[VAR_3 - 1].vdd)
    + VAR_0[VAR_3 - 1].d1;
   break;
  }

 return VAR_1->val_temp*10 + VAR_2;
}
