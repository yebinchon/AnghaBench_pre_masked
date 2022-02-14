
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u16 ;
struct nouveau_therm_trip_point {scalar_t__ temp; scalar_t__ hysteresis; size_t fan_duty; } ;
struct nouveau_therm_priv {struct nouveau_therm_trip_point* last_trip; TYPE_2__* fan; } ;
struct nouveau_therm {scalar_t__ (* temp_get ) (struct nouveau_therm*) ;} ;
struct TYPE_3__ {size_t nr_fan_trip; struct nouveau_therm_trip_point* trip; } ;
struct TYPE_4__ {TYPE_1__ bios; } ;


 scalar_t__ FUNC_0 (struct nouveau_therm*) ;

__attribute__((used)) static int
FUNC_1(struct nouveau_therm *VAR_0)
{
 struct nouveau_therm_priv *VAR_1 = (void *)VAR_0;
 struct nouveau_therm_trip_point *VAR_2 = VAR_1->fan->bios.trip,
     *VAR_3 = ((void*)0),
     *VAR_4 = VAR_1->last_trip;
 u8 VAR_5 = VAR_0->temp_get(VAR_0);
 u16 VAR_6, VAR_7;


 VAR_3 = ((void*)0);
 for (VAR_7 = 0; VAR_7 < VAR_1->fan->bios.nr_fan_trip; VAR_7++) {
  if (VAR_5 >= VAR_2[VAR_7].temp)
   VAR_3 = &VAR_2[VAR_7];
 }


 if (VAR_4 && VAR_5 <= (VAR_4->temp) &&
     VAR_5 > (VAR_4->temp - VAR_4->hysteresis))
  VAR_3 = VAR_4;

 if (VAR_3) {
  VAR_6 = VAR_3->fan_duty;
  VAR_1->last_trip = VAR_3;
 } else {
  VAR_6 = 0;
  VAR_1->last_trip = ((void*)0);
 }

 return VAR_6;
}
