
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pc87427_data {int fan_enabled; int lock; scalar_t__ last_updated; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct pc87427_data* FUNC_0 (struct device*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pc87427_data*,int) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct pc87427_data *FUNC_5(struct device *VAR_2)
{
 struct pc87427_data *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 FUNC_1(&VAR_3->lock);
 if (!FUNC_4(VAR_1, VAR_3->last_updated + VAR_0)
  && VAR_3->last_updated)
  goto done;


 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  if (!(VAR_3->fan_enabled & (1 << VAR_4)))
   continue;
  FUNC_3(VAR_3, VAR_4);
 }
 VAR_3->last_updated = VAR_1;

done:
 FUNC_2(&VAR_3->lock);
 return VAR_3;
}
