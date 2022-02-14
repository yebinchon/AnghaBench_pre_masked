
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply {int num_properties; size_t* properties; int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int * VAR_0 ;
 int * VAR_1 ;

void FUNC_2(struct power_supply *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++)
  FUNC_1(VAR_2->dev, &VAR_1[VAR_3]);

 for (VAR_3 = 0; VAR_3 < VAR_2->num_properties; VAR_3++)
  FUNC_1(VAR_2->dev,
       &VAR_0[VAR_2->properties[VAR_3]]);
}
