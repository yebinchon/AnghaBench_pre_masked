
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_bulk_data {int * consumer; int supply; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*,int ) ;
 int * FUNC_3 (struct device*,int ) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct device *VAR_0, int VAR_1,
         struct regulator_bulk_data *VAR_2)
{
 int VAR_3;
 int VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  VAR_2[VAR_3].consumer = ((void*)0);

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_2[VAR_3].consumer = FUNC_3(VAR_0,
            VAR_2[VAR_3].supply);
  if (FUNC_0(VAR_2[VAR_3].consumer)) {
   FUNC_2(VAR_0, "Failed to get supply '%s'\n",
    VAR_2[VAR_3].supply);
   VAR_4 = FUNC_1(VAR_2[VAR_3].consumer);
   VAR_2[VAR_3].consumer = ((void*)0);
   goto err;
  }
 }

 return 0;

err:
 for (VAR_3 = 0; VAR_3 < VAR_1 && VAR_2[VAR_3].consumer; VAR_3++)
  FUNC_4(VAR_2[VAR_3].consumer);

 return VAR_4;
}
