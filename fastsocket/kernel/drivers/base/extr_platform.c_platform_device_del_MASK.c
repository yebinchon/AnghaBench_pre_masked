
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int num_resources; struct resource* resource; int dev; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct resource*) ;
 unsigned long FUNC_2 (struct resource*) ;

void FUNC_3(struct platform_device *VAR_2)
{
 int VAR_3;

 if (VAR_2) {
  FUNC_0(&VAR_2->dev);

  for (VAR_3 = 0; VAR_3 < VAR_2->num_resources; VAR_3++) {
   struct resource *VAR_4 = &VAR_2->resource[VAR_3];
   unsigned long VAR_5 = FUNC_2(VAR_4);

   if (VAR_5 == VAR_1 || VAR_5 == VAR_0)
    FUNC_1(VAR_4);
  }
 }
}
