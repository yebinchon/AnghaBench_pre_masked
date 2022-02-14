
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct nouveau_therm_priv {TYPE_2__* fan; } ;
struct nouveau_therm {scalar_t__ (* temp_get ) (struct nouveau_therm*) ;} ;
struct TYPE_3__ {scalar_t__ linear_min_temp; scalar_t__ linear_max_temp; int min_duty; int max_duty; } ;
struct TYPE_4__ {TYPE_1__ bios; } ;


 scalar_t__ FUNC_0 (struct nouveau_therm*) ;

__attribute__((used)) static int
FUNC_1(struct nouveau_therm *VAR_0)
{
 struct nouveau_therm_priv *VAR_1 = (void *)VAR_0;
 u8 VAR_2 = VAR_1->fan->bios.linear_min_temp;
 u8 VAR_3 = VAR_1->fan->bios.linear_max_temp;
 u8 VAR_4 = VAR_0->temp_get(VAR_0);
 u16 VAR_5;


 if (VAR_4 < VAR_2)
  return VAR_1->fan->bios.min_duty;
 else if (VAR_4 > VAR_3)
  return VAR_1->fan->bios.max_duty;


 VAR_5 = (VAR_4 - VAR_2);
 VAR_5 *= (VAR_1->fan->bios.max_duty - VAR_1->fan->bios.min_duty);
 VAR_5 /= (VAR_3 - VAR_2);
 VAR_5 += VAR_1->fan->bios.min_duty;

 return VAR_5;
}
