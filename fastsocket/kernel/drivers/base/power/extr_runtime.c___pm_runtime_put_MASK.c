
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int usage_count; } ;
struct device {TYPE_1__ power; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;

int FUNC_3(struct device *VAR_0, bool VAR_1)
{
 int VAR_2 = 0;

 if (FUNC_0(&VAR_0->power.usage_count))
  VAR_2 = VAR_1 ? FUNC_2(VAR_0) : FUNC_1(VAR_0);

 return VAR_2;
}
