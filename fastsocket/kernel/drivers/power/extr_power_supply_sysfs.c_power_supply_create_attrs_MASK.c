
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply {int num_properties; size_t* properties; int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int * VAR_0 ;
 int * VAR_1 ;

int FUNC_3(struct power_supply *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  VAR_3 = FUNC_1(VAR_2->dev,
       &VAR_1[VAR_4]);
  if (VAR_3)
   goto statics_failed;
 }

 for (VAR_5 = 0; VAR_5 < VAR_2->num_properties; VAR_5++) {
  VAR_3 = FUNC_1(VAR_2->dev,
       &VAR_0[VAR_2->properties[VAR_5]]);
  if (VAR_3)
   goto dynamics_failed;
 }

 goto succeed;

dynamics_failed:
 while (VAR_5--)
  FUNC_2(VAR_2->dev,
      &VAR_0[VAR_2->properties[VAR_5]]);
statics_failed:
 while (VAR_4--)
  FUNC_2(VAR_2->dev, &VAR_1[VAR_4]);
succeed:
 return VAR_3;
}
